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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct Action_1_t3114543800;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct Action_1_t464622055;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct Action_1_t1168103046;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct Action_1_t3725713036;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct Action_1_t765149492;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct Action_1_t1957047783;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct Action_1_t1288711754;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct Action_1_t40843125;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct Action_1_t3270971242;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct Action_1_t341761863;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct Action_1_t3544757211;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct Action_1_t1156518837;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct Action_1_t4073128488;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct Action_1_t1098359099;
// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct Action_1_t2902256995;
// System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct Action_1_t4226881109;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>[]
struct EntryU5BU5D_t1205941800;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct KeyCollection_t3132802316;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct ValueCollection_t364203867;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t2696614423;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct Dictionary_2_t2943126845;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t3491343620;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t2475741330;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t537414295;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>
struct List_1_t1469039449;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t3135238028;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>
struct Predicate_1_t822258831;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Audio.AudioSpatializerMicrosoft
struct AudioSpatializerMicrosoft_t3761211273;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t2331243652;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t3630163547;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t2019268878;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.HoloLensInput
struct HoloLensInput_t4157575750;
// UnityEngine.EventSystems.HoloLensInputModule
struct HoloLensInputModule_t3599952490;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_t3453173740;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t384203932;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t2760469101;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3495933518;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MeshCollider
struct MeshCollider_t903564387;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t2874185564;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_t1566529591;
// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate
struct GestureErrorDelegate_t3254371646;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate
struct HoldCanceledEventDelegate_t3242927192;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate
struct HoldCompletedEventDelegate_t4112318659;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate
struct HoldStartedEventDelegate_t1669693510;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate
struct ManipulationCanceledEventDelegate_t3141027694;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate
struct ManipulationCompletedEventDelegate_t3126788776;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate
struct ManipulationStartedEventDelegate_t1581880091;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate
struct ManipulationUpdatedEventDelegate_t2990350064;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate
struct NavigationCanceledEventDelegate_t2505886250;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate
struct NavigationCompletedEventDelegate_t3119650473;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate
struct NavigationStartedEventDelegate_t3496816902;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate
struct NavigationUpdatedEventDelegate_t2894903996;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate
struct RecognitionEndedEventDelegate_t2892804592;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate
struct RecognitionStartedEventDelegate_t3727320336;
// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate
struct TappedEventDelegate_t286622765;
// UnityEngine.XR.WSA.SpatialMappingBase
struct SpatialMappingBase_t1565881417;
// UnityEngine.XR.WSA.SpatialMappingBase/Surface
struct Surface_t4054413514;
// UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback
struct SurfaceDataReadyCallback_t2457228298;
// UnityEngine.XR.WSA.SpatialMappingCollider
struct SpatialMappingCollider_t1632102360;
// UnityEngine.XR.WSA.SpatialMappingContext
struct SpatialMappingContext_t1697439830;
// UnityEngine.XR.WSA.SpatialMappingContext/<DeregisterComponent>c__AnonStorey1
struct U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538;
// UnityEngine.XR.WSA.SpatialMappingContext/<RegisterComponent>c__AnonStorey0
struct U3CRegisterComponentU3Ec__AnonStorey0_t222113166;
// UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback
struct GetHighestPriorityCallback_t3420804231;
// UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest[]
struct SMBakeRequestU5BU5D_t3259285392;
// UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
struct SMComponentRecord_t4291932003;
// UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord[]
struct SMComponentRecordU5BU5D_t2752229298;
// UnityEngine.XR.WSA.SpatialMappingRenderer
struct SpatialMappingRenderer_t1808097488;
// UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t200825419;
// UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_t1930409633;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate
struct SurfaceChangedDelegate_t2591813092;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate
struct SurfaceDataReadyDelegate_t4152308677;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_t2161774153;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t3480415086;

extern RuntimeClass* Action_1_t1156518837_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t2902256995_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3270971242_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t341761863_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3544757211_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t4226881109_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2943126845_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* GestureRecognizer_t1566529591_il2cpp_TypeInfo_var;
extern RuntimeClass* GetHighestPriorityCallback_t3420804231_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1469039449_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Predicate_1_t822258831_il2cpp_TypeInfo_var;
extern RuntimeClass* RectTransformUtility_t1743242446_il2cpp_TypeInfo_var;
extern RuntimeClass* SMBakeRequestU5BU5D_t3259285392_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var;
extern RuntimeClass* SpatialMappingContext_t1697439830_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceChangedDelegate_t2591813092_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceDataReadyCallback_t2457228298_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceDataReadyDelegate_t4152308677_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceData_t200825419_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceObserver_t1930409633_il2cpp_TypeInfo_var;
extern RuntimeClass* Surface_t4054413514_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CRegisterComponentU3Ec__AnonStorey0_t222113166_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255372____U24fieldU2DD15896F389DBE7C4EB4B27E5CA408E92D08149C9_0_FieldInfo_var;
extern String_t* _stringLiteral1061430505;
extern String_t* _stringLiteral1110979500;
extern String_t* _stringLiteral1285157625;
extern String_t* _stringLiteral139343397;
extern String_t* _stringLiteral1601630912;
extern String_t* _stringLiteral1661863850;
extern String_t* _stringLiteral2011594946;
extern String_t* _stringLiteral2080566521;
extern String_t* _stringLiteral2157998569;
extern String_t* _stringLiteral3024037018;
extern String_t* _stringLiteral3594459470;
extern String_t* _stringLiteral3807659798;
extern String_t* _stringLiteral3913530819;
extern String_t* _stringLiteral3952112447;
extern String_t* _stringLiteral4028545695;
extern String_t* _stringLiteral4152309335;
extern String_t* _stringLiteral720981499;
extern String_t* _stringLiteral846040651;
extern const RuntimeMethod* Action_1_Invoke_m3713600556_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m1275483063_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2118875495_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2185077854_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2863752444_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3347797990_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m82690689_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m2193089347_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisHoloLensInputModule_t3599952490_m88657983_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisHoloLensInput_t4157575750_m2391789968_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3142488424_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m1864584243_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2572687910_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m2741774404_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3606827976_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3933169253_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m3196174006_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3334157318_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m304484421_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2945450316_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m76550905_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2331042058_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m408144751_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1173067942_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1264606807_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisHoloLensInput_t4157575750_m1267438782_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_t903564387_m855072157_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t3523625662_m1910295747_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t587009260_m412216294_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisWorldAnchor_t2161774153_m1146425241_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t3523625662_m1245918568_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t587009260_m758541173_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisWorldAnchor_t2161774153_m3129018124_RuntimeMethod_var;
extern const RuntimeMethod* HoloLensInput_GestureHandler_OnNavigationCanceled_m4190221622_RuntimeMethod_var;
extern const RuntimeMethod* HoloLensInput_GestureHandler_OnNavigationCompleted_m4038163504_RuntimeMethod_var;
extern const RuntimeMethod* HoloLensInput_GestureHandler_OnNavigationStarted_m4120052574_RuntimeMethod_var;
extern const RuntimeMethod* HoloLensInput_GestureHandler_OnNavigationUpdated_m3726276814_RuntimeMethod_var;
extern const RuntimeMethod* HoloLensInput_GestureHandler_OnTapped_m3280423155_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3348634344_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2080863212_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m376061299_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3865004651_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Find_m1208598465_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m101756636_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAll_m3087115158_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m794802037_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1204004817_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3285698757_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3438314823_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m414841771_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1040871401_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1086679910_RuntimeMethod_var;
extern const RuntimeMethod* Predicate_1__ctor_m2455368237_RuntimeMethod_var;
extern const RuntimeMethod* SpatialMappingBase_OnSurfaceChanged_m3121177166_RuntimeMethod_var;
extern const RuntimeMethod* SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Em__0_m3882804129_RuntimeMethod_var;
extern const RuntimeMethod* SpatialMappingContext_DeregisterComponent_m2711223001_RuntimeMethod_var;
extern const RuntimeMethod* SpatialMappingContext_OnSurfaceDataReady_m2293454231_RuntimeMethod_var;
extern const RuntimeMethod* SpatialMappingContext_RegisterComponent_m1382065901_RuntimeMethod_var;
extern const RuntimeMethod* U3CDeregisterComponentU3Ec__AnonStorey1_U3CU3Em__0_m1267700509_RuntimeMethod_var;
extern const RuntimeMethod* U3CRegisterComponentU3Ec__AnonStorey0_U3CU3Em__0_m1240286447_RuntimeMethod_var;
extern const uint32_t AudioSpatializerMicrosoft_get_audioSource_m2096898666_MetadataUsageId;
extern const uint32_t GetHighestPriorityCallback_BeginInvoke_m1577895165_MetadataUsageId;
extern const uint32_t HoloLensInputModule_Awake_m1201948299_MetadataUsageId;
extern const uint32_t HoloLensInputModule_IsModuleSupported_m195902423_MetadataUsageId;
extern const uint32_t HoloLensInput_Awake_m3731921795_MetadataUsageId;
extern const uint32_t HoloLensInput_EmulateMousePosition_m4159836491_MetadataUsageId;
extern const uint32_t HoloLensInput_GestureHandler_OnNavigationStarted_m4120052574_MetadataUsageId;
extern const uint32_t HoloLensInput_GetGazeAndGestureScreenPosition_m2931287743_MetadataUsageId;
extern const uint32_t HoloLensInput_GetGestureScrollDelta_m4045976453_MetadataUsageId;
extern const uint32_t HoloLensInput_OnDestroy_m968357151_MetadataUsageId;
extern const uint32_t HoloLensInput_OnNavigationCompletedOrCanceled_m1485381899_MetadataUsageId;
extern const uint32_t HoloLensInput_TryGetAnchorWorldSpace_m3603888745_MetadataUsageId;
extern const uint32_t HoloLensInput__ctor_m2641801619_MetadataUsageId;
extern const uint32_t SMComponentRecord_IsClear_m669906794_MetadataUsageId;
extern const uint32_t SpatialMappingBase_AddRequiredComponentsForBaking_m589190807_MetadataUsageId;
extern const uint32_t SpatialMappingBase_BoundsContains_m2272712744_MetadataUsageId;
extern const uint32_t SpatialMappingBase_CloneBakedComponents_m2758487843_MetadataUsageId;
extern const uint32_t SpatialMappingBase_CreateSurface_m210883022_MetadataUsageId;
extern const uint32_t SpatialMappingBase_DestroySurface_m298508766_MetadataUsageId;
extern const uint32_t SpatialMappingBase_ForEachSurfaceInCache_m41844318_MetadataUsageId;
extern const uint32_t SpatialMappingBase_OnAddOrUpdateSurface_m4264909164_MetadataUsageId;
extern const uint32_t SpatialMappingBase_OnDestroy_m3399831572_MetadataUsageId;
extern const uint32_t SpatialMappingBase_OnDisable_m3062484944_MetadataUsageId;
extern const uint32_t SpatialMappingBase_OnEnable_m46936215_MetadataUsageId;
extern const uint32_t SpatialMappingBase_OnRemoveSurface_m2379226760_MetadataUsageId;
extern const uint32_t SpatialMappingBase_ProcessEvictedObjects_m1133365705_MetadataUsageId;
extern const uint32_t SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m3306344036_MetadataUsageId;
extern const uint32_t SpatialMappingBase_Start_m2201571065_MetadataUsageId;
extern const uint32_t SpatialMappingBase_TryGetHighestPriorityRequest_m4061701214_MetadataUsageId;
extern const uint32_t SpatialMappingBase_UpdateSurfaceData_m2114368718_MetadataUsageId;
extern const uint32_t SpatialMappingBase_Update_m3308418223_MetadataUsageId;
extern const uint32_t SpatialMappingBase__cctor_m3118431880_MetadataUsageId;
extern const uint32_t SpatialMappingBase__ctor_m3608052931_MetadataUsageId;
extern const uint32_t SpatialMappingBase_get_lodToPcm_m1331271856_MetadataUsageId;
extern const uint32_t SpatialMappingCollider_AddRequiredComponentsForBaking_m1293650252_MetadataUsageId;
extern const uint32_t SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m3709253588_MetadataUsageId;
extern const uint32_t SpatialMappingCollider_OnBeginSurfaceEviction_m3329450924_MetadataUsageId;
extern const uint32_t SpatialMappingCollider_OnSurfaceDataReady_m3101173399_MetadataUsageId;
extern const uint32_t SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Em__0_m3882804129_MetadataUsageId;
extern const uint32_t SpatialMappingCollider__ctor_m1097103321_MetadataUsageId;
extern const uint32_t SpatialMappingContext_DeregisterComponent_m2711223001_MetadataUsageId;
extern const uint32_t SpatialMappingContext_PropagateDataReadyEventToComponents_m66442097_MetadataUsageId;
extern const uint32_t SpatialMappingContext_RegisterComponent_m1382065901_MetadataUsageId;
extern const uint32_t SpatialMappingContext_RequestMeshPriorityFromComponents_m1980942071_MetadataUsageId;
extern const uint32_t SpatialMappingContext_UpdateInFlightRecords_m1761761938_MetadataUsageId;
extern const uint32_t SpatialMappingContext__cctor_m3693341998_MetadataUsageId;
extern const uint32_t SpatialMappingContext__ctor_m859583417_MetadataUsageId;
extern const uint32_t SpatialMappingContext_get_Instance_m527477890_MetadataUsageId;
extern const uint32_t SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m1197102617_MetadataUsageId;
extern const uint32_t SpatialMappingRenderer_ApplyRenderSettings_m3044446323_MetadataUsageId;
extern const uint32_t SpatialMappingRenderer_DestroySurface_m3478115798_MetadataUsageId;
extern const uint32_t SpatialMappingRenderer_OnBeginSurfaceEviction_m3773769302_MetadataUsageId;
extern const uint32_t SpatialMappingRenderer_OnSurfaceDataReady_m2124969018_MetadataUsageId;
extern const uint32_t SpatialMappingRenderer__ctor_m3018187447_MetadataUsageId;
extern const uint32_t SurfaceDataReadyCallback_BeginInvoke_m199031901_MetadataUsageId;
extern const uint32_t U3CDeregisterComponentU3Ec__AnonStorey1_U3CU3Em__0_m1267700509_MetadataUsageId;
extern const uint32_t U3CRegisterComponentU3Ec__AnonStorey0_U3CU3Em__0_m1240286447_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SMComponentRecord_t4291932003;;
struct SMComponentRecord_t4291932003_marshaled_com;
struct SMComponentRecord_t4291932003_marshaled_com;;
struct SMComponentRecord_t4291932003_marshaled_pinvoke;
struct SMComponentRecord_t4291932003_marshaled_pinvoke;;
struct SurfaceData_t200825419;;
struct SurfaceData_t200825419_marshaled_com;
struct SurfaceData_t200825419_marshaled_com;;
struct SurfaceData_t200825419_marshaled_pinvoke;
struct SurfaceData_t200825419_marshaled_pinvoke;;
struct SurfaceObserver_t1930409633;;
struct SurfaceObserver_t1930409633_marshaled_com;
struct SurfaceObserver_t1930409633_marshaled_com;;
struct SurfaceObserver_t1930409633_marshaled_pinvoke;
struct SurfaceObserver_t1930409633_marshaled_pinvoke;;

struct DelegateU5BU5D_t1703627840;
struct Int32U5BU5D_t385246372;
struct SMBakeRequestU5BU5D_t3259285392;


#ifndef U3CMODULEU3E_T692745573_H
#define U3CMODULEU3E_T692745573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745573 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745573_H
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
#ifndef DICTIONARY_2_T2943126845_H
#define DICTIONARY_2_T2943126845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct  Dictionary_2_t2943126845  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1205941800* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3132802316 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t364203867 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2943126845, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2943126845, ___entries_1)); }
	inline EntryU5BU5D_t1205941800* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1205941800** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1205941800* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2943126845, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2943126845, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2943126845, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2943126845, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2943126845, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2943126845, ___keys_7)); }
	inline KeyCollection_t3132802316 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3132802316 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3132802316 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2943126845, ___values_8)); }
	inline ValueCollection_t364203867 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t364203867 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t364203867 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2943126845, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2943126845_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t385246372* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t385246372* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t385246372** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t385246372* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LIST_1_T1469039449_H
#define LIST_1_T1469039449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>
struct  List_1_t1469039449  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SMComponentRecordU5BU5D_t2752229298* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1469039449, ____items_1)); }
	inline SMComponentRecordU5BU5D_t2752229298* get__items_1() const { return ____items_1; }
	inline SMComponentRecordU5BU5D_t2752229298** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SMComponentRecordU5BU5D_t2752229298* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1469039449, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1469039449, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1469039449, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1469039449_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SMComponentRecordU5BU5D_t2752229298* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1469039449_StaticFields, ____emptyArray_5)); }
	inline SMComponentRecordU5BU5D_t2752229298* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SMComponentRecordU5BU5D_t2752229298** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SMComponentRecordU5BU5D_t2752229298* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1469039449_H
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
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef SPATIALMAPPINGCONTEXT_T1697439830_H
#define SPATIALMAPPINGCONTEXT_T1697439830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingContext
struct  SpatialMappingContext_t1697439830  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord> UnityEngine.XR.WSA.SpatialMappingContext::m_Components
	List_1_t1469039449 * ___m_Components_2;
	// UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest[] UnityEngine.XR.WSA.SpatialMappingContext::m_InFlightRequests
	SMBakeRequestU5BU5D_t3259285392* ___m_InFlightRequests_3;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::m_InFlightSurfaces
	int32_t ___m_InFlightSurfaces_4;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::m_NextIndex
	int32_t ___m_NextIndex_5;

public:
	inline static int32_t get_offset_of_m_Components_2() { return static_cast<int32_t>(offsetof(SpatialMappingContext_t1697439830, ___m_Components_2)); }
	inline List_1_t1469039449 * get_m_Components_2() const { return ___m_Components_2; }
	inline List_1_t1469039449 ** get_address_of_m_Components_2() { return &___m_Components_2; }
	inline void set_m_Components_2(List_1_t1469039449 * value)
	{
		___m_Components_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Components_2), value);
	}

	inline static int32_t get_offset_of_m_InFlightRequests_3() { return static_cast<int32_t>(offsetof(SpatialMappingContext_t1697439830, ___m_InFlightRequests_3)); }
	inline SMBakeRequestU5BU5D_t3259285392* get_m_InFlightRequests_3() const { return ___m_InFlightRequests_3; }
	inline SMBakeRequestU5BU5D_t3259285392** get_address_of_m_InFlightRequests_3() { return &___m_InFlightRequests_3; }
	inline void set_m_InFlightRequests_3(SMBakeRequestU5BU5D_t3259285392* value)
	{
		___m_InFlightRequests_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_InFlightRequests_3), value);
	}

	inline static int32_t get_offset_of_m_InFlightSurfaces_4() { return static_cast<int32_t>(offsetof(SpatialMappingContext_t1697439830, ___m_InFlightSurfaces_4)); }
	inline int32_t get_m_InFlightSurfaces_4() const { return ___m_InFlightSurfaces_4; }
	inline int32_t* get_address_of_m_InFlightSurfaces_4() { return &___m_InFlightSurfaces_4; }
	inline void set_m_InFlightSurfaces_4(int32_t value)
	{
		___m_InFlightSurfaces_4 = value;
	}

	inline static int32_t get_offset_of_m_NextIndex_5() { return static_cast<int32_t>(offsetof(SpatialMappingContext_t1697439830, ___m_NextIndex_5)); }
	inline int32_t get_m_NextIndex_5() const { return ___m_NextIndex_5; }
	inline int32_t* get_address_of_m_NextIndex_5() { return &___m_NextIndex_5; }
	inline void set_m_NextIndex_5(int32_t value)
	{
		___m_NextIndex_5 = value;
	}
};

struct SpatialMappingContext_t1697439830_StaticFields
{
public:
	// UnityEngine.XR.WSA.SpatialMappingContext UnityEngine.XR.WSA.SpatialMappingContext::instance
	SpatialMappingContext_t1697439830 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(SpatialMappingContext_t1697439830_StaticFields, ___instance_0)); }
	inline SpatialMappingContext_t1697439830 * get_instance_0() const { return ___instance_0; }
	inline SpatialMappingContext_t1697439830 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(SpatialMappingContext_t1697439830 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALMAPPINGCONTEXT_T1697439830_H
#ifndef U3CDEREGISTERCOMPONENTU3EC__ANONSTOREY1_T2751021538_H
#define U3CDEREGISTERCOMPONENTU3EC__ANONSTOREY1_T2751021538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingContext/<DeregisterComponent>c__AnonStorey1
struct  U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext/<DeregisterComponent>c__AnonStorey1::smComponent
	SpatialMappingBase_t1565881417 * ___smComponent_0;

public:
	inline static int32_t get_offset_of_smComponent_0() { return static_cast<int32_t>(offsetof(U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538, ___smComponent_0)); }
	inline SpatialMappingBase_t1565881417 * get_smComponent_0() const { return ___smComponent_0; }
	inline SpatialMappingBase_t1565881417 ** get_address_of_smComponent_0() { return &___smComponent_0; }
	inline void set_smComponent_0(SpatialMappingBase_t1565881417 * value)
	{
		___smComponent_0 = value;
		Il2CppCodeGenWriteBarrier((&___smComponent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDEREGISTERCOMPONENTU3EC__ANONSTOREY1_T2751021538_H
#ifndef U3CREGISTERCOMPONENTU3EC__ANONSTOREY0_T222113166_H
#define U3CREGISTERCOMPONENTU3EC__ANONSTOREY0_T222113166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingContext/<RegisterComponent>c__AnonStorey0
struct  U3CRegisterComponentU3Ec__AnonStorey0_t222113166  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext/<RegisterComponent>c__AnonStorey0::smComponent
	SpatialMappingBase_t1565881417 * ___smComponent_0;

public:
	inline static int32_t get_offset_of_smComponent_0() { return static_cast<int32_t>(offsetof(U3CRegisterComponentU3Ec__AnonStorey0_t222113166, ___smComponent_0)); }
	inline SpatialMappingBase_t1565881417 * get_smComponent_0() const { return ___smComponent_0; }
	inline SpatialMappingBase_t1565881417 ** get_address_of_smComponent_0() { return &___smComponent_0; }
	inline void set_smComponent_0(SpatialMappingBase_t1565881417 * value)
	{
		___smComponent_0 = value;
		Il2CppCodeGenWriteBarrier((&___smComponent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREGISTERCOMPONENTU3EC__ANONSTOREY0_T222113166_H
#ifndef U24ARRAYTYPEU3D12_T2488454197_H
#define U24ARRAYTYPEU3D12_T2488454197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454197 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454197__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454197_H
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
#ifndef KEYVALUEPAIR_2_T71524366_H
#define KEYVALUEPAIR_2_T71524366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t71524366 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T71524366_H
#ifndef KEYVALUEPAIR_2_T1045831716_H
#define KEYVALUEPAIR_2_T1045831716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct  KeyValuePair_2_t1045831716 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Surface_t4054413514 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1045831716, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1045831716, ___value_1)); }
	inline Surface_t4054413514 * get_value_1() const { return ___value_1; }
	inline Surface_t4054413514 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Surface_t4054413514 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1045831716_H
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
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
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
#ifndef SURFACEID_T2999094746_H
#define SURFACEID_T2999094746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceId
struct  SurfaceId_t2999094746 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceId::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SurfaceId_t2999094746, ___handle_0)); }
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
#endif // SURFACEID_T2999094746_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255372_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255372  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255372_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-D15896F389DBE7C4EB4B27E5CA408E92D08149C9
	U24ArrayTypeU3D12_t2488454197  ___U24fieldU2DD15896F389DBE7C4EB4B27E5CA408E92D08149C9_0;

public:
	inline static int32_t get_offset_of_U24fieldU2DD15896F389DBE7C4EB4B27E5CA408E92D08149C9_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255372_StaticFields, ___U24fieldU2DD15896F389DBE7C4EB4B27E5CA408E92D08149C9_0)); }
	inline U24ArrayTypeU3D12_t2488454197  get_U24fieldU2DD15896F389DBE7C4EB4B27E5CA408E92D08149C9_0() const { return ___U24fieldU2DD15896F389DBE7C4EB4B27E5CA408E92D08149C9_0; }
	inline U24ArrayTypeU3D12_t2488454197 * get_address_of_U24fieldU2DD15896F389DBE7C4EB4B27E5CA408E92D08149C9_0() { return &___U24fieldU2DD15896F389DBE7C4EB4B27E5CA408E92D08149C9_0; }
	inline void set_U24fieldU2DD15896F389DBE7C4EB4B27E5CA408E92D08149C9_0(U24ArrayTypeU3D12_t2488454197  value)
	{
		___U24fieldU2DD15896F389DBE7C4EB4B27E5CA408E92D08149C9_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255372_H
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
#ifndef ENUMERATOR_T3923002270_H
#define ENUMERATOR_T3923002270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct  Enumerator_t3923002270 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1968819495 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t71524366  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___dictionary_0)); }
	inline Dictionary_2_t1968819495 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1968819495 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1968819495 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___current_3)); }
	inline KeyValuePair_2_t71524366  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t71524366 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t71524366  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3923002270_H
#ifndef ENUMERATOR_T602342324_H
#define ENUMERATOR_T602342324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct  Enumerator_t602342324 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2943126845 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1045831716  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t602342324, ___dictionary_0)); }
	inline Dictionary_2_t2943126845 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2943126845 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2943126845 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t602342324, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t602342324, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t602342324, ___current_3)); }
	inline KeyValuePair_2_t1045831716  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1045831716 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1045831716  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t602342324, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T602342324_H
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
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef ROOMSIZE_T2468047858_H
#define ROOMSIZE_T2468047858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioSpatializerMicrosoft/RoomSize
struct  RoomSize_t2468047858 
{
public:
	// System.Int32 UnityEngine.Audio.AudioSpatializerMicrosoft/RoomSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomSize_t2468047858, ___value___2)); }
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
#endif // ROOMSIZE_T2468047858_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef MOUSEEMULATIONMODE_T394518348_H
#define MOUSEEMULATIONMODE_T394518348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.HoloLensInput/MouseEmulationMode
struct  MouseEmulationMode_t394518348 
{
public:
	// System.Int32 UnityEngine.EventSystems.HoloLensInput/MouseEmulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MouseEmulationMode_t394518348, ___value___2)); }
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
#endif // MOUSEEMULATIONMODE_T394518348_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___2)); }
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
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
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
#ifndef SHADOWCASTINGMODE_T2280965600_H
#define SHADOWCASTINGMODE_T2280965600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t2280965600 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t2280965600, ___value___2)); }
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
#endif // SHADOWCASTINGMODE_T2280965600_H
#ifndef GESTURERECOGNIZER_T1566529591_H
#define GESTURERECOGNIZER_T1566529591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer
struct  GestureRecognizer_t1566529591  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Input.GestureRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceled
	Action_1_t464622055 * ___HoldCanceled_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompleted
	Action_1_t1168103046 * ___HoldCompleted_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStarted
	Action_1_t3725713036 * ___HoldStarted_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::Tapped
	Action_1_t2902256995 * ___Tapped_4;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceled
	Action_1_t765149492 * ___ManipulationCanceled_5;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompleted
	Action_1_t1957047783 * ___ManipulationCompleted_6;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStarted
	Action_1_t1288711754 * ___ManipulationStarted_7;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdated
	Action_1_t40843125 * ___ManipulationUpdated_8;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceled
	Action_1_t3270971242 * ___NavigationCanceled_9;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompleted
	Action_1_t341761863 * ___NavigationCompleted_10;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStarted
	Action_1_t3544757211 * ___NavigationStarted_11;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdated
	Action_1_t1156518837 * ___NavigationUpdated_12;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEnded
	Action_1_t4073128488 * ___RecognitionEnded_13;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStarted
	Action_1_t1098359099 * ___RecognitionStarted_14;
	// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::GestureError
	Action_1_t3114543800 * ___GestureError_15;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceledEvent
	HoldCanceledEventDelegate_t3242927192 * ___HoldCanceledEvent_16;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompletedEvent
	HoldCompletedEventDelegate_t4112318659 * ___HoldCompletedEvent_17;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStartedEvent
	HoldStartedEventDelegate_t1669693510 * ___HoldStartedEvent_18;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::TappedEvent
	TappedEventDelegate_t286622765 * ___TappedEvent_19;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceledEvent
	ManipulationCanceledEventDelegate_t3141027694 * ___ManipulationCanceledEvent_20;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompletedEvent
	ManipulationCompletedEventDelegate_t3126788776 * ___ManipulationCompletedEvent_21;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStartedEvent
	ManipulationStartedEventDelegate_t1581880091 * ___ManipulationStartedEvent_22;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdatedEvent
	ManipulationUpdatedEventDelegate_t2990350064 * ___ManipulationUpdatedEvent_23;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceledEvent
	NavigationCanceledEventDelegate_t2505886250 * ___NavigationCanceledEvent_24;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompletedEvent
	NavigationCompletedEventDelegate_t3119650473 * ___NavigationCompletedEvent_25;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStartedEvent
	NavigationStartedEventDelegate_t3496816902 * ___NavigationStartedEvent_26;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdatedEvent
	NavigationUpdatedEventDelegate_t2894903996 * ___NavigationUpdatedEvent_27;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEndedEvent
	RecognitionEndedEventDelegate_t2892804592 * ___RecognitionEndedEvent_28;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStartedEvent
	RecognitionStartedEventDelegate_t3727320336 * ___RecognitionStartedEvent_29;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::GestureErrorEvent
	GestureErrorDelegate_t3254371646 * ___GestureErrorEvent_30;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_HoldCanceled_1() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldCanceled_1)); }
	inline Action_1_t464622055 * get_HoldCanceled_1() const { return ___HoldCanceled_1; }
	inline Action_1_t464622055 ** get_address_of_HoldCanceled_1() { return &___HoldCanceled_1; }
	inline void set_HoldCanceled_1(Action_1_t464622055 * value)
	{
		___HoldCanceled_1 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCanceled_1), value);
	}

	inline static int32_t get_offset_of_HoldCompleted_2() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldCompleted_2)); }
	inline Action_1_t1168103046 * get_HoldCompleted_2() const { return ___HoldCompleted_2; }
	inline Action_1_t1168103046 ** get_address_of_HoldCompleted_2() { return &___HoldCompleted_2; }
	inline void set_HoldCompleted_2(Action_1_t1168103046 * value)
	{
		___HoldCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCompleted_2), value);
	}

	inline static int32_t get_offset_of_HoldStarted_3() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldStarted_3)); }
	inline Action_1_t3725713036 * get_HoldStarted_3() const { return ___HoldStarted_3; }
	inline Action_1_t3725713036 ** get_address_of_HoldStarted_3() { return &___HoldStarted_3; }
	inline void set_HoldStarted_3(Action_1_t3725713036 * value)
	{
		___HoldStarted_3 = value;
		Il2CppCodeGenWriteBarrier((&___HoldStarted_3), value);
	}

	inline static int32_t get_offset_of_Tapped_4() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___Tapped_4)); }
	inline Action_1_t2902256995 * get_Tapped_4() const { return ___Tapped_4; }
	inline Action_1_t2902256995 ** get_address_of_Tapped_4() { return &___Tapped_4; }
	inline void set_Tapped_4(Action_1_t2902256995 * value)
	{
		___Tapped_4 = value;
		Il2CppCodeGenWriteBarrier((&___Tapped_4), value);
	}

	inline static int32_t get_offset_of_ManipulationCanceled_5() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationCanceled_5)); }
	inline Action_1_t765149492 * get_ManipulationCanceled_5() const { return ___ManipulationCanceled_5; }
	inline Action_1_t765149492 ** get_address_of_ManipulationCanceled_5() { return &___ManipulationCanceled_5; }
	inline void set_ManipulationCanceled_5(Action_1_t765149492 * value)
	{
		___ManipulationCanceled_5 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCanceled_5), value);
	}

	inline static int32_t get_offset_of_ManipulationCompleted_6() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationCompleted_6)); }
	inline Action_1_t1957047783 * get_ManipulationCompleted_6() const { return ___ManipulationCompleted_6; }
	inline Action_1_t1957047783 ** get_address_of_ManipulationCompleted_6() { return &___ManipulationCompleted_6; }
	inline void set_ManipulationCompleted_6(Action_1_t1957047783 * value)
	{
		___ManipulationCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCompleted_6), value);
	}

	inline static int32_t get_offset_of_ManipulationStarted_7() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationStarted_7)); }
	inline Action_1_t1288711754 * get_ManipulationStarted_7() const { return ___ManipulationStarted_7; }
	inline Action_1_t1288711754 ** get_address_of_ManipulationStarted_7() { return &___ManipulationStarted_7; }
	inline void set_ManipulationStarted_7(Action_1_t1288711754 * value)
	{
		___ManipulationStarted_7 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationStarted_7), value);
	}

	inline static int32_t get_offset_of_ManipulationUpdated_8() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationUpdated_8)); }
	inline Action_1_t40843125 * get_ManipulationUpdated_8() const { return ___ManipulationUpdated_8; }
	inline Action_1_t40843125 ** get_address_of_ManipulationUpdated_8() { return &___ManipulationUpdated_8; }
	inline void set_ManipulationUpdated_8(Action_1_t40843125 * value)
	{
		___ManipulationUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationUpdated_8), value);
	}

	inline static int32_t get_offset_of_NavigationCanceled_9() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationCanceled_9)); }
	inline Action_1_t3270971242 * get_NavigationCanceled_9() const { return ___NavigationCanceled_9; }
	inline Action_1_t3270971242 ** get_address_of_NavigationCanceled_9() { return &___NavigationCanceled_9; }
	inline void set_NavigationCanceled_9(Action_1_t3270971242 * value)
	{
		___NavigationCanceled_9 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCanceled_9), value);
	}

	inline static int32_t get_offset_of_NavigationCompleted_10() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationCompleted_10)); }
	inline Action_1_t341761863 * get_NavigationCompleted_10() const { return ___NavigationCompleted_10; }
	inline Action_1_t341761863 ** get_address_of_NavigationCompleted_10() { return &___NavigationCompleted_10; }
	inline void set_NavigationCompleted_10(Action_1_t341761863 * value)
	{
		___NavigationCompleted_10 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCompleted_10), value);
	}

	inline static int32_t get_offset_of_NavigationStarted_11() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationStarted_11)); }
	inline Action_1_t3544757211 * get_NavigationStarted_11() const { return ___NavigationStarted_11; }
	inline Action_1_t3544757211 ** get_address_of_NavigationStarted_11() { return &___NavigationStarted_11; }
	inline void set_NavigationStarted_11(Action_1_t3544757211 * value)
	{
		___NavigationStarted_11 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationStarted_11), value);
	}

	inline static int32_t get_offset_of_NavigationUpdated_12() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationUpdated_12)); }
	inline Action_1_t1156518837 * get_NavigationUpdated_12() const { return ___NavigationUpdated_12; }
	inline Action_1_t1156518837 ** get_address_of_NavigationUpdated_12() { return &___NavigationUpdated_12; }
	inline void set_NavigationUpdated_12(Action_1_t1156518837 * value)
	{
		___NavigationUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationUpdated_12), value);
	}

	inline static int32_t get_offset_of_RecognitionEnded_13() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___RecognitionEnded_13)); }
	inline Action_1_t4073128488 * get_RecognitionEnded_13() const { return ___RecognitionEnded_13; }
	inline Action_1_t4073128488 ** get_address_of_RecognitionEnded_13() { return &___RecognitionEnded_13; }
	inline void set_RecognitionEnded_13(Action_1_t4073128488 * value)
	{
		___RecognitionEnded_13 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionEnded_13), value);
	}

	inline static int32_t get_offset_of_RecognitionStarted_14() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___RecognitionStarted_14)); }
	inline Action_1_t1098359099 * get_RecognitionStarted_14() const { return ___RecognitionStarted_14; }
	inline Action_1_t1098359099 ** get_address_of_RecognitionStarted_14() { return &___RecognitionStarted_14; }
	inline void set_RecognitionStarted_14(Action_1_t1098359099 * value)
	{
		___RecognitionStarted_14 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionStarted_14), value);
	}

	inline static int32_t get_offset_of_GestureError_15() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___GestureError_15)); }
	inline Action_1_t3114543800 * get_GestureError_15() const { return ___GestureError_15; }
	inline Action_1_t3114543800 ** get_address_of_GestureError_15() { return &___GestureError_15; }
	inline void set_GestureError_15(Action_1_t3114543800 * value)
	{
		___GestureError_15 = value;
		Il2CppCodeGenWriteBarrier((&___GestureError_15), value);
	}

	inline static int32_t get_offset_of_HoldCanceledEvent_16() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldCanceledEvent_16)); }
	inline HoldCanceledEventDelegate_t3242927192 * get_HoldCanceledEvent_16() const { return ___HoldCanceledEvent_16; }
	inline HoldCanceledEventDelegate_t3242927192 ** get_address_of_HoldCanceledEvent_16() { return &___HoldCanceledEvent_16; }
	inline void set_HoldCanceledEvent_16(HoldCanceledEventDelegate_t3242927192 * value)
	{
		___HoldCanceledEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCanceledEvent_16), value);
	}

	inline static int32_t get_offset_of_HoldCompletedEvent_17() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldCompletedEvent_17)); }
	inline HoldCompletedEventDelegate_t4112318659 * get_HoldCompletedEvent_17() const { return ___HoldCompletedEvent_17; }
	inline HoldCompletedEventDelegate_t4112318659 ** get_address_of_HoldCompletedEvent_17() { return &___HoldCompletedEvent_17; }
	inline void set_HoldCompletedEvent_17(HoldCompletedEventDelegate_t4112318659 * value)
	{
		___HoldCompletedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCompletedEvent_17), value);
	}

	inline static int32_t get_offset_of_HoldStartedEvent_18() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldStartedEvent_18)); }
	inline HoldStartedEventDelegate_t1669693510 * get_HoldStartedEvent_18() const { return ___HoldStartedEvent_18; }
	inline HoldStartedEventDelegate_t1669693510 ** get_address_of_HoldStartedEvent_18() { return &___HoldStartedEvent_18; }
	inline void set_HoldStartedEvent_18(HoldStartedEventDelegate_t1669693510 * value)
	{
		___HoldStartedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((&___HoldStartedEvent_18), value);
	}

	inline static int32_t get_offset_of_TappedEvent_19() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___TappedEvent_19)); }
	inline TappedEventDelegate_t286622765 * get_TappedEvent_19() const { return ___TappedEvent_19; }
	inline TappedEventDelegate_t286622765 ** get_address_of_TappedEvent_19() { return &___TappedEvent_19; }
	inline void set_TappedEvent_19(TappedEventDelegate_t286622765 * value)
	{
		___TappedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((&___TappedEvent_19), value);
	}

	inline static int32_t get_offset_of_ManipulationCanceledEvent_20() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationCanceledEvent_20)); }
	inline ManipulationCanceledEventDelegate_t3141027694 * get_ManipulationCanceledEvent_20() const { return ___ManipulationCanceledEvent_20; }
	inline ManipulationCanceledEventDelegate_t3141027694 ** get_address_of_ManipulationCanceledEvent_20() { return &___ManipulationCanceledEvent_20; }
	inline void set_ManipulationCanceledEvent_20(ManipulationCanceledEventDelegate_t3141027694 * value)
	{
		___ManipulationCanceledEvent_20 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCanceledEvent_20), value);
	}

	inline static int32_t get_offset_of_ManipulationCompletedEvent_21() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationCompletedEvent_21)); }
	inline ManipulationCompletedEventDelegate_t3126788776 * get_ManipulationCompletedEvent_21() const { return ___ManipulationCompletedEvent_21; }
	inline ManipulationCompletedEventDelegate_t3126788776 ** get_address_of_ManipulationCompletedEvent_21() { return &___ManipulationCompletedEvent_21; }
	inline void set_ManipulationCompletedEvent_21(ManipulationCompletedEventDelegate_t3126788776 * value)
	{
		___ManipulationCompletedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCompletedEvent_21), value);
	}

	inline static int32_t get_offset_of_ManipulationStartedEvent_22() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationStartedEvent_22)); }
	inline ManipulationStartedEventDelegate_t1581880091 * get_ManipulationStartedEvent_22() const { return ___ManipulationStartedEvent_22; }
	inline ManipulationStartedEventDelegate_t1581880091 ** get_address_of_ManipulationStartedEvent_22() { return &___ManipulationStartedEvent_22; }
	inline void set_ManipulationStartedEvent_22(ManipulationStartedEventDelegate_t1581880091 * value)
	{
		___ManipulationStartedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationStartedEvent_22), value);
	}

	inline static int32_t get_offset_of_ManipulationUpdatedEvent_23() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationUpdatedEvent_23)); }
	inline ManipulationUpdatedEventDelegate_t2990350064 * get_ManipulationUpdatedEvent_23() const { return ___ManipulationUpdatedEvent_23; }
	inline ManipulationUpdatedEventDelegate_t2990350064 ** get_address_of_ManipulationUpdatedEvent_23() { return &___ManipulationUpdatedEvent_23; }
	inline void set_ManipulationUpdatedEvent_23(ManipulationUpdatedEventDelegate_t2990350064 * value)
	{
		___ManipulationUpdatedEvent_23 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationUpdatedEvent_23), value);
	}

	inline static int32_t get_offset_of_NavigationCanceledEvent_24() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationCanceledEvent_24)); }
	inline NavigationCanceledEventDelegate_t2505886250 * get_NavigationCanceledEvent_24() const { return ___NavigationCanceledEvent_24; }
	inline NavigationCanceledEventDelegate_t2505886250 ** get_address_of_NavigationCanceledEvent_24() { return &___NavigationCanceledEvent_24; }
	inline void set_NavigationCanceledEvent_24(NavigationCanceledEventDelegate_t2505886250 * value)
	{
		___NavigationCanceledEvent_24 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCanceledEvent_24), value);
	}

	inline static int32_t get_offset_of_NavigationCompletedEvent_25() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationCompletedEvent_25)); }
	inline NavigationCompletedEventDelegate_t3119650473 * get_NavigationCompletedEvent_25() const { return ___NavigationCompletedEvent_25; }
	inline NavigationCompletedEventDelegate_t3119650473 ** get_address_of_NavigationCompletedEvent_25() { return &___NavigationCompletedEvent_25; }
	inline void set_NavigationCompletedEvent_25(NavigationCompletedEventDelegate_t3119650473 * value)
	{
		___NavigationCompletedEvent_25 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCompletedEvent_25), value);
	}

	inline static int32_t get_offset_of_NavigationStartedEvent_26() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationStartedEvent_26)); }
	inline NavigationStartedEventDelegate_t3496816902 * get_NavigationStartedEvent_26() const { return ___NavigationStartedEvent_26; }
	inline NavigationStartedEventDelegate_t3496816902 ** get_address_of_NavigationStartedEvent_26() { return &___NavigationStartedEvent_26; }
	inline void set_NavigationStartedEvent_26(NavigationStartedEventDelegate_t3496816902 * value)
	{
		___NavigationStartedEvent_26 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationStartedEvent_26), value);
	}

	inline static int32_t get_offset_of_NavigationUpdatedEvent_27() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationUpdatedEvent_27)); }
	inline NavigationUpdatedEventDelegate_t2894903996 * get_NavigationUpdatedEvent_27() const { return ___NavigationUpdatedEvent_27; }
	inline NavigationUpdatedEventDelegate_t2894903996 ** get_address_of_NavigationUpdatedEvent_27() { return &___NavigationUpdatedEvent_27; }
	inline void set_NavigationUpdatedEvent_27(NavigationUpdatedEventDelegate_t2894903996 * value)
	{
		___NavigationUpdatedEvent_27 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationUpdatedEvent_27), value);
	}

	inline static int32_t get_offset_of_RecognitionEndedEvent_28() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___RecognitionEndedEvent_28)); }
	inline RecognitionEndedEventDelegate_t2892804592 * get_RecognitionEndedEvent_28() const { return ___RecognitionEndedEvent_28; }
	inline RecognitionEndedEventDelegate_t2892804592 ** get_address_of_RecognitionEndedEvent_28() { return &___RecognitionEndedEvent_28; }
	inline void set_RecognitionEndedEvent_28(RecognitionEndedEventDelegate_t2892804592 * value)
	{
		___RecognitionEndedEvent_28 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionEndedEvent_28), value);
	}

	inline static int32_t get_offset_of_RecognitionStartedEvent_29() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___RecognitionStartedEvent_29)); }
	inline RecognitionStartedEventDelegate_t3727320336 * get_RecognitionStartedEvent_29() const { return ___RecognitionStartedEvent_29; }
	inline RecognitionStartedEventDelegate_t3727320336 ** get_address_of_RecognitionStartedEvent_29() { return &___RecognitionStartedEvent_29; }
	inline void set_RecognitionStartedEvent_29(RecognitionStartedEventDelegate_t3727320336 * value)
	{
		___RecognitionStartedEvent_29 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionStartedEvent_29), value);
	}

	inline static int32_t get_offset_of_GestureErrorEvent_30() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___GestureErrorEvent_30)); }
	inline GestureErrorDelegate_t3254371646 * get_GestureErrorEvent_30() const { return ___GestureErrorEvent_30; }
	inline GestureErrorDelegate_t3254371646 ** get_address_of_GestureErrorEvent_30() { return &___GestureErrorEvent_30; }
	inline void set_GestureErrorEvent_30(GestureErrorDelegate_t3254371646 * value)
	{
		___GestureErrorEvent_30 = value;
		Il2CppCodeGenWriteBarrier((&___GestureErrorEvent_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_t1566529591_marshaled_pinvoke
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_t1566529591_marshaled_com
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
#endif // GESTURERECOGNIZER_T1566529591_H
#ifndef GESTURESETTINGS_T2005725708_H
#define GESTURESETTINGS_T2005725708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureSettings
struct  GestureSettings_t2005725708 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.GestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureSettings_t2005725708, ___value___2)); }
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
#endif // GESTURESETTINGS_T2005725708_H
#ifndef INTERACTIONSOURCEFLAGS_T1798650303_H
#define INTERACTIONSOURCEFLAGS_T1798650303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_t1798650303 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_t1798650303, ___value___2)); }
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
#endif // INTERACTIONSOURCEFLAGS_T1798650303_H
#ifndef INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#define INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t3096408347 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t3096408347, ___value___2)); }
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
#endif // INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#ifndef INTERACTIONSOURCEKIND_T3005082353_H
#define INTERACTIONSOURCEKIND_T3005082353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_t3005082353 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_t3005082353, ___value___2)); }
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
#endif // INTERACTIONSOURCEKIND_T3005082353_H
#ifndef INTERACTIONSOURCEPOSEFLAGS_T2451043420_H
#define INTERACTIONSOURCEPOSEFLAGS_T2451043420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags
struct  InteractionSourcePoseFlags_t2451043420 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePoseFlags_t2451043420, ___value___2)); }
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
#endif // INTERACTIONSOURCEPOSEFLAGS_T2451043420_H
#ifndef INTERACTIONSOURCEPOSITIONACCURACY_T1863622708_H
#define INTERACTIONSOURCEPOSITIONACCURACY_T1863622708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy
struct  InteractionSourcePositionAccuracy_t1863622708 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePositionAccuracy_t1863622708, ___value___2)); }
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
#endif // INTERACTIONSOURCEPOSITIONACCURACY_T1863622708_H
#ifndef LODTYPE_T1852903297_H
#define LODTYPE_T1852903297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingBase/LODType
struct  LODType_t1852903297 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase/LODType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LODType_t1852903297, ___value___2)); }
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
#endif // LODTYPE_T1852903297_H
#ifndef VOLUMETYPE_T2756317307_H
#define VOLUMETYPE_T2756317307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingBase/VolumeType
struct  VolumeType_t2756317307 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase/VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t2756317307, ___value___2)); }
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
#endif // VOLUMETYPE_T2756317307_H
#ifndef RENDERSTATE_T760425129_H
#define RENDERSTATE_T760425129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingRenderer/RenderState
struct  RenderState_t760425129 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingRenderer/RenderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderState_t760425129, ___value___2)); }
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
#endif // RENDERSTATE_T760425129_H
#ifndef SURFACECHANGE_T1487785866_H
#define SURFACECHANGE_T1487785866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceChange
struct  SurfaceChange_t1487785866 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SurfaceChange_t1487785866, ___value___2)); }
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
#endif // SURFACECHANGE_T1487785866_H
#ifndef SURFACEDATA_T200825419_H
#define SURFACEDATA_T200825419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceData
struct  SurfaceData_t200825419 
{
public:
	// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SurfaceData::id
	SurfaceId_t2999094746  ___id_0;
	// UnityEngine.MeshFilter UnityEngine.XR.WSA.SurfaceData::outputMesh
	MeshFilter_t3523625662 * ___outputMesh_1;
	// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SurfaceData::outputAnchor
	WorldAnchor_t2161774153 * ___outputAnchor_2;
	// UnityEngine.MeshCollider UnityEngine.XR.WSA.SurfaceData::outputCollider
	MeshCollider_t903564387 * ___outputCollider_3;
	// System.Single UnityEngine.XR.WSA.SurfaceData::trianglesPerCubicMeter
	float ___trianglesPerCubicMeter_4;
	// System.Boolean UnityEngine.XR.WSA.SurfaceData::bakeCollider
	bool ___bakeCollider_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___id_0)); }
	inline SurfaceId_t2999094746  get_id_0() const { return ___id_0; }
	inline SurfaceId_t2999094746 * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(SurfaceId_t2999094746  value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_outputMesh_1() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___outputMesh_1)); }
	inline MeshFilter_t3523625662 * get_outputMesh_1() const { return ___outputMesh_1; }
	inline MeshFilter_t3523625662 ** get_address_of_outputMesh_1() { return &___outputMesh_1; }
	inline void set_outputMesh_1(MeshFilter_t3523625662 * value)
	{
		___outputMesh_1 = value;
		Il2CppCodeGenWriteBarrier((&___outputMesh_1), value);
	}

	inline static int32_t get_offset_of_outputAnchor_2() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___outputAnchor_2)); }
	inline WorldAnchor_t2161774153 * get_outputAnchor_2() const { return ___outputAnchor_2; }
	inline WorldAnchor_t2161774153 ** get_address_of_outputAnchor_2() { return &___outputAnchor_2; }
	inline void set_outputAnchor_2(WorldAnchor_t2161774153 * value)
	{
		___outputAnchor_2 = value;
		Il2CppCodeGenWriteBarrier((&___outputAnchor_2), value);
	}

	inline static int32_t get_offset_of_outputCollider_3() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___outputCollider_3)); }
	inline MeshCollider_t903564387 * get_outputCollider_3() const { return ___outputCollider_3; }
	inline MeshCollider_t903564387 ** get_address_of_outputCollider_3() { return &___outputCollider_3; }
	inline void set_outputCollider_3(MeshCollider_t903564387 * value)
	{
		___outputCollider_3 = value;
		Il2CppCodeGenWriteBarrier((&___outputCollider_3), value);
	}

	inline static int32_t get_offset_of_trianglesPerCubicMeter_4() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___trianglesPerCubicMeter_4)); }
	inline float get_trianglesPerCubicMeter_4() const { return ___trianglesPerCubicMeter_4; }
	inline float* get_address_of_trianglesPerCubicMeter_4() { return &___trianglesPerCubicMeter_4; }
	inline void set_trianglesPerCubicMeter_4(float value)
	{
		___trianglesPerCubicMeter_4 = value;
	}

	inline static int32_t get_offset_of_bakeCollider_5() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___bakeCollider_5)); }
	inline bool get_bakeCollider_5() const { return ___bakeCollider_5; }
	inline bool* get_address_of_bakeCollider_5() { return &___bakeCollider_5; }
	inline void set_bakeCollider_5(bool value)
	{
		___bakeCollider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t200825419_marshaled_pinvoke
{
	SurfaceId_t2999094746  ___id_0;
	MeshFilter_t3523625662 * ___outputMesh_1;
	WorldAnchor_t2161774153 * ___outputAnchor_2;
	MeshCollider_t903564387 * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t200825419_marshaled_com
{
	SurfaceId_t2999094746  ___id_0;
	MeshFilter_t3523625662 * ___outputMesh_1;
	WorldAnchor_t2161774153 * ___outputAnchor_2;
	MeshCollider_t903564387 * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};
#endif // SURFACEDATA_T200825419_H
#ifndef SURFACEOBSERVER_T1930409633_H
#define SURFACEOBSERVER_T1930409633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceObserver
struct  SurfaceObserver_t1930409633  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.SurfaceObserver::m_Observer
	intptr_t ___m_Observer_0;

public:
	inline static int32_t get_offset_of_m_Observer_0() { return static_cast<int32_t>(offsetof(SurfaceObserver_t1930409633, ___m_Observer_0)); }
	inline intptr_t get_m_Observer_0() const { return ___m_Observer_0; }
	inline intptr_t* get_address_of_m_Observer_0() { return &___m_Observer_0; }
	inline void set_m_Observer_0(intptr_t value)
	{
		___m_Observer_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_t1930409633_marshaled_pinvoke
{
	intptr_t ___m_Observer_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_t1930409633_marshaled_com
{
	intptr_t ___m_Observer_0;
};
#endif // SURFACEOBSERVER_T1930409633_H
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
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
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
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef PHYSICMATERIAL_T2874185564_H
#define PHYSICMATERIAL_T2874185564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_t2874185564  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_T2874185564_H
#ifndef INTERACTIONSOURCE_T872619030_H
#define INTERACTIONSOURCE_T872619030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_t872619030 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCE_T872619030_H
#ifndef INTERACTIONSOURCEPOSE_T752709879_H
#define INTERACTIONSOURCEPOSE_T752709879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourcePose
struct  InteractionSourcePose_t752709879 
{
public:
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripRotation
	Quaternion_t2301928331  ___m_GripRotation_0;
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerRotation
	Quaternion_t2301928331  ___m_PointerRotation_1;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripPosition
	Vector3_t3722313464  ___m_GripPosition_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerPosition
	Vector3_t3722313464  ___m_PointerPosition_3;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Velocity
	Vector3_t3722313464  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_AngularVelocity
	Vector3_t3722313464  ___m_AngularVelocity_5;
	// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PositionAccuracy
	int32_t ___m_PositionAccuracy_6;
	// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_GripRotation_0() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_GripRotation_0)); }
	inline Quaternion_t2301928331  get_m_GripRotation_0() const { return ___m_GripRotation_0; }
	inline Quaternion_t2301928331 * get_address_of_m_GripRotation_0() { return &___m_GripRotation_0; }
	inline void set_m_GripRotation_0(Quaternion_t2301928331  value)
	{
		___m_GripRotation_0 = value;
	}

	inline static int32_t get_offset_of_m_PointerRotation_1() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_PointerRotation_1)); }
	inline Quaternion_t2301928331  get_m_PointerRotation_1() const { return ___m_PointerRotation_1; }
	inline Quaternion_t2301928331 * get_address_of_m_PointerRotation_1() { return &___m_PointerRotation_1; }
	inline void set_m_PointerRotation_1(Quaternion_t2301928331  value)
	{
		___m_PointerRotation_1 = value;
	}

	inline static int32_t get_offset_of_m_GripPosition_2() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_GripPosition_2)); }
	inline Vector3_t3722313464  get_m_GripPosition_2() const { return ___m_GripPosition_2; }
	inline Vector3_t3722313464 * get_address_of_m_GripPosition_2() { return &___m_GripPosition_2; }
	inline void set_m_GripPosition_2(Vector3_t3722313464  value)
	{
		___m_GripPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PointerPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_PointerPosition_3)); }
	inline Vector3_t3722313464  get_m_PointerPosition_3() const { return ___m_PointerPosition_3; }
	inline Vector3_t3722313464 * get_address_of_m_PointerPosition_3() { return &___m_PointerPosition_3; }
	inline void set_m_PointerPosition_3(Vector3_t3722313464  value)
	{
		___m_PointerPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_Velocity_4)); }
	inline Vector3_t3722313464  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t3722313464 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t3722313464  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_AngularVelocity_5)); }
	inline Vector3_t3722313464  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t3722313464 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t3722313464  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_PositionAccuracy_6() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_PositionAccuracy_6)); }
	inline int32_t get_m_PositionAccuracy_6() const { return ___m_PositionAccuracy_6; }
	inline int32_t* get_address_of_m_PositionAccuracy_6() { return &___m_PositionAccuracy_6; }
	inline void set_m_PositionAccuracy_6(int32_t value)
	{
		___m_PositionAccuracy_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEPOSE_T752709879_H
#ifndef SURFACE_T4054413514_H
#define SURFACE_T4054413514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingBase/Surface
struct  Surface_t4054413514  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SpatialMappingBase/Surface::<surfaceId>k__BackingField
	SurfaceId_t2999094746  ___U3CsurfaceIdU3Ek__BackingField_0;
	// System.DateTime UnityEngine.XR.WSA.SpatialMappingBase/Surface::<updateTime>k__BackingField
	DateTime_t3738529785  ___U3CupdateTimeU3Ek__BackingField_1;
	// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase/Surface::<gameObject>k__BackingField
	GameObject_t1113636619 * ___U3CgameObjectU3Ek__BackingField_2;
	// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase/Surface::<surfaceData>k__BackingField
	SurfaceData_t200825419  ___U3CsurfaceDataU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase/Surface::<remainingUpdatesToLive>k__BackingField
	int32_t ___U3CremainingUpdatesToLiveU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase/Surface::<awaitingBake>k__BackingField
	bool ___U3CawaitingBakeU3Ek__BackingField_5;
	// UnityEngine.MeshFilter UnityEngine.XR.WSA.SpatialMappingBase/Surface::<meshFilter>k__BackingField
	MeshFilter_t3523625662 * ___U3CmeshFilterU3Ek__BackingField_6;
	// UnityEngine.MeshRenderer UnityEngine.XR.WSA.SpatialMappingBase/Surface::<meshRenderer>k__BackingField
	MeshRenderer_t587009260 * ___U3CmeshRendererU3Ek__BackingField_7;
	// UnityEngine.MeshCollider UnityEngine.XR.WSA.SpatialMappingBase/Surface::<meshCollider>k__BackingField
	MeshCollider_t903564387 * ___U3CmeshColliderU3Ek__BackingField_8;
	// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SpatialMappingBase/Surface::<worldAnchor>k__BackingField
	WorldAnchor_t2161774153 * ___U3CworldAnchorU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CsurfaceIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Surface_t4054413514, ___U3CsurfaceIdU3Ek__BackingField_0)); }
	inline SurfaceId_t2999094746  get_U3CsurfaceIdU3Ek__BackingField_0() const { return ___U3CsurfaceIdU3Ek__BackingField_0; }
	inline SurfaceId_t2999094746 * get_address_of_U3CsurfaceIdU3Ek__BackingField_0() { return &___U3CsurfaceIdU3Ek__BackingField_0; }
	inline void set_U3CsurfaceIdU3Ek__BackingField_0(SurfaceId_t2999094746  value)
	{
		___U3CsurfaceIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CupdateTimeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Surface_t4054413514, ___U3CupdateTimeU3Ek__BackingField_1)); }
	inline DateTime_t3738529785  get_U3CupdateTimeU3Ek__BackingField_1() const { return ___U3CupdateTimeU3Ek__BackingField_1; }
	inline DateTime_t3738529785 * get_address_of_U3CupdateTimeU3Ek__BackingField_1() { return &___U3CupdateTimeU3Ek__BackingField_1; }
	inline void set_U3CupdateTimeU3Ek__BackingField_1(DateTime_t3738529785  value)
	{
		___U3CupdateTimeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CgameObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Surface_t4054413514, ___U3CgameObjectU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CgameObjectU3Ek__BackingField_2() const { return ___U3CgameObjectU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CgameObjectU3Ek__BackingField_2() { return &___U3CgameObjectU3Ek__BackingField_2; }
	inline void set_U3CgameObjectU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CgameObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CgameObjectU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CsurfaceDataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Surface_t4054413514, ___U3CsurfaceDataU3Ek__BackingField_3)); }
	inline SurfaceData_t200825419  get_U3CsurfaceDataU3Ek__BackingField_3() const { return ___U3CsurfaceDataU3Ek__BackingField_3; }
	inline SurfaceData_t200825419 * get_address_of_U3CsurfaceDataU3Ek__BackingField_3() { return &___U3CsurfaceDataU3Ek__BackingField_3; }
	inline void set_U3CsurfaceDataU3Ek__BackingField_3(SurfaceData_t200825419  value)
	{
		___U3CsurfaceDataU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CremainingUpdatesToLiveU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Surface_t4054413514, ___U3CremainingUpdatesToLiveU3Ek__BackingField_4)); }
	inline int32_t get_U3CremainingUpdatesToLiveU3Ek__BackingField_4() const { return ___U3CremainingUpdatesToLiveU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CremainingUpdatesToLiveU3Ek__BackingField_4() { return &___U3CremainingUpdatesToLiveU3Ek__BackingField_4; }
	inline void set_U3CremainingUpdatesToLiveU3Ek__BackingField_4(int32_t value)
	{
		___U3CremainingUpdatesToLiveU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CawaitingBakeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Surface_t4054413514, ___U3CawaitingBakeU3Ek__BackingField_5)); }
	inline bool get_U3CawaitingBakeU3Ek__BackingField_5() const { return ___U3CawaitingBakeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CawaitingBakeU3Ek__BackingField_5() { return &___U3CawaitingBakeU3Ek__BackingField_5; }
	inline void set_U3CawaitingBakeU3Ek__BackingField_5(bool value)
	{
		___U3CawaitingBakeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CmeshFilterU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Surface_t4054413514, ___U3CmeshFilterU3Ek__BackingField_6)); }
	inline MeshFilter_t3523625662 * get_U3CmeshFilterU3Ek__BackingField_6() const { return ___U3CmeshFilterU3Ek__BackingField_6; }
	inline MeshFilter_t3523625662 ** get_address_of_U3CmeshFilterU3Ek__BackingField_6() { return &___U3CmeshFilterU3Ek__BackingField_6; }
	inline void set_U3CmeshFilterU3Ek__BackingField_6(MeshFilter_t3523625662 * value)
	{
		___U3CmeshFilterU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmeshFilterU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CmeshRendererU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Surface_t4054413514, ___U3CmeshRendererU3Ek__BackingField_7)); }
	inline MeshRenderer_t587009260 * get_U3CmeshRendererU3Ek__BackingField_7() const { return ___U3CmeshRendererU3Ek__BackingField_7; }
	inline MeshRenderer_t587009260 ** get_address_of_U3CmeshRendererU3Ek__BackingField_7() { return &___U3CmeshRendererU3Ek__BackingField_7; }
	inline void set_U3CmeshRendererU3Ek__BackingField_7(MeshRenderer_t587009260 * value)
	{
		___U3CmeshRendererU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmeshRendererU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CmeshColliderU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Surface_t4054413514, ___U3CmeshColliderU3Ek__BackingField_8)); }
	inline MeshCollider_t903564387 * get_U3CmeshColliderU3Ek__BackingField_8() const { return ___U3CmeshColliderU3Ek__BackingField_8; }
	inline MeshCollider_t903564387 ** get_address_of_U3CmeshColliderU3Ek__BackingField_8() { return &___U3CmeshColliderU3Ek__BackingField_8; }
	inline void set_U3CmeshColliderU3Ek__BackingField_8(MeshCollider_t903564387 * value)
	{
		___U3CmeshColliderU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmeshColliderU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CworldAnchorU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Surface_t4054413514, ___U3CworldAnchorU3Ek__BackingField_9)); }
	inline WorldAnchor_t2161774153 * get_U3CworldAnchorU3Ek__BackingField_9() const { return ___U3CworldAnchorU3Ek__BackingField_9; }
	inline WorldAnchor_t2161774153 ** get_address_of_U3CworldAnchorU3Ek__BackingField_9() { return &___U3CworldAnchorU3Ek__BackingField_9; }
	inline void set_U3CworldAnchorU3Ek__BackingField_9(WorldAnchor_t2161774153 * value)
	{
		___U3CworldAnchorU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CworldAnchorU3Ek__BackingField_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACE_T4054413514_H
#ifndef SMCOMPONENTRECORD_T4291932003_H
#define SMCOMPONENTRECORD_T4291932003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
struct  SMComponentRecord_t4291932003 
{
public:
	// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::m_Component
	SpatialMappingBase_t1565881417 * ___m_Component_0;
	// UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::m_OnDataReady
	SurfaceDataReadyCallback_t2457228298 * ___m_OnDataReady_1;
	// UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::m_GetHighestPri
	GetHighestPriorityCallback_t3420804231 * ___m_GetHighestPri_2;
	// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::m_SurfaceObserver
	SurfaceObserver_t1930409633 * ___m_SurfaceObserver_3;

public:
	inline static int32_t get_offset_of_m_Component_0() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4291932003, ___m_Component_0)); }
	inline SpatialMappingBase_t1565881417 * get_m_Component_0() const { return ___m_Component_0; }
	inline SpatialMappingBase_t1565881417 ** get_address_of_m_Component_0() { return &___m_Component_0; }
	inline void set_m_Component_0(SpatialMappingBase_t1565881417 * value)
	{
		___m_Component_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Component_0), value);
	}

	inline static int32_t get_offset_of_m_OnDataReady_1() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4291932003, ___m_OnDataReady_1)); }
	inline SurfaceDataReadyCallback_t2457228298 * get_m_OnDataReady_1() const { return ___m_OnDataReady_1; }
	inline SurfaceDataReadyCallback_t2457228298 ** get_address_of_m_OnDataReady_1() { return &___m_OnDataReady_1; }
	inline void set_m_OnDataReady_1(SurfaceDataReadyCallback_t2457228298 * value)
	{
		___m_OnDataReady_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDataReady_1), value);
	}

	inline static int32_t get_offset_of_m_GetHighestPri_2() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4291932003, ___m_GetHighestPri_2)); }
	inline GetHighestPriorityCallback_t3420804231 * get_m_GetHighestPri_2() const { return ___m_GetHighestPri_2; }
	inline GetHighestPriorityCallback_t3420804231 ** get_address_of_m_GetHighestPri_2() { return &___m_GetHighestPri_2; }
	inline void set_m_GetHighestPri_2(GetHighestPriorityCallback_t3420804231 * value)
	{
		___m_GetHighestPri_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GetHighestPri_2), value);
	}

	inline static int32_t get_offset_of_m_SurfaceObserver_3() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4291932003, ___m_SurfaceObserver_3)); }
	inline SurfaceObserver_t1930409633 * get_m_SurfaceObserver_3() const { return ___m_SurfaceObserver_3; }
	inline SurfaceObserver_t1930409633 ** get_address_of_m_SurfaceObserver_3() { return &___m_SurfaceObserver_3; }
	inline void set_m_SurfaceObserver_3(SurfaceObserver_t1930409633 * value)
	{
		___m_SurfaceObserver_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SurfaceObserver_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
struct SMComponentRecord_t4291932003_marshaled_pinvoke
{
	SpatialMappingBase_t1565881417 * ___m_Component_0;
	Il2CppMethodPointer ___m_OnDataReady_1;
	Il2CppMethodPointer ___m_GetHighestPri_2;
	SurfaceObserver_t1930409633_marshaled_pinvoke ___m_SurfaceObserver_3;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
struct SMComponentRecord_t4291932003_marshaled_com
{
	SpatialMappingBase_t1565881417 * ___m_Component_0;
	Il2CppMethodPointer ___m_OnDataReady_1;
	Il2CppMethodPointer ___m_GetHighestPri_2;
	SurfaceObserver_t1930409633_marshaled_com* ___m_SurfaceObserver_3;
};
#endif // SMCOMPONENTRECORD_T4291932003_H
#ifndef ACTION_1_T4226881109_H
#define ACTION_1_T4226881109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct  Action_1_t4226881109  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T4226881109_H
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
#ifndef ENUMERATOR_T3358283326_H
#define ENUMERATOR_T3358283326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>
struct  Enumerator_t3358283326 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1469039449 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SMComponentRecord_t4291932003  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3358283326, ___list_0)); }
	inline List_1_t1469039449 * get_list_0() const { return ___list_0; }
	inline List_1_t1469039449 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1469039449 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3358283326, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3358283326, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3358283326, ___current_3)); }
	inline SMComponentRecord_t4291932003  get_current_3() const { return ___current_3; }
	inline SMComponentRecord_t4291932003 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SMComponentRecord_t4291932003  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3358283326_H
#ifndef PREDICATE_1_T822258831_H
#define PREDICATE_1_T822258831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>
struct  Predicate_1_t822258831  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T822258831_H
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
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
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
#ifndef NAVIGATIONCANCELEDEVENTARGS_T3098503647_H
#define NAVIGATIONCANCELEDEVENTARGS_T3098503647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs
struct  NavigationCanceledEventArgs_t3098503647 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_t3098503647, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_t3098503647, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_t3098503647, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONCANCELEDEVENTARGS_T3098503647_H
#ifndef NAVIGATIONCOMPLETEDEVENTARGS_T169294268_H
#define NAVIGATIONCOMPLETEDEVENTARGS_T169294268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs
struct  NavigationCompletedEventArgs_t169294268 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_NormalizedOffset
	Vector3_t3722313464  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_t169294268, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_t169294268, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_t169294268, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_t169294268, ___m_NormalizedOffset_3)); }
	inline Vector3_t3722313464  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_t3722313464 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_t3722313464  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONCOMPLETEDEVENTARGS_T169294268_H
#ifndef NAVIGATIONSTARTEDEVENTARGS_T3372289616_H
#define NAVIGATIONSTARTEDEVENTARGS_T3372289616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationStartedEventArgs
struct  NavigationStartedEventArgs_t3372289616 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t3372289616, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t3372289616, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t3372289616, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONSTARTEDEVENTARGS_T3372289616_H
#ifndef NAVIGATIONUPDATEDEVENTARGS_T984051242_H
#define NAVIGATIONUPDATEDEVENTARGS_T984051242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs
struct  NavigationUpdatedEventArgs_t984051242 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_NormalizedOffset
	Vector3_t3722313464  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t984051242, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t984051242, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t984051242, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t984051242, ___m_NormalizedOffset_3)); }
	inline Vector3_t3722313464  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_t3722313464 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_t3722313464  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONUPDATEDEVENTARGS_T984051242_H
#ifndef TAPPEDEVENTARGS_T2729789400_H
#define TAPPEDEVENTARGS_T2729789400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.TappedEventArgs
struct  TappedEventArgs_t2729789400 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.TappedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.TappedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.TappedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;
	// System.Int32 UnityEngine.XR.WSA.Input.TappedEventArgs::m_TapCount
	int32_t ___m_TapCount_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2729789400, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2729789400, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2729789400, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_3() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2729789400, ___m_TapCount_3)); }
	inline int32_t get_m_TapCount_3() const { return ___m_TapCount_3; }
	inline int32_t* get_address_of_m_TapCount_3() { return &___m_TapCount_3; }
	inline void set_m_TapCount_3(int32_t value)
	{
		___m_TapCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAPPEDEVENTARGS_T2729789400_H
#ifndef SURFACEDATAREADYCALLBACK_T2457228298_H
#define SURFACEDATAREADYCALLBACK_T2457228298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback
struct  SurfaceDataReadyCallback_t2457228298  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACEDATAREADYCALLBACK_T2457228298_H
#ifndef GETHIGHESTPRIORITYCALLBACK_T3420804231_H
#define GETHIGHESTPRIORITYCALLBACK_T3420804231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback
struct  GetHighestPriorityCallback_t3420804231  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETHIGHESTPRIORITYCALLBACK_T3420804231_H
#ifndef SMBAKEREQUEST_T3729498717_H
#define SMBAKEREQUEST_T3729498717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
struct  SMBakeRequest_t3729498717 
{
public:
	// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest::m_RequestData
	SurfaceData_t200825419  ___m_RequestData_0;
	// UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest::m_Requester
	SMComponentRecord_t4291932003  ___m_Requester_1;

public:
	inline static int32_t get_offset_of_m_RequestData_0() { return static_cast<int32_t>(offsetof(SMBakeRequest_t3729498717, ___m_RequestData_0)); }
	inline SurfaceData_t200825419  get_m_RequestData_0() const { return ___m_RequestData_0; }
	inline SurfaceData_t200825419 * get_address_of_m_RequestData_0() { return &___m_RequestData_0; }
	inline void set_m_RequestData_0(SurfaceData_t200825419  value)
	{
		___m_RequestData_0 = value;
	}

	inline static int32_t get_offset_of_m_Requester_1() { return static_cast<int32_t>(offsetof(SMBakeRequest_t3729498717, ___m_Requester_1)); }
	inline SMComponentRecord_t4291932003  get_m_Requester_1() const { return ___m_Requester_1; }
	inline SMComponentRecord_t4291932003 * get_address_of_m_Requester_1() { return &___m_Requester_1; }
	inline void set_m_Requester_1(SMComponentRecord_t4291932003  value)
	{
		___m_Requester_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
struct SMBakeRequest_t3729498717_marshaled_pinvoke
{
	SurfaceData_t200825419_marshaled_pinvoke ___m_RequestData_0;
	SMComponentRecord_t4291932003_marshaled_pinvoke ___m_Requester_1;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
struct SMBakeRequest_t3729498717_marshaled_com
{
	SurfaceData_t200825419_marshaled_com ___m_RequestData_0;
	SMComponentRecord_t4291932003_marshaled_com ___m_Requester_1;
};
#endif // SMBAKEREQUEST_T3729498717_H
#ifndef SURFACECHANGEDDELEGATE_T2591813092_H
#define SURFACECHANGEDDELEGATE_T2591813092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate
struct  SurfaceChangedDelegate_t2591813092  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACECHANGEDDELEGATE_T2591813092_H
#ifndef SURFACEDATAREADYDELEGATE_T4152308677_H
#define SURFACEDATAREADYDELEGATE_T4152308677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate
struct  SurfaceDataReadyDelegate_t4152308677  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACEDATAREADYDELEGATE_T4152308677_H
#ifndef WORLDANCHOR_T2161774153_H
#define WORLDANCHOR_T2161774153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_t2161774153  : public Component_t1923634451
{
public:
	// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t3480415086 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_t2161774153, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t3480415086 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t3480415086 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t3480415086 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnTrackingChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDANCHOR_T2161774153_H
#ifndef ACTION_1_T3270971242_H
#define ACTION_1_T3270971242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct  Action_1_t3270971242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3270971242_H
#ifndef ACTION_1_T341761863_H
#define ACTION_1_T341761863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct  Action_1_t341761863  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T341761863_H
#ifndef ACTION_1_T3544757211_H
#define ACTION_1_T3544757211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct  Action_1_t3544757211  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3544757211_H
#ifndef ACTION_1_T1156518837_H
#define ACTION_1_T1156518837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct  Action_1_t1156518837  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1156518837_H
#ifndef ACTION_1_T2902256995_H
#define ACTION_1_T2902256995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct  Action_1_t2902256995  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2902256995_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MESHCOLLIDER_T903564387_H
#define MESHCOLLIDER_T903564387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t903564387  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T903564387_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
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
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef AUDIOSPATIALIZERMICROSOFT_T3761211273_H
#define AUDIOSPATIALIZERMICROSOFT_T3761211273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioSpatializerMicrosoft
struct  AudioSpatializerMicrosoft_t3761211273  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Audio.AudioSpatializerMicrosoft/RoomSize UnityEngine.Audio.AudioSpatializerMicrosoft::m_RoomSize
	int32_t ___m_RoomSize_4;

public:
	inline static int32_t get_offset_of_m_RoomSize_4() { return static_cast<int32_t>(offsetof(AudioSpatializerMicrosoft_t3761211273, ___m_RoomSize_4)); }
	inline int32_t get_m_RoomSize_4() const { return ___m_RoomSize_4; }
	inline int32_t* get_address_of_m_RoomSize_4() { return &___m_RoomSize_4; }
	inline void set_m_RoomSize_4(int32_t value)
	{
		___m_RoomSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSPATIALIZERMICROSOFT_T3761211273_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef SPATIALMAPPINGBASE_T1565881417_H
#define SPATIALMAPPINGBASE_T1565881417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingBase
struct  SpatialMappingBase_t1565881417  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase::m_SurfaceParent
	GameObject_t1113636619 * ___m_SurfaceParent_7;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::m_FreezeUpdates
	bool ___m_FreezeUpdates_8;
	// UnityEngine.XR.WSA.SpatialMappingBase/VolumeType UnityEngine.XR.WSA.SpatialMappingBase::m_VolumeType
	int32_t ___m_VolumeType_9;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::m_SphereRadius
	float ___m_SphereRadius_10;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::m_HalfBoxExtents
	Vector3_t3722313464  ___m_HalfBoxExtents_11;
	// UnityEngine.XR.WSA.SpatialMappingBase/LODType UnityEngine.XR.WSA.SpatialMappingBase::m_LodType
	int32_t ___m_LodType_12;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::m_NumUpdatesBeforeRemoval
	int32_t ___m_NumUpdatesBeforeRemoval_13;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::m_SecondsBetweenUpdates
	float ___m_SecondsBetweenUpdates_14;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::m_BakePhysics
	bool ___m_BakePhysics_15;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::<observerId>k__BackingField
	int32_t ___U3CobserverIdU3Ek__BackingField_16;
	// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingBase::<surfaceObserver>k__BackingField
	SurfaceObserver_t1930409633 * ___U3CsurfaceObserverU3Ek__BackingField_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface> UnityEngine.XR.WSA.SpatialMappingBase::<surfaceObjects>k__BackingField
	Dictionary_2_t2943126845 * ___U3CsurfaceObjectsU3Ek__BackingField_18;
	// UnityEngine.Bounds UnityEngine.XR.WSA.SpatialMappingBase::<bounds>k__BackingField
	Bounds_t2266837910  ___U3CboundsU3Ek__BackingField_19;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::<lastUpdatedObserverPosition>k__BackingField
	Vector3_t3722313464  ___U3ClastUpdatedObserverPositionU3Ek__BackingField_20;
	// UnityEngine.Camera UnityEngine.XR.WSA.SpatialMappingBase::<selectedCamera>k__BackingField
	Camera_t4157153871 * ___U3CselectedCameraU3Ek__BackingField_21;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::<nextSurfaceChangeUpdateTime>k__BackingField
	float ___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface> UnityEngine.XR.WSA.SpatialMappingBase::m_PendingSurfacesForEviction
	Dictionary_2_t2943126845 * ___m_PendingSurfacesForEviction_23;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.WSA.SpatialMappingBase::m_SurfacesToRemoveFromDict
	List_1_t128053199 * ___m_SurfacesToRemoveFromDict_24;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::m_SurfaceParentWasDynamicallyCreated
	bool ___m_SurfaceParentWasDynamicallyCreated_25;
	// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase::bestSurfaceDataNull
	SurfaceData_t200825419  ___bestSurfaceDataNull_27;

public:
	inline static int32_t get_offset_of_m_SurfaceParent_7() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_SurfaceParent_7)); }
	inline GameObject_t1113636619 * get_m_SurfaceParent_7() const { return ___m_SurfaceParent_7; }
	inline GameObject_t1113636619 ** get_address_of_m_SurfaceParent_7() { return &___m_SurfaceParent_7; }
	inline void set_m_SurfaceParent_7(GameObject_t1113636619 * value)
	{
		___m_SurfaceParent_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_SurfaceParent_7), value);
	}

	inline static int32_t get_offset_of_m_FreezeUpdates_8() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_FreezeUpdates_8)); }
	inline bool get_m_FreezeUpdates_8() const { return ___m_FreezeUpdates_8; }
	inline bool* get_address_of_m_FreezeUpdates_8() { return &___m_FreezeUpdates_8; }
	inline void set_m_FreezeUpdates_8(bool value)
	{
		___m_FreezeUpdates_8 = value;
	}

	inline static int32_t get_offset_of_m_VolumeType_9() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_VolumeType_9)); }
	inline int32_t get_m_VolumeType_9() const { return ___m_VolumeType_9; }
	inline int32_t* get_address_of_m_VolumeType_9() { return &___m_VolumeType_9; }
	inline void set_m_VolumeType_9(int32_t value)
	{
		___m_VolumeType_9 = value;
	}

	inline static int32_t get_offset_of_m_SphereRadius_10() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_SphereRadius_10)); }
	inline float get_m_SphereRadius_10() const { return ___m_SphereRadius_10; }
	inline float* get_address_of_m_SphereRadius_10() { return &___m_SphereRadius_10; }
	inline void set_m_SphereRadius_10(float value)
	{
		___m_SphereRadius_10 = value;
	}

	inline static int32_t get_offset_of_m_HalfBoxExtents_11() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_HalfBoxExtents_11)); }
	inline Vector3_t3722313464  get_m_HalfBoxExtents_11() const { return ___m_HalfBoxExtents_11; }
	inline Vector3_t3722313464 * get_address_of_m_HalfBoxExtents_11() { return &___m_HalfBoxExtents_11; }
	inline void set_m_HalfBoxExtents_11(Vector3_t3722313464  value)
	{
		___m_HalfBoxExtents_11 = value;
	}

	inline static int32_t get_offset_of_m_LodType_12() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_LodType_12)); }
	inline int32_t get_m_LodType_12() const { return ___m_LodType_12; }
	inline int32_t* get_address_of_m_LodType_12() { return &___m_LodType_12; }
	inline void set_m_LodType_12(int32_t value)
	{
		___m_LodType_12 = value;
	}

	inline static int32_t get_offset_of_m_NumUpdatesBeforeRemoval_13() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_NumUpdatesBeforeRemoval_13)); }
	inline int32_t get_m_NumUpdatesBeforeRemoval_13() const { return ___m_NumUpdatesBeforeRemoval_13; }
	inline int32_t* get_address_of_m_NumUpdatesBeforeRemoval_13() { return &___m_NumUpdatesBeforeRemoval_13; }
	inline void set_m_NumUpdatesBeforeRemoval_13(int32_t value)
	{
		___m_NumUpdatesBeforeRemoval_13 = value;
	}

	inline static int32_t get_offset_of_m_SecondsBetweenUpdates_14() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_SecondsBetweenUpdates_14)); }
	inline float get_m_SecondsBetweenUpdates_14() const { return ___m_SecondsBetweenUpdates_14; }
	inline float* get_address_of_m_SecondsBetweenUpdates_14() { return &___m_SecondsBetweenUpdates_14; }
	inline void set_m_SecondsBetweenUpdates_14(float value)
	{
		___m_SecondsBetweenUpdates_14 = value;
	}

	inline static int32_t get_offset_of_m_BakePhysics_15() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_BakePhysics_15)); }
	inline bool get_m_BakePhysics_15() const { return ___m_BakePhysics_15; }
	inline bool* get_address_of_m_BakePhysics_15() { return &___m_BakePhysics_15; }
	inline void set_m_BakePhysics_15(bool value)
	{
		___m_BakePhysics_15 = value;
	}

	inline static int32_t get_offset_of_U3CobserverIdU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___U3CobserverIdU3Ek__BackingField_16)); }
	inline int32_t get_U3CobserverIdU3Ek__BackingField_16() const { return ___U3CobserverIdU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CobserverIdU3Ek__BackingField_16() { return &___U3CobserverIdU3Ek__BackingField_16; }
	inline void set_U3CobserverIdU3Ek__BackingField_16(int32_t value)
	{
		___U3CobserverIdU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CsurfaceObserverU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___U3CsurfaceObserverU3Ek__BackingField_17)); }
	inline SurfaceObserver_t1930409633 * get_U3CsurfaceObserverU3Ek__BackingField_17() const { return ___U3CsurfaceObserverU3Ek__BackingField_17; }
	inline SurfaceObserver_t1930409633 ** get_address_of_U3CsurfaceObserverU3Ek__BackingField_17() { return &___U3CsurfaceObserverU3Ek__BackingField_17; }
	inline void set_U3CsurfaceObserverU3Ek__BackingField_17(SurfaceObserver_t1930409633 * value)
	{
		___U3CsurfaceObserverU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsurfaceObserverU3Ek__BackingField_17), value);
	}

	inline static int32_t get_offset_of_U3CsurfaceObjectsU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___U3CsurfaceObjectsU3Ek__BackingField_18)); }
	inline Dictionary_2_t2943126845 * get_U3CsurfaceObjectsU3Ek__BackingField_18() const { return ___U3CsurfaceObjectsU3Ek__BackingField_18; }
	inline Dictionary_2_t2943126845 ** get_address_of_U3CsurfaceObjectsU3Ek__BackingField_18() { return &___U3CsurfaceObjectsU3Ek__BackingField_18; }
	inline void set_U3CsurfaceObjectsU3Ek__BackingField_18(Dictionary_2_t2943126845 * value)
	{
		___U3CsurfaceObjectsU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsurfaceObjectsU3Ek__BackingField_18), value);
	}

	inline static int32_t get_offset_of_U3CboundsU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___U3CboundsU3Ek__BackingField_19)); }
	inline Bounds_t2266837910  get_U3CboundsU3Ek__BackingField_19() const { return ___U3CboundsU3Ek__BackingField_19; }
	inline Bounds_t2266837910 * get_address_of_U3CboundsU3Ek__BackingField_19() { return &___U3CboundsU3Ek__BackingField_19; }
	inline void set_U3CboundsU3Ek__BackingField_19(Bounds_t2266837910  value)
	{
		___U3CboundsU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3ClastUpdatedObserverPositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___U3ClastUpdatedObserverPositionU3Ek__BackingField_20)); }
	inline Vector3_t3722313464  get_U3ClastUpdatedObserverPositionU3Ek__BackingField_20() const { return ___U3ClastUpdatedObserverPositionU3Ek__BackingField_20; }
	inline Vector3_t3722313464 * get_address_of_U3ClastUpdatedObserverPositionU3Ek__BackingField_20() { return &___U3ClastUpdatedObserverPositionU3Ek__BackingField_20; }
	inline void set_U3ClastUpdatedObserverPositionU3Ek__BackingField_20(Vector3_t3722313464  value)
	{
		___U3ClastUpdatedObserverPositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CselectedCameraU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___U3CselectedCameraU3Ek__BackingField_21)); }
	inline Camera_t4157153871 * get_U3CselectedCameraU3Ek__BackingField_21() const { return ___U3CselectedCameraU3Ek__BackingField_21; }
	inline Camera_t4157153871 ** get_address_of_U3CselectedCameraU3Ek__BackingField_21() { return &___U3CselectedCameraU3Ek__BackingField_21; }
	inline void set_U3CselectedCameraU3Ek__BackingField_21(Camera_t4157153871 * value)
	{
		___U3CselectedCameraU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CselectedCameraU3Ek__BackingField_21), value);
	}

	inline static int32_t get_offset_of_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22)); }
	inline float get_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22() const { return ___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22; }
	inline float* get_address_of_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22() { return &___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22; }
	inline void set_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22(float value)
	{
		___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_m_PendingSurfacesForEviction_23() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_PendingSurfacesForEviction_23)); }
	inline Dictionary_2_t2943126845 * get_m_PendingSurfacesForEviction_23() const { return ___m_PendingSurfacesForEviction_23; }
	inline Dictionary_2_t2943126845 ** get_address_of_m_PendingSurfacesForEviction_23() { return &___m_PendingSurfacesForEviction_23; }
	inline void set_m_PendingSurfacesForEviction_23(Dictionary_2_t2943126845 * value)
	{
		___m_PendingSurfacesForEviction_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_PendingSurfacesForEviction_23), value);
	}

	inline static int32_t get_offset_of_m_SurfacesToRemoveFromDict_24() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_SurfacesToRemoveFromDict_24)); }
	inline List_1_t128053199 * get_m_SurfacesToRemoveFromDict_24() const { return ___m_SurfacesToRemoveFromDict_24; }
	inline List_1_t128053199 ** get_address_of_m_SurfacesToRemoveFromDict_24() { return &___m_SurfacesToRemoveFromDict_24; }
	inline void set_m_SurfacesToRemoveFromDict_24(List_1_t128053199 * value)
	{
		___m_SurfacesToRemoveFromDict_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_SurfacesToRemoveFromDict_24), value);
	}

	inline static int32_t get_offset_of_m_SurfaceParentWasDynamicallyCreated_25() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___m_SurfaceParentWasDynamicallyCreated_25)); }
	inline bool get_m_SurfaceParentWasDynamicallyCreated_25() const { return ___m_SurfaceParentWasDynamicallyCreated_25; }
	inline bool* get_address_of_m_SurfaceParentWasDynamicallyCreated_25() { return &___m_SurfaceParentWasDynamicallyCreated_25; }
	inline void set_m_SurfaceParentWasDynamicallyCreated_25(bool value)
	{
		___m_SurfaceParentWasDynamicallyCreated_25 = value;
	}

	inline static int32_t get_offset_of_bestSurfaceDataNull_27() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417, ___bestSurfaceDataNull_27)); }
	inline SurfaceData_t200825419  get_bestSurfaceDataNull_27() const { return ___bestSurfaceDataNull_27; }
	inline SurfaceData_t200825419 * get_address_of_bestSurfaceDataNull_27() { return &___bestSurfaceDataNull_27; }
	inline void set_bestSurfaceDataNull_27(SurfaceData_t200825419  value)
	{
		___bestSurfaceDataNull_27 = value;
	}
};

struct SpatialMappingBase_t1565881417_StaticFields
{
public:
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::s_MovementUpdateThresholdSqr
	float ___s_MovementUpdateThresholdSqr_4;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::s_EvictionUpdateTickThresholdSqr
	float ___s_EvictionUpdateTickThresholdSqr_5;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::s_ObserverIdCounter
	int32_t ___s_ObserverIdCounter_6;
	// System.Int32[] UnityEngine.XR.WSA.SpatialMappingBase::s_LodToPcm
	Int32U5BU5D_t385246372* ___s_LodToPcm_26;

public:
	inline static int32_t get_offset_of_s_MovementUpdateThresholdSqr_4() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417_StaticFields, ___s_MovementUpdateThresholdSqr_4)); }
	inline float get_s_MovementUpdateThresholdSqr_4() const { return ___s_MovementUpdateThresholdSqr_4; }
	inline float* get_address_of_s_MovementUpdateThresholdSqr_4() { return &___s_MovementUpdateThresholdSqr_4; }
	inline void set_s_MovementUpdateThresholdSqr_4(float value)
	{
		___s_MovementUpdateThresholdSqr_4 = value;
	}

	inline static int32_t get_offset_of_s_EvictionUpdateTickThresholdSqr_5() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417_StaticFields, ___s_EvictionUpdateTickThresholdSqr_5)); }
	inline float get_s_EvictionUpdateTickThresholdSqr_5() const { return ___s_EvictionUpdateTickThresholdSqr_5; }
	inline float* get_address_of_s_EvictionUpdateTickThresholdSqr_5() { return &___s_EvictionUpdateTickThresholdSqr_5; }
	inline void set_s_EvictionUpdateTickThresholdSqr_5(float value)
	{
		___s_EvictionUpdateTickThresholdSqr_5 = value;
	}

	inline static int32_t get_offset_of_s_ObserverIdCounter_6() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417_StaticFields, ___s_ObserverIdCounter_6)); }
	inline int32_t get_s_ObserverIdCounter_6() const { return ___s_ObserverIdCounter_6; }
	inline int32_t* get_address_of_s_ObserverIdCounter_6() { return &___s_ObserverIdCounter_6; }
	inline void set_s_ObserverIdCounter_6(int32_t value)
	{
		___s_ObserverIdCounter_6 = value;
	}

	inline static int32_t get_offset_of_s_LodToPcm_26() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t1565881417_StaticFields, ___s_LodToPcm_26)); }
	inline Int32U5BU5D_t385246372* get_s_LodToPcm_26() const { return ___s_LodToPcm_26; }
	inline Int32U5BU5D_t385246372** get_address_of_s_LodToPcm_26() { return &___s_LodToPcm_26; }
	inline void set_s_LodToPcm_26(Int32U5BU5D_t385246372* value)
	{
		___s_LodToPcm_26 = value;
		Il2CppCodeGenWriteBarrier((&___s_LodToPcm_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALMAPPINGBASE_T1565881417_H
#ifndef BASEINPUT_T3630163547_H
#define BASEINPUT_T3630163547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInput
struct  BaseInput_t3630163547  : public UIBehaviour_t3495933518
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUT_T3630163547_H
#ifndef BASEINPUTMODULE_T2019268878_H
#define BASEINPUTMODULE_T2019268878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t2019268878  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t537414295 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t2331243652 * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t3903027533 * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t3630163547 * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t3630163547 * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_RaycastResultCache_4)); }
	inline List_1_t537414295 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t537414295 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t537414295 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastResultCache_4), value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_AxisEventData_5)); }
	inline AxisEventData_t2331243652 * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t2331243652 ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t2331243652 * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_AxisEventData_5), value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_EventSystem_6)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_6), value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_BaseEventData_7)); }
	inline BaseEventData_t3903027533 * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t3903027533 ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t3903027533 * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_BaseEventData_7), value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_InputOverride_8)); }
	inline BaseInput_t3630163547 * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_t3630163547 ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_t3630163547 * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputOverride_8), value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_DefaultInput_9)); }
	inline BaseInput_t3630163547 * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_t3630163547 ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_t3630163547 * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefaultInput_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTMODULE_T2019268878_H
#ifndef EVENTSYSTEM_T1003666588_H
#define EVENTSYSTEM_T1003666588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t1003666588  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t3491343620 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t2019268878 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t1113636619 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t1113636619 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t3903027533 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SystemInputModules_4)); }
	inline List_1_t3491343620 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t3491343620 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t3491343620 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_4), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t2019268878 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t2019268878 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t2019268878 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_5), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_FirstSelected_7)); }
	inline GameObject_t1113636619 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_t1113636619 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_t1113636619 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_7), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentSelected_10)); }
	inline GameObject_t1113636619 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_t1113636619 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_10), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DummyData_13)); }
	inline BaseEventData_t3903027533 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t3903027533 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t3903027533 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_13), value);
	}
};

struct EventSystem_t1003666588_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t2475741330 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t3135238028 * ___s_RaycastComparer_14;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mg$cache0
	Comparison_1_t3135238028 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t2475741330 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t2475741330 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t2475741330 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_6), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t3135238028 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t3135238028 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t3135238028 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Comparison_1_t3135238028 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Comparison_1_t3135238028 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Comparison_1_t3135238028 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T1003666588_H
#ifndef SPATIALMAPPINGCOLLIDER_T1632102360_H
#define SPATIALMAPPINGCOLLIDER_T1632102360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingCollider
struct  SpatialMappingCollider_t1632102360  : public SpatialMappingBase_t1565881417
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingCollider::m_Layer
	int32_t ___m_Layer_28;
	// UnityEngine.PhysicMaterial UnityEngine.XR.WSA.SpatialMappingCollider::m_Material
	PhysicMaterial_t2874185564 * ___m_Material_29;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingCollider::m_EnableCollisions
	bool ___m_EnableCollisions_30;

public:
	inline static int32_t get_offset_of_m_Layer_28() { return static_cast<int32_t>(offsetof(SpatialMappingCollider_t1632102360, ___m_Layer_28)); }
	inline int32_t get_m_Layer_28() const { return ___m_Layer_28; }
	inline int32_t* get_address_of_m_Layer_28() { return &___m_Layer_28; }
	inline void set_m_Layer_28(int32_t value)
	{
		___m_Layer_28 = value;
	}

	inline static int32_t get_offset_of_m_Material_29() { return static_cast<int32_t>(offsetof(SpatialMappingCollider_t1632102360, ___m_Material_29)); }
	inline PhysicMaterial_t2874185564 * get_m_Material_29() const { return ___m_Material_29; }
	inline PhysicMaterial_t2874185564 ** get_address_of_m_Material_29() { return &___m_Material_29; }
	inline void set_m_Material_29(PhysicMaterial_t2874185564 * value)
	{
		___m_Material_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_29), value);
	}

	inline static int32_t get_offset_of_m_EnableCollisions_30() { return static_cast<int32_t>(offsetof(SpatialMappingCollider_t1632102360, ___m_EnableCollisions_30)); }
	inline bool get_m_EnableCollisions_30() const { return ___m_EnableCollisions_30; }
	inline bool* get_address_of_m_EnableCollisions_30() { return &___m_EnableCollisions_30; }
	inline void set_m_EnableCollisions_30(bool value)
	{
		___m_EnableCollisions_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALMAPPINGCOLLIDER_T1632102360_H
#ifndef SPATIALMAPPINGRENDERER_T1808097488_H
#define SPATIALMAPPINGRENDERER_T1808097488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SpatialMappingRenderer
struct  SpatialMappingRenderer_t1808097488  : public SpatialMappingBase_t1565881417
{
public:
	// UnityEngine.XR.WSA.SpatialMappingRenderer/RenderState UnityEngine.XR.WSA.SpatialMappingRenderer::m_CurrentRenderState
	int32_t ___m_CurrentRenderState_28;
	// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::m_VisualMaterial
	Material_t340375123 * ___m_VisualMaterial_29;
	// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::m_OcclusionMaterial
	Material_t340375123 * ___m_OcclusionMaterial_30;

public:
	inline static int32_t get_offset_of_m_CurrentRenderState_28() { return static_cast<int32_t>(offsetof(SpatialMappingRenderer_t1808097488, ___m_CurrentRenderState_28)); }
	inline int32_t get_m_CurrentRenderState_28() const { return ___m_CurrentRenderState_28; }
	inline int32_t* get_address_of_m_CurrentRenderState_28() { return &___m_CurrentRenderState_28; }
	inline void set_m_CurrentRenderState_28(int32_t value)
	{
		___m_CurrentRenderState_28 = value;
	}

	inline static int32_t get_offset_of_m_VisualMaterial_29() { return static_cast<int32_t>(offsetof(SpatialMappingRenderer_t1808097488, ___m_VisualMaterial_29)); }
	inline Material_t340375123 * get_m_VisualMaterial_29() const { return ___m_VisualMaterial_29; }
	inline Material_t340375123 ** get_address_of_m_VisualMaterial_29() { return &___m_VisualMaterial_29; }
	inline void set_m_VisualMaterial_29(Material_t340375123 * value)
	{
		___m_VisualMaterial_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_VisualMaterial_29), value);
	}

	inline static int32_t get_offset_of_m_OcclusionMaterial_30() { return static_cast<int32_t>(offsetof(SpatialMappingRenderer_t1808097488, ___m_OcclusionMaterial_30)); }
	inline Material_t340375123 * get_m_OcclusionMaterial_30() const { return ___m_OcclusionMaterial_30; }
	inline Material_t340375123 ** get_address_of_m_OcclusionMaterial_30() { return &___m_OcclusionMaterial_30; }
	inline void set_m_OcclusionMaterial_30(Material_t340375123 * value)
	{
		___m_OcclusionMaterial_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OcclusionMaterial_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALMAPPINGRENDERER_T1808097488_H
#ifndef HOLOLENSINPUT_T4157575750_H
#define HOLOLENSINPUT_T4157575750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.HoloLensInput
struct  HoloLensInput_t4157575750  : public BaseInput_t3630163547
{
public:
	// System.Boolean UnityEngine.EventSystems.HoloLensInput::m_IsEmulatedMouseDownCurr
	bool ___m_IsEmulatedMouseDownCurr_4;
	// System.Boolean UnityEngine.EventSystems.HoloLensInput::m_IsEmulatedMouseDownPrev
	bool ___m_IsEmulatedMouseDownPrev_5;
	// UnityEngine.EventSystems.HoloLensInput/MouseEmulationMode UnityEngine.EventSystems.HoloLensInput::m_MouseEmulationMode
	int32_t ___m_MouseEmulationMode_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.HoloLensInput::m_NavigationNormalizedOffset
	Vector3_t3722313464  ___m_NavigationNormalizedOffset_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.HoloLensInput::m_NavigationAnchorWorldSpace
	Vector3_t3722313464  ___m_NavigationAnchorWorldSpace_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.HoloLensInput::m_TapAnchorWorldSpace
	Vector3_t3722313464  ___m_TapAnchorWorldSpace_9;
	// System.Single UnityEngine.EventSystems.HoloLensInput::m_LastTapTime
	float ___m_LastTapTime_10;
	// UnityEngine.EventSystems.HoloLensInputModule UnityEngine.EventSystems.HoloLensInput::m_Module
	HoloLensInputModule_t3599952490 * ___m_Module_11;
	// UnityEngine.XR.WSA.Input.GestureRecognizer UnityEngine.EventSystems.HoloLensInput::m_GestureRecognizer
	GestureRecognizer_t1566529591 * ___m_GestureRecognizer_12;

public:
	inline static int32_t get_offset_of_m_IsEmulatedMouseDownCurr_4() { return static_cast<int32_t>(offsetof(HoloLensInput_t4157575750, ___m_IsEmulatedMouseDownCurr_4)); }
	inline bool get_m_IsEmulatedMouseDownCurr_4() const { return ___m_IsEmulatedMouseDownCurr_4; }
	inline bool* get_address_of_m_IsEmulatedMouseDownCurr_4() { return &___m_IsEmulatedMouseDownCurr_4; }
	inline void set_m_IsEmulatedMouseDownCurr_4(bool value)
	{
		___m_IsEmulatedMouseDownCurr_4 = value;
	}

	inline static int32_t get_offset_of_m_IsEmulatedMouseDownPrev_5() { return static_cast<int32_t>(offsetof(HoloLensInput_t4157575750, ___m_IsEmulatedMouseDownPrev_5)); }
	inline bool get_m_IsEmulatedMouseDownPrev_5() const { return ___m_IsEmulatedMouseDownPrev_5; }
	inline bool* get_address_of_m_IsEmulatedMouseDownPrev_5() { return &___m_IsEmulatedMouseDownPrev_5; }
	inline void set_m_IsEmulatedMouseDownPrev_5(bool value)
	{
		___m_IsEmulatedMouseDownPrev_5 = value;
	}

	inline static int32_t get_offset_of_m_MouseEmulationMode_6() { return static_cast<int32_t>(offsetof(HoloLensInput_t4157575750, ___m_MouseEmulationMode_6)); }
	inline int32_t get_m_MouseEmulationMode_6() const { return ___m_MouseEmulationMode_6; }
	inline int32_t* get_address_of_m_MouseEmulationMode_6() { return &___m_MouseEmulationMode_6; }
	inline void set_m_MouseEmulationMode_6(int32_t value)
	{
		___m_MouseEmulationMode_6 = value;
	}

	inline static int32_t get_offset_of_m_NavigationNormalizedOffset_7() { return static_cast<int32_t>(offsetof(HoloLensInput_t4157575750, ___m_NavigationNormalizedOffset_7)); }
	inline Vector3_t3722313464  get_m_NavigationNormalizedOffset_7() const { return ___m_NavigationNormalizedOffset_7; }
	inline Vector3_t3722313464 * get_address_of_m_NavigationNormalizedOffset_7() { return &___m_NavigationNormalizedOffset_7; }
	inline void set_m_NavigationNormalizedOffset_7(Vector3_t3722313464  value)
	{
		___m_NavigationNormalizedOffset_7 = value;
	}

	inline static int32_t get_offset_of_m_NavigationAnchorWorldSpace_8() { return static_cast<int32_t>(offsetof(HoloLensInput_t4157575750, ___m_NavigationAnchorWorldSpace_8)); }
	inline Vector3_t3722313464  get_m_NavigationAnchorWorldSpace_8() const { return ___m_NavigationAnchorWorldSpace_8; }
	inline Vector3_t3722313464 * get_address_of_m_NavigationAnchorWorldSpace_8() { return &___m_NavigationAnchorWorldSpace_8; }
	inline void set_m_NavigationAnchorWorldSpace_8(Vector3_t3722313464  value)
	{
		___m_NavigationAnchorWorldSpace_8 = value;
	}

	inline static int32_t get_offset_of_m_TapAnchorWorldSpace_9() { return static_cast<int32_t>(offsetof(HoloLensInput_t4157575750, ___m_TapAnchorWorldSpace_9)); }
	inline Vector3_t3722313464  get_m_TapAnchorWorldSpace_9() const { return ___m_TapAnchorWorldSpace_9; }
	inline Vector3_t3722313464 * get_address_of_m_TapAnchorWorldSpace_9() { return &___m_TapAnchorWorldSpace_9; }
	inline void set_m_TapAnchorWorldSpace_9(Vector3_t3722313464  value)
	{
		___m_TapAnchorWorldSpace_9 = value;
	}

	inline static int32_t get_offset_of_m_LastTapTime_10() { return static_cast<int32_t>(offsetof(HoloLensInput_t4157575750, ___m_LastTapTime_10)); }
	inline float get_m_LastTapTime_10() const { return ___m_LastTapTime_10; }
	inline float* get_address_of_m_LastTapTime_10() { return &___m_LastTapTime_10; }
	inline void set_m_LastTapTime_10(float value)
	{
		___m_LastTapTime_10 = value;
	}

	inline static int32_t get_offset_of_m_Module_11() { return static_cast<int32_t>(offsetof(HoloLensInput_t4157575750, ___m_Module_11)); }
	inline HoloLensInputModule_t3599952490 * get_m_Module_11() const { return ___m_Module_11; }
	inline HoloLensInputModule_t3599952490 ** get_address_of_m_Module_11() { return &___m_Module_11; }
	inline void set_m_Module_11(HoloLensInputModule_t3599952490 * value)
	{
		___m_Module_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Module_11), value);
	}

	inline static int32_t get_offset_of_m_GestureRecognizer_12() { return static_cast<int32_t>(offsetof(HoloLensInput_t4157575750, ___m_GestureRecognizer_12)); }
	inline GestureRecognizer_t1566529591 * get_m_GestureRecognizer_12() const { return ___m_GestureRecognizer_12; }
	inline GestureRecognizer_t1566529591 ** get_address_of_m_GestureRecognizer_12() { return &___m_GestureRecognizer_12; }
	inline void set_m_GestureRecognizer_12(GestureRecognizer_t1566529591 * value)
	{
		___m_GestureRecognizer_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_GestureRecognizer_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLOLENSINPUT_T4157575750_H
#ifndef POINTERINPUTMODULE_T3453173740_H
#define POINTERINPUTMODULE_T3453173740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_t3453173740  : public BaseInputModule_t2019268878
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t2696614423 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t384203932 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_t3453173740, ___m_PointerData_14)); }
	inline Dictionary_2_t2696614423 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t2696614423 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t2696614423 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerData_14), value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_t3453173740, ___m_MouseState_15)); }
	inline MouseState_t384203932 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_t384203932 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_t384203932 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseState_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTERINPUTMODULE_T3453173740_H
#ifndef STANDALONEINPUTMODULE_T2760469101_H
#define STANDALONEINPUTMODULE_T2760469101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.StandaloneInputModule
struct  StandaloneInputModule_t2760469101  : public PointerInputModule_t3453173740
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t2156229523  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t2156229523  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t2156229523  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t1113636619 * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t3807901092 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_LastMoveVector_17)); }
	inline Vector2_t2156229523  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_t2156229523 * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_t2156229523  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_LastMousePosition_19)); }
	inline Vector2_t2156229523  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_t2156229523 * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_t2156229523  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_MousePosition_20)); }
	inline Vector2_t2156229523  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_t2156229523 * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_t2156229523  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_t1113636619 * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_t1113636619 * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentFocusedGameObject_21), value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_InputPointerEvent_22)); }
	inline PointerEventData_t3807901092 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_t3807901092 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_t3807901092 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputPointerEvent_22), value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalAxis_23), value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalAxis_24), value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_SubmitButton_25), value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_CancelButton_26), value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDALONEINPUTMODULE_T2760469101_H
#ifndef HOLOLENSINPUTMODULE_T3599952490_H
#define HOLOLENSINPUTMODULE_T3599952490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.HoloLensInputModule
struct  HoloLensInputModule_t3599952490  : public StandaloneInputModule_t2760469101
{
public:
	// System.Single UnityEngine.EventSystems.HoloLensInputModule::m_NormalizedNavigationToScreenOffsetScalar
	float ___m_NormalizedNavigationToScreenOffsetScalar_30;
	// System.Single UnityEngine.EventSystems.HoloLensInputModule::m_TimeToPressOnTap
	float ___m_TimeToPressOnTap_31;
	// UnityEngine.EventSystems.HoloLensInput UnityEngine.EventSystems.HoloLensInputModule::m_HoloLensInput
	HoloLensInput_t4157575750 * ___m_HoloLensInput_32;
	// System.Boolean UnityEngine.EventSystems.HoloLensInputModule::m_HasBeenActivated
	bool ___m_HasBeenActivated_33;
	// System.Boolean UnityEngine.EventSystems.HoloLensInputModule::m_HasGestureToProcess
	bool ___m_HasGestureToProcess_34;

public:
	inline static int32_t get_offset_of_m_NormalizedNavigationToScreenOffsetScalar_30() { return static_cast<int32_t>(offsetof(HoloLensInputModule_t3599952490, ___m_NormalizedNavigationToScreenOffsetScalar_30)); }
	inline float get_m_NormalizedNavigationToScreenOffsetScalar_30() const { return ___m_NormalizedNavigationToScreenOffsetScalar_30; }
	inline float* get_address_of_m_NormalizedNavigationToScreenOffsetScalar_30() { return &___m_NormalizedNavigationToScreenOffsetScalar_30; }
	inline void set_m_NormalizedNavigationToScreenOffsetScalar_30(float value)
	{
		___m_NormalizedNavigationToScreenOffsetScalar_30 = value;
	}

	inline static int32_t get_offset_of_m_TimeToPressOnTap_31() { return static_cast<int32_t>(offsetof(HoloLensInputModule_t3599952490, ___m_TimeToPressOnTap_31)); }
	inline float get_m_TimeToPressOnTap_31() const { return ___m_TimeToPressOnTap_31; }
	inline float* get_address_of_m_TimeToPressOnTap_31() { return &___m_TimeToPressOnTap_31; }
	inline void set_m_TimeToPressOnTap_31(float value)
	{
		___m_TimeToPressOnTap_31 = value;
	}

	inline static int32_t get_offset_of_m_HoloLensInput_32() { return static_cast<int32_t>(offsetof(HoloLensInputModule_t3599952490, ___m_HoloLensInput_32)); }
	inline HoloLensInput_t4157575750 * get_m_HoloLensInput_32() const { return ___m_HoloLensInput_32; }
	inline HoloLensInput_t4157575750 ** get_address_of_m_HoloLensInput_32() { return &___m_HoloLensInput_32; }
	inline void set_m_HoloLensInput_32(HoloLensInput_t4157575750 * value)
	{
		___m_HoloLensInput_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_HoloLensInput_32), value);
	}

	inline static int32_t get_offset_of_m_HasBeenActivated_33() { return static_cast<int32_t>(offsetof(HoloLensInputModule_t3599952490, ___m_HasBeenActivated_33)); }
	inline bool get_m_HasBeenActivated_33() const { return ___m_HasBeenActivated_33; }
	inline bool* get_address_of_m_HasBeenActivated_33() { return &___m_HasBeenActivated_33; }
	inline void set_m_HasBeenActivated_33(bool value)
	{
		___m_HasBeenActivated_33 = value;
	}

	inline static int32_t get_offset_of_m_HasGestureToProcess_34() { return static_cast<int32_t>(offsetof(HoloLensInputModule_t3599952490, ___m_HasGestureToProcess_34)); }
	inline bool get_m_HasGestureToProcess_34() const { return ___m_HasGestureToProcess_34; }
	inline bool* get_address_of_m_HasGestureToProcess_34() { return &___m_HasGestureToProcess_34; }
	inline void set_m_HasGestureToProcess_34(bool value)
	{
		___m_HasGestureToProcess_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLOLENSINPUTMODULE_T3599952490_H
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
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
// UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest[]
struct SMBakeRequestU5BU5D_t3259285392  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SMBakeRequest_t3729498717  m_Items[1];

public:
	inline SMBakeRequest_t3729498717  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SMBakeRequest_t3729498717 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SMBakeRequest_t3729498717  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SMBakeRequest_t3729498717  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SMBakeRequest_t3729498717 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SMBakeRequest_t3729498717  value)
	{
		m_Items[index] = value;
	}
};

extern "C" void SurfaceData_t200825419_marshal_pinvoke(const SurfaceData_t200825419& unmarshaled, SurfaceData_t200825419_marshaled_pinvoke& marshaled);
extern "C" void SurfaceData_t200825419_marshal_pinvoke_back(const SurfaceData_t200825419_marshaled_pinvoke& marshaled, SurfaceData_t200825419& unmarshaled);
extern "C" void SurfaceData_t200825419_marshal_pinvoke_cleanup(SurfaceData_t200825419_marshaled_pinvoke& marshaled);
extern "C" void SMComponentRecord_t4291932003_marshal_pinvoke(const SMComponentRecord_t4291932003& unmarshaled, SMComponentRecord_t4291932003_marshaled_pinvoke& marshaled);
extern "C" void SMComponentRecord_t4291932003_marshal_pinvoke_back(const SMComponentRecord_t4291932003_marshaled_pinvoke& marshaled, SMComponentRecord_t4291932003& unmarshaled);
extern "C" void SMComponentRecord_t4291932003_marshal_pinvoke_cleanup(SMComponentRecord_t4291932003_marshaled_pinvoke& marshaled);
extern "C" void SurfaceData_t200825419_marshal_com(const SurfaceData_t200825419& unmarshaled, SurfaceData_t200825419_marshaled_com& marshaled);
extern "C" void SurfaceData_t200825419_marshal_com_back(const SurfaceData_t200825419_marshaled_com& marshaled, SurfaceData_t200825419& unmarshaled);
extern "C" void SurfaceData_t200825419_marshal_com_cleanup(SurfaceData_t200825419_marshaled_com& marshaled);
extern "C" void SMComponentRecord_t4291932003_marshal_com(const SMComponentRecord_t4291932003& unmarshaled, SMComponentRecord_t4291932003_marshaled_com& marshaled);
extern "C" void SMComponentRecord_t4291932003_marshal_com_back(const SMComponentRecord_t4291932003_marshaled_com& marshaled, SMComponentRecord_t4291932003& unmarshaled);
extern "C" void SMComponentRecord_t4291932003_marshal_com_cleanup(SMComponentRecord_t4291932003_marshaled_com& marshaled);
extern "C" void SurfaceObserver_t1930409633_marshal_pinvoke(const SurfaceObserver_t1930409633& unmarshaled, SurfaceObserver_t1930409633_marshaled_pinvoke& marshaled);
extern "C" void SurfaceObserver_t1930409633_marshal_pinvoke_back(const SurfaceObserver_t1930409633_marshaled_pinvoke& marshaled, SurfaceObserver_t1930409633& unmarshaled);
extern "C" void SurfaceObserver_t1930409633_marshal_pinvoke_cleanup(SurfaceObserver_t1930409633_marshaled_pinvoke& marshaled);
extern "C" void SurfaceObserver_t1930409633_marshal_com(const SurfaceObserver_t1930409633& unmarshaled, SurfaceObserver_t1930409633_marshaled_com& marshaled);
extern "C" void SurfaceObserver_t1930409633_marshal_com_back(const SurfaceObserver_t1930409633_marshaled_com& marshaled, SurfaceObserver_t1930409633& unmarshaled);
extern "C" void SurfaceObserver_t1930409633_marshal_com_cleanup(SurfaceObserver_t1930409633_marshaled_com& marshaled);

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m1275483063_gshared (Action_1_t2902256995 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m2185077854_gshared (Action_1_t3544757211 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m2118875495_gshared (Action_1_t1156518837 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m82690689_gshared (Action_1_t341761863 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m3347797990_gshared (Action_1_t3270971242 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2437701974_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m290381969_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1204004817_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3300912776_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3923002270  Dictionary_2_GetEnumerator_m1087370259_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t71524366  Enumerator_get_Current_m3431285658_gshared (Enumerator_t3923002270 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3495598764_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3398155861_gshared (Enumerator_t3923002270 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m562365603_gshared (Enumerator_t3923002270 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m1839753989_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m212974362_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2382293057_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m193757924_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2744859241_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1344073393_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1379384250_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1190268628_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3865004651_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m2080863212_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m1086679910_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3438314823_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m3161192644_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3285698757_gshared (List_1_t1469039449 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2455368237_gshared (Predicate_1_t822258831 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Find(System.Predicate`1<!0>)
extern "C" IL2CPP_METHOD_ATTR SMComponentRecord_t4291932003  List_1_Find_m1208598465_gshared (List_1_t1469039449 * __this, Predicate_1_t822258831 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m376061299_gshared (List_1_t1469039449 * __this, SMComponentRecord_t4291932003  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAll(System.Predicate`1<!0>)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m3087115158_gshared (List_1_t1469039449 * __this, Predicate_1_t822258831 * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3358283326  List_1_GetEnumerator_m101756636_gshared (List_1_t1469039449 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Current()
extern "C" IL2CPP_METHOD_ATTR SMComponentRecord_t4291932003  Enumerator_get_Current_m1173067942_gshared (Enumerator_t3358283326 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m408144751_gshared (Enumerator_t3358283326 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2945450316_gshared (Enumerator_t3358283326 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR SMComponentRecord_t4291932003  List_1_get_Item_m1040871401_gshared (List_1_t1469039449 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m794802037_gshared (List_1_t1469039449 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m414841771_gshared (List_1_t1469039449 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::SetSpatializerRoomSize()
extern "C" IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_SetSpatializerRoomSize_m2991082460 (AudioSpatializerMicrosoft_t3761211273 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::SetSpatializerFloats()
extern "C" IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_SetSpatializerFloats_m388021816 (AudioSpatializerMicrosoft_t3761211273 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t3935305588 * Component_GetComponent_TisAudioSource_t3935305588_m2193089347 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.AudioSource UnityEngine.Audio.AudioSpatializerMicrosoft::get_audioSource()
extern "C" IL2CPP_METHOD_ATTR AudioSource_t3935305588 * AudioSpatializerMicrosoft_get_audioSource_m2096898666 (AudioSpatializerMicrosoft_t3761211273 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::SetSpatializerFloat(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_SetSpatializerFloat_m3945040067 (AudioSource_t3935305588 * __this, int32_t p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.BaseInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseInput__ctor_m372566135 (BaseInput_t3630163547 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGazeAndGestureScreenPosition()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  HoloLensInput_GetGazeAndGestureScreenPosition_m2931287743 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGestureScrollDelta()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  HoloLensInput_GetGestureScrollDelta_m4045976453 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
extern "C" IL2CPP_METHOD_ATTR void UIBehaviour_Awake_m2366095154 (UIBehaviour_t3495933518 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.EventSystems.HoloLensInputModule>()
inline HoloLensInputModule_t3599952490 * Component_GetComponent_TisHoloLensInputModule_t3599952490_m88657983 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  HoloLensInputModule_t3599952490 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer__ctor_m2713890136 (GestureRecognizer_t1566529591 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1275483063 (Action_1_t2902256995 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2902256995 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m1275483063_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_Tapped(System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_add_Tapped_m147378669 (GestureRecognizer_t1566529591 * __this, Action_1_t2902256995 * p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2185077854 (Action_1_t3544757211 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3544757211 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2185077854_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationStarted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationStarted_m113418328 (GestureRecognizer_t1566529591 * __this, Action_1_t3544757211 * p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2118875495 (Action_1_t1156518837 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1156518837 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2118875495_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationUpdated(System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationUpdated_m213586133 (GestureRecognizer_t1566529591 * __this, Action_1_t1156518837 * p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m82690689 (Action_1_t341761863 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t341761863 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m82690689_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationCompleted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationCompleted_m3307413119 (GestureRecognizer_t1566529591 * __this, Action_1_t341761863 * p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3347797990 (Action_1_t3270971242 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3270971242 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m3347797990_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationCanceled(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationCanceled_m1987680094 (GestureRecognizer_t1566529591 * __this, Action_1_t3270971242 * p0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.GestureSettings UnityEngine.XR.WSA.Input.GestureRecognizer::SetRecognizableGestures(UnityEngine.XR.WSA.Input.GestureSettings)
extern "C" IL2CPP_METHOD_ATTR int32_t GestureRecognizer_SetRecognizableGestures_m2376525628 (GestureRecognizer_t1566529591 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::StartCapturingGestures()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_StartCapturingGestures_m2930269420 (GestureRecognizer_t1566529591 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::StopCapturingGestures()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_StopCapturingGestures_m2515341192 (GestureRecognizer_t1566529591 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_Tapped(System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_remove_Tapped_m1269883542 (GestureRecognizer_t1566529591 * __this, Action_1_t2902256995 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationStarted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationStarted_m149485525 (GestureRecognizer_t1566529591 * __this, Action_1_t3544757211 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationUpdated(System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationUpdated_m2263930006 (GestureRecognizer_t1566529591 * __this, Action_1_t1156518837 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationCompleted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationCompleted_m977910435 (GestureRecognizer_t1566529591 * __this, Action_1_t341761863 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationCanceled(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationCanceled_m1841886029 (GestureRecognizer_t1566529591 * __this, Action_1_t3270971242 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.UIBehaviour::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void UIBehaviour_OnDestroy_m1613239498 (UIBehaviour_t3495933518 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.EventSystems.HoloLensInputModule::get_timeToPressOnTap()
extern "C" IL2CPP_METHOD_ATTR float HoloLensInputModule_get_timeToPressOnTap_m2760646233 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.HoloLensInputModule::Internal_GetCurrentFocusedGameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * HoloLensInputModule_Internal_GetCurrentFocusedGameObject_m2430273228 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t3704657025 * GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t3704657025 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2437701974_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGazeScreenPosition()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  HoloLensInput_GetGazeScreenPosition_m3716061908 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m1761902807 (RuntimeObject * __this /* static, unused */, RectTransform_t3704657025 * p0, Vector2_t2156229523  p1, Camera_t4157153871 * p2, Vector3_t3722313464 * p3, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.HoloLensInputModule::Internal_GestureNotifier()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInputModule_Internal_GestureNotifier_m4248145545 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.HoloLensInput::TryGetAnchorWorldSpace(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool HoloLensInput_TryGetAnchorWorldSpace_m3603888745 (HoloLensInput_t4157575750 * __this, Vector3_t3722313464 * ___anchor0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::get_normalizedOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NavigationUpdatedEventArgs_get_normalizedOffset_m614681949 (NavigationUpdatedEventArgs_t984051242 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.HoloLensInput::OnNavigationCompletedOrCanceled()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput_OnNavigationCompletedOrCanceled_m1485381899 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Camera_WorldToScreenPoint_m3726311023 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Single UnityEngine.EventSystems.HoloLensInputModule::get_normalizedNavigationToScreenOffsetScalar()
extern "C" IL2CPP_METHOD_ATTR float HoloLensInputModule_get_normalizedNavigationToScreenOffsetScalar_m2747580876 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m3294489634 (RuntimeObject * __this /* static, unused */, float p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::EmulateMousePosition(UnityEngine.Vector3,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  HoloLensInput_EmulateMousePosition_m4159836491 (HoloLensInput_t4157575750 * __this, Vector3_t3722313464  ___anchorWorldspace0, Vector2_t2156229523  ___finalOffset1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StandaloneInputModule__ctor_m2419721820 (StandaloneInputModule_t2760469101 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.EventSystems.HoloLensInput>()
inline HoloLensInput_t4157575750 * Component_GetComponent_TisHoloLensInput_t4157575750_m2391789968 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  HoloLensInput_t4157575750 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.HoloLensInput>()
inline HoloLensInput_t4157575750 * GameObject_AddComponent_TisHoloLensInput_t4157575750_m1267438782 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  HoloLensInput_t4157575750 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m290381969_gshared)(__this, method);
}
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
extern "C" IL2CPP_METHOD_ATTR bool StandaloneInputModule_IsModuleSupported_m2880633224 (StandaloneInputModule_t2760469101 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
extern "C" IL2CPP_METHOD_ATTR String_t* XRSettings_get_loadedDeviceName_m2020127682 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m1744302937 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_forceModuleActive()
extern "C" IL2CPP_METHOD_ATTR bool StandaloneInputModule_get_forceModuleActive_m3500597849 (StandaloneInputModule_t2760469101 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
extern "C" IL2CPP_METHOD_ATTR void StandaloneInputModule_ActivateModule_m2232892298 (StandaloneInputModule_t2760469101 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.HoloLensInput::UpdateInput()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput_UpdateInput_m3276086152 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
extern "C" IL2CPP_METHOD_ATTR void StandaloneInputModule_UpdateModule_m450861257 (StandaloneInputModule_t2760469101 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.HoloLensInput::AllowDrag()
extern "C" IL2CPP_METHOD_ATTR bool HoloLensInput_AllowDrag_m2531001270 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void PointerInputModule_ProcessDrag_m1341573435 (PointerInputModule_t3453173740 * __this, PointerEventData_t3807901092 * p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::GetCurrentFocusedGameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * StandaloneInputModule_GetCurrentFocusedGameObject_m2194131683 (StandaloneInputModule_t2760469101 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
extern "C" IL2CPP_METHOD_ATTR EventSystem_t1003666588 * BaseInputModule_get_eventSystem_m1212899053 (BaseInputModule_t2019268878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::.ctor()
inline void Dictionary_2__ctor_m3933169253 (Dictionary_2_t2943126845 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2943126845 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m1204004817 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1204004817_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_observerId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_observerId_m4165439406 (SpatialMappingBase_t1565881417 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObjects(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObjects_m311615174 (SpatialMappingBase_t1565881417 * __this, Dictionary_2_t2943126845 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_selectedCamera(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_selectedCamera_m4006794900 (SpatialMappingBase_t1565881417 * __this, Camera_t4157153871 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_nextSurfaceChangeUpdateTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m3031625415 (SpatialMappingBase_t1565881417 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver__ctor_m1882911206 (SurfaceObserver_t1930409633 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObserver(UnityEngine.XR.WSA.SurfaceObserver)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObserver_m1104502479 (SpatialMappingBase_t1565881417 * __this, SurfaceObserver_t1930409633 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingContext UnityEngine.XR.WSA.SpatialMappingContext::get_Instance()
extern "C" IL2CPP_METHOD_ATTR SpatialMappingContext_t1697439830 * SpatialMappingContext_get_Instance_m527477890 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback__ctor_m953033282 (SurfaceDataReadyCallback_t2457228298 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetHighestPriorityCallback__ctor_m1422064434 (GetHighestPriorityCallback_t3420804231 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObserver()
extern "C" IL2CPP_METHOD_ATTR SurfaceObserver_t1930409633 * SpatialMappingBase_get_surfaceObserver_m2593881494 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RegisterComponent(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback,UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback,UnityEngine.XR.WSA.SurfaceObserver)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_RegisterComponent_m1382065901 (SpatialMappingContext_t1697439830 * __this, SpatialMappingBase_t1565881417 * ___smComponent0, SurfaceDataReadyCallback_t2457228298 * ___onDataReady1, GetHighestPriorityCallback_t3420804231 * ___getHighestPri2, SurfaceObserver_t1930409633 * ___observer3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_halfBoxExtents()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  SpatialMappingBase_get_halfBoxExtents_m2701254627 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Bounds__ctor_m1937678907 (Bounds_t2266837910 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bounds(UnityEngine.Bounds)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bounds_m92900639 (SpatialMappingBase_t1565881417 * __this, Bounds_t2266837910  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdatePosition()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdatePosition_m1218108679 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObjects()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2943126845 * SpatialMappingBase_get_surfaceObjects_m4219327713 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Count()
inline int32_t Dictionary_2_get_Count_m3196174006 (Dictionary_2_t2943126845 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2943126845 *, const RuntimeMethod*))Dictionary_2_get_Count_m3300912776_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::GetEnumerator()
inline Enumerator_t602342324  Dictionary_2_GetEnumerator_m1270273418 (Dictionary_2_t2943126845 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t602342324  (*) (Dictionary_2_t2943126845 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m1087370259_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Current()
inline KeyValuePair_2_t1045831716  Enumerator_get_Current_m1264606807 (Enumerator_t602342324 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t1045831716  (*) (Enumerator_t602342324 *, const RuntimeMethod*))Enumerator_get_Current_m3431285658_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Value()
inline Surface_t4054413514 * KeyValuePair_2_get_Value_m1578890025 (KeyValuePair_2_t1045831716 * __this, const RuntimeMethod* method)
{
	return ((  Surface_t4054413514 * (*) (KeyValuePair_2_t1045831716 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3495598764_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Surface_get_gameObject_m1222724741 (Surface_t4054413514 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::MoveNext()
inline bool Enumerator_MoveNext_m2331042058 (Enumerator_t602342324 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t602342324 *, const RuntimeMethod*))Enumerator_MoveNext_m3398155861_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Dispose()
inline void Enumerator_Dispose_m76550905 (Enumerator_t602342324 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t602342324 *, const RuntimeMethod*))Enumerator_Dispose_m562365603_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_pendingSurfacesForEviction()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2943126845 * SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m3348634344 (KeyValuePair_2_t1045831716 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t1045831716 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1839753989_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::DeregisterComponent(UnityEngine.XR.WSA.SpatialMappingBase)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_DeregisterComponent_m2711223001 (SpatialMappingContext_t1697439830 * __this, SpatialMappingBase_t1565881417 * ___smComponent0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Clear()
inline void Dictionary_2_Clear_m1864584243 (Dictionary_2_t2943126845 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2943126845 *, const RuntimeMethod*))Dictionary_2_Clear_m212974362_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParentWasDynamicallyCreated()
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_surfaceParentWasDynamicallyCreated_m4140374276 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * SpatialMappingBase_get_surfaceParent_m2921944919 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParent(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParent_m2781619170 (SpatialMappingBase_t1565881417 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_Dispose_m3692775015 (SurfaceObserver_t1930409633 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_lastUpdatedObserverPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  SpatialMappingBase_get_lastUpdatedObserverPosition_m2010441697 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m3025115945 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_freezeUpdates()
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_freezeUpdates_m3541631440 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_nextSurfaceChangeUpdateTime()
extern "C" IL2CPP_METHOD_ATTR float SpatialMappingBase_get_nextSurfaceChangeUpdateTime_m2221532507 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SurfaceChangedDelegate__ctor_m2596031620 (SurfaceChangedDelegate_t2591813092 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Update(UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_Update_m722573683 (SurfaceObserver_t1930409633 * __this, SurfaceChangedDelegate_t2591813092 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ProcessEvictedObjects()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_ProcessEvictedObjects_m1133365705 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_secondsBetweenUpdates()
extern "C" IL2CPP_METHOD_ATTR float SpatialMappingBase_get_secondsBetweenUpdates_m1560615971 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::ComponentHasDataRequests()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_ComponentHasDataRequests_m3294686077 (SpatialMappingContext_t1697439830 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase/VolumeType UnityEngine.XR.WSA.SpatialMappingBase::get_volumeType()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_volumeType_m68629827 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_sphereRadius()
extern "C" IL2CPP_METHOD_ATTR float SpatialMappingBase_get_sphereRadius_m2108285469 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::SetVolumeAsSphere(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_SetVolumeAsSphere_m2950597134 (SurfaceObserver_t1930409633 * __this, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::SetVolumeAsAxisAlignedBox(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_SetVolumeAsAxisAlignedBox_m3933700684 (SurfaceObserver_t1930409633 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.XR.WSA.SpatialMappingBase::get_bounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_t2266837910  SpatialMappingBase_get_bounds_m3134789507 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Bounds_set_center_m335768106 (Bounds_t2266837910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Bounds_set_extents_m2537337060 (Bounds_t2266837910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_lastUpdatedObserverPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_lastUpdatedObserverPosition_m2622840791 (SpatialMappingBase_t1565881417 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_bakePhysics()
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_bakePhysics_m3582877037 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnAddOrUpdateSurface(UnityEngine.XR.WSA.SurfaceId,System.DateTime,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnAddOrUpdateSurface_m4264909164 (SpatialMappingBase_t1565881417 * __this, SurfaceId_t2999094746  ___surfaceId0, DateTime_t3738529785  ___updateTime1, bool ___bakePhysics2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnRemoveSurface(UnityEngine.XR.WSA.SurfaceId)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnRemoveSurface_m2379226760 (SpatialMappingBase_t1565881417 * __this, SurfaceId_t2999094746  ___surfaceId0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m2572687910 (Dictionary_2_t2943126845 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2943126845 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2382293057_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Item(!0)
inline Surface_t4054413514 * Dictionary_2_get_Item_m3334157318 (Dictionary_2_t2943126845 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Surface_t4054413514 * (*) (Dictionary_2_t2943126845 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m193757924_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m304484421 (Dictionary_2_t2943126845 * __this, int32_t p0, Surface_t4054413514 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2943126845 *, int32_t, Surface_t4054413514 *, const RuntimeMethod*))Dictionary_2_set_Item_m2744859241_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Remove(!0)
inline bool Dictionary_2_Remove_m2741774404 (Dictionary_2_t2943126845 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2943126845 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m1344073393_gshared)(__this, p0, method);
}
// UnityEngine.XR.WSA.SpatialMappingBase/Surface UnityEngine.XR.WSA.SpatialMappingBase::CreateSurface(UnityEngine.XR.WSA.SurfaceId)
extern "C" IL2CPP_METHOD_ATTR Surface_t4054413514 * SpatialMappingBase_CreateSurface_m210883022 (SpatialMappingBase_t1565881417 * __this, SurfaceId_t2999094746  ___surfaceId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_surfaceData(UnityEngine.XR.WSA.SurfaceData)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_surfaceData_m1874742482 (Surface_t4054413514 * __this, SurfaceData_t200825419  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Add(!0,!1)
inline void Dictionary_2_Add_m3142488424 (Dictionary_2_t2943126845 * __this, int32_t p0, Surface_t4054413514 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2943126845 *, int32_t, Surface_t4054413514 *, const RuntimeMethod*))Dictionary_2_Add_m1379384250_gshared)(__this, p0, p1, method);
}
// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_surfaceData()
extern "C" IL2CPP_METHOD_ATTR SurfaceData_t200825419  Surface_get_surfaceData_m1464996161 (Surface_t4054413514 * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.XR.WSA.SpatialMappingBase::get_lodToPcm()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* SpatialMappingBase_get_lodToPcm_m1331271856 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase/LODType UnityEngine.XR.WSA.SpatialMappingBase::get_lodType()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_lodType_m3008284673 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_awaitingBake(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_awaitingBake_m1929127634 (Surface_t4054413514 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_updateTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_updateTime_m4237487960 (Surface_t4054413514 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Surface__ctor_m1401598773 (Surface_t4054413514 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_surfaceId(UnityEngine.XR.WSA.SurfaceId)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_surfaceId_m2855891470 (Surface_t4054413514 * __this, SurfaceId_t2999094746  ___value0, const RuntimeMethod* method);
// UnityEngine.MeshFilter UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshFilter()
extern "C" IL2CPP_METHOD_ATTR MeshFilter_t3523625662 * Surface_get_meshFilter_m1700654280 (Surface_t4054413514 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * MeshFilter_get_mesh_m3346355278 (MeshFilter_t3523625662 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * MeshFilter_get_sharedMesh_m1726897210 (MeshFilter_t3523625662 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_m1415871686 (MeshFilter_t3523625662 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_observerId()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_observerId_m311309638 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParentWasDynamicallyCreated(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParentWasDynamicallyCreated_m3990611021 (SpatialMappingBase_t1565881417 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_surfaceId()
extern "C" IL2CPP_METHOD_ATTR SurfaceId_t2999094746  Surface_get_surfaceId_m3957897989 (Surface_t4054413514 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_gameObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_gameObject_m31762453 (Surface_t4054413514 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t3523625662 * GameObject_GetComponent_TisMeshFilter_t3523625662_m1245918568 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t3523625662 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2437701974_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshFilter(UnityEngine.MeshFilter)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_meshFilter_m2861310253 (Surface_t4054413514 * __this, MeshFilter_t3523625662 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t3523625662 * GameObject_AddComponent_TisMeshFilter_t3523625662_m1910295747 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t3523625662 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m290381969_gshared)(__this, method);
}
// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_worldAnchor()
extern "C" IL2CPP_METHOD_ATTR WorldAnchor_t2161774153 * Surface_get_worldAnchor_m2380240801 (Surface_t4054413514 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_t2161774153 * GameObject_GetComponent_TisWorldAnchor_t2161774153_m3129018124 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_t2161774153 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2437701974_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_worldAnchor(UnityEngine.XR.WSA.WorldAnchor)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_worldAnchor_m2844199449 (Surface_t4054413514 * __this, WorldAnchor_t2161774153 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_t2161774153 * GameObject_AddComponent_TisWorldAnchor_t2161774153_m1146425241 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_t2161774153 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m290381969_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3606827976 (Dictionary_2_t2943126845 * __this, int32_t p0, Surface_t4054413514 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2943126845 *, int32_t, Surface_t4054413514 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1190268628_gshared)(__this, p0, p1, method);
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_numUpdatesBeforeRemoval()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_numUpdatesBeforeRemoval_m1861592450 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::ShouldRemainActiveWhileBeingRemoved(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m3306344036 (SpatialMappingBase_t1565881417 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_remainingUpdatesToLive(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_remainingUpdatesToLive_m731613306 (Surface_t4054413514 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.XR.WSA.SpatialMappingBase::get_selectedCamera()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * SpatialMappingBase_get_selectedCamera_m3580988241 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::BoundsContains(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingBase_BoundsContains_m2272712744 (SpatialMappingBase_t1565881417 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Bounds_Contains_m1110518741 (Bounds_t2266837910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.WSA.SpatialMappingBase::get_surfacesToRemoveFromDict()
extern "C" IL2CPP_METHOD_ATTR List_1_t128053199 * SpatialMappingBase_get_surfacesToRemoveFromDict_m3794671202 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m3865004651 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_Clear_m3865004651_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m2080863212 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m2080863212_gshared)(__this, p0, method);
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_remainingUpdatesToLive()
extern "C" IL2CPP_METHOD_ATTR int32_t Surface_get_remainingUpdatesToLive_m4163189161 (Surface_t4054413514 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m1086679910 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1086679910_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m3438314823 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_get_Count_m3438314823_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_awaitingBake()
extern "C" IL2CPP_METHOD_ATTR bool Surface_get_awaitingBake_m1433621250 (Surface_t4054413514 * __this, const RuntimeMethod* method);
// System.DateTime UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_updateTime()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  Surface_get_updateTime_m1560912062 (Surface_t4054413514 * __this, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool DateTime_op_LessThan_m2497205152 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Invoke(!0)
inline void Action_1_Invoke_m3713600556 (Action_1_t4226881109 * __this, Surface_t4054413514 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4226881109 *, Surface_t4054413514 *, const RuntimeMethod*))Action_1_Invoke_m3161192644_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase__ctor_m3608052931 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::ApplyPropertiesToCachedSurfaces()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m3709253588 (SpatialMappingCollider_t1632102360 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bakePhysics(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bakePhysics_m3587048758 (SpatialMappingBase_t1565881417 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::CloneBakedComponents(UnityEngine.XR.WSA.SurfaceData,UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_CloneBakedComponents_m2758487843 (SpatialMappingBase_t1565881417 * __this, SurfaceData_t200825419  ___bakedData0, Surface_t4054413514 * ___target1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.SpatialMappingCollider::get_layer()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingCollider_get_layer_m1700436402 (SpatialMappingCollider_t1632102360 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GameObject_set_layer_m3294992795 (GameObject_t1113636619 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.PhysicMaterial UnityEngine.XR.WSA.SpatialMappingCollider::get_material()
extern "C" IL2CPP_METHOD_ATTR PhysicMaterial_t2874185564 * SpatialMappingCollider_get_material_m2477253011 (SpatialMappingCollider_t1632102360 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_material_m3792038929 (Collider_t1773347010 * __this, PhysicMaterial_t2874185564 * p0, const RuntimeMethod* method);
// UnityEngine.MeshCollider UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshCollider()
extern "C" IL2CPP_METHOD_ATTR MeshCollider_t903564387 * Surface_get_meshCollider_m1987373388 (Surface_t4054413514 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdateSurfaceData_m2114368718 (SpatialMappingBase_t1565881417 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_AddRequiredComponentsForBaking_m589190807 (SpatialMappingBase_t1565881417 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
inline MeshCollider_t903564387 * GameObject_AddComponent_TisMeshCollider_t903564387_m855072157 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_t903564387 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m290381969_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshCollider(UnityEngine.MeshCollider)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_meshCollider_m2942846609 (Surface_t4054413514 * __this, MeshCollider_t903564387 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2863752444 (Action_1_t4226881109 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4226881109 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ForEachSurfaceInCache(System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_ForEachSurfaceInCache_m41844318 (SpatialMappingBase_t1565881417 * __this, Action_1_t4226881109 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnResetProperties_m3500339833 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m4158800245 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_material()
extern "C" IL2CPP_METHOD_ATTR PhysicMaterial_t2874185564 * Collider_get_material_m1396492839 (Collider_t1773347010 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Collider_get_enabled_m3096904824 (Collider_t1773347010 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingCollider::get_enableCollisions()
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingCollider_get_enableCollisions_m477768250 (SpatialMappingCollider_t1632102360 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor()
inline void List_1__ctor_m3285698757 (List_1_t1469039449 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1469039449 *, const RuntimeMethod*))List_1__ctor_m3285698757_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/<RegisterComponent>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRegisterComponentU3Ec__AnonStorey0__ctor_m320312479 (U3CRegisterComponentU3Ec__AnonStorey0_t222113166 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m2455368237 (Predicate_1_t822258831 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t822258831 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2455368237_gshared)(__this, p0, p1, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Find(System.Predicate`1<!0>)
inline SMComponentRecord_t4291932003  List_1_Find_m1208598465 (List_1_t1469039449 * __this, Predicate_1_t822258831 * p0, const RuntimeMethod* method)
{
	return ((  SMComponentRecord_t4291932003  (*) (List_1_t1469039449 *, Predicate_1_t822258831 *, const RuntimeMethod*))List_1_Find_m1208598465_gshared)(__this, p0, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Add(!0)
inline void List_1_Add_m376061299 (List_1_t1469039449 * __this, SMComponentRecord_t4291932003  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1469039449 *, SMComponentRecord_t4291932003 , const RuntimeMethod*))List_1_Add_m376061299_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/<DeregisterComponent>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDeregisterComponentU3Ec__AnonStorey1__ctor_m1502378428 (U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAll(System.Predicate`1<!0>)
inline int32_t List_1_RemoveAll_m3087115158 (List_1_t1469039449 * __this, Predicate_1_t822258831 * p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1469039449 *, Predicate_1_t822258831 *, const RuntimeMethod*))List_1_RemoveAll_m3087115158_gshared)(__this, p0, method);
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::GetInFlightIndexFromSD(UnityEngine.XR.WSA.SurfaceData)
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingContext_GetInFlightIndexFromSD_m235357745 (SpatialMappingContext_t1697439830 * __this, SurfaceData_t200825419  ___sd0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::PropagateDataReadyEventToComponents(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_PropagateDataReadyEventToComponents_m66442097 (SpatialMappingContext_t1697439830 * __this, SurfaceData_t200825419  ___sd0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, int32_t ___inFlightIndex3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::UpdateInFlightRecords(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_UpdateInFlightRecords_m1761761938 (SpatialMappingContext_t1697439830 * __this, int32_t ___inFlightIndex0, float ___elapsedBakeTimeSeconds1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RequestMeshPriorityFromComponents()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_RequestMeshPriorityFromComponents_m1980942071 (SpatialMappingContext_t1697439830 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest::IsClear()
extern "C" IL2CPP_METHOD_ATTR bool SMBakeRequest_IsClear_m2527899854 (SMBakeRequest_t3729498717 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase/LODType UnityEngine.XR.WSA.SpatialMappingBase::GetLODFromTPCM(System.Double)
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_GetLODFromTPCM_m2017509555 (RuntimeObject * __this /* static, unused */, double ___trianglesPerCubicMeter0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext::GetSMComponentFromInFlightIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR SpatialMappingBase_t1565881417 * SpatialMappingContext_GetSMComponentFromInFlightIndex_m1092231486 (SpatialMappingContext_t1697439830 * __this, int32_t ___inFlightIndex0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::GetEnumerator()
inline Enumerator_t3358283326  List_1_GetEnumerator_m101756636 (List_1_t1469039449 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3358283326  (*) (List_1_t1469039449 *, const RuntimeMethod*))List_1_GetEnumerator_m101756636_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Current()
inline SMComponentRecord_t4291932003  Enumerator_get_Current_m1173067942 (Enumerator_t3358283326 * __this, const RuntimeMethod* method)
{
	return ((  SMComponentRecord_t4291932003  (*) (Enumerator_t3358283326 *, const RuntimeMethod*))Enumerator_get_Current_m1173067942_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback::Invoke(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback_Invoke_m3801253413 (SurfaceDataReadyCallback_t2457228298 * __this, SpatialMappingBase_t1565881417 * ___requester0, SurfaceData_t200825419  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::MoveNext()
inline bool Enumerator_MoveNext_m408144751 (Enumerator_t3358283326 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3358283326 *, const RuntimeMethod*))Enumerator_MoveNext_m408144751_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Dispose()
inline void Enumerator_Dispose_m2945450316 (Enumerator_t3358283326 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3358283326 *, const RuntimeMethod*))Enumerator_Dispose_m2945450316_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest::Clear()
extern "C" IL2CPP_METHOD_ATTR void SMBakeRequest_Clear_m110826664 (SMBakeRequest_t3729498717 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Item(System.Int32)
inline SMComponentRecord_t4291932003  List_1_get_Item_m1040871401 (List_1_t1469039449 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  SMComponentRecord_t4291932003  (*) (List_1_t1469039449 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1040871401_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback::Invoke(UnityEngine.XR.WSA.SurfaceData&)
extern "C" IL2CPP_METHOD_ATTR bool GetHighestPriorityCallback_Invoke_m1091030339 (GetHighestPriorityCallback_t3420804231 * __this, SurfaceData_t200825419 * ___dataRequest0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate__ctor_m2681927192 (SurfaceDataReadyDelegate_t4152308677 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SurfaceObserver::RequestMeshAsync(UnityEngine.XR.WSA.SurfaceData,UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate)
extern "C" IL2CPP_METHOD_ATTR bool SurfaceObserver_RequestMeshAsync_m1474962252 (SurfaceObserver_t1930409633 * __this, SurfaceData_t200825419  p0, SurfaceDataReadyDelegate_t4152308677 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m794802037 (List_1_t1469039449 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1469039449 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m794802037_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Count()
inline int32_t List_1_get_Count_m414841771 (List_1_t1469039449 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1469039449 *, const RuntimeMethod*))List_1_get_Count_m414841771_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext__ctor_m859583417 (SpatialMappingContext_t1697439830 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::Clear()
extern "C" IL2CPP_METHOD_ATTR void SMComponentRecord_Clear_m3667022335 (SMComponentRecord_t4291932003 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::IsClear()
extern "C" IL2CPP_METHOD_ATTR bool SMComponentRecord_IsClear_m669906794 (SMComponentRecord_t4291932003 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::.ctor(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback,UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback,UnityEngine.XR.WSA.SurfaceObserver)
extern "C" IL2CPP_METHOD_ATTR void SMComponentRecord__ctor_m1823993706 (SMComponentRecord_t4291932003 * __this, SpatialMappingBase_t1565881417 * ___comp0, SurfaceDataReadyCallback_t2457228298 * ___onDataReady1, GetHighestPriorityCallback_t3420804231 * ___getHighestPri2, SurfaceObserver_t1930409633 * ___observer3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyPropertiesToCachedSurfaces()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m1197102617 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method);
// UnityEngine.MeshRenderer UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshRenderer()
extern "C" IL2CPP_METHOD_ATTR MeshRenderer_t587009260 * Surface_get_meshRenderer_m2164391012 (Surface_t4054413514 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t587009260 * GameObject_GetComponent_TisMeshRenderer_t587009260_m758541173 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t587009260 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2437701974_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshRenderer(UnityEngine.MeshRenderer)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_meshRenderer_m2783951849 (Surface_t4054413514 * __this, MeshRenderer_t587009260 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t587009260 * GameObject_AddComponent_TisMeshRenderer_t587009260_m412216294 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t587009260 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m290381969_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_m108599289 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_m987547713 (Renderer_t2627027031 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyRenderSettings(UnityEngine.MeshRenderer)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyRenderSettings_m3044446323 (SpatialMappingRenderer_t1808097488 * __this, MeshRenderer_t587009260 * ___meshRenderer0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingRenderer/RenderState UnityEngine.XR.WSA.SpatialMappingRenderer::get_renderState()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingRenderer_get_renderState_m3369581027 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_occlusionMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * SpatialMappingRenderer_get_occlusionMaterial_m266410818 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m2374163090 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_visualMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * SpatialMappingRenderer_get_visualMaterial_m62984138 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_DestroySurface_m298508766 (SpatialMappingBase_t1565881417 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_occlusionMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_occlusionMaterial_m1921952621 (SpatialMappingRenderer_t1808097488 * __this, Material_t340375123 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_visualMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_visualMaterial_m3135258387 (SpatialMappingRenderer_t1808097488 * __this, Material_t340375123 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDestroy_m3399831572 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Reset()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_Reset_m3515706896 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft__ctor_m1397080427 (AudioSpatializerMicrosoft_t3761211273 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_RoomSize_4(0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Audio.AudioSpatializerMicrosoft/RoomSize UnityEngine.Audio.AudioSpatializerMicrosoft::get_roomSize()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioSpatializerMicrosoft_get_roomSize_m770495859 (AudioSpatializerMicrosoft_t3761211273 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_RoomSize_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::set_roomSize(UnityEngine.Audio.AudioSpatializerMicrosoft/RoomSize)
extern "C" IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_set_roomSize_m441480013 (AudioSpatializerMicrosoft_t3761211273 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_RoomSize_4(L_0);
		AudioSpatializerMicrosoft_SetSpatializerRoomSize_m2991082460(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::Awake()
extern "C" IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_Awake_m651536476 (AudioSpatializerMicrosoft_t3761211273 * __this, const RuntimeMethod* method)
{
	{
		AudioSpatializerMicrosoft_SetSpatializerFloats_m388021816(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_OnValidate_m801799237 (AudioSpatializerMicrosoft_t3761211273 * __this, const RuntimeMethod* method)
{
	{
		AudioSpatializerMicrosoft_SetSpatializerFloats_m388021816(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::OnDidAnimateProperty()
extern "C" IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_OnDidAnimateProperty_m2495334626 (AudioSpatializerMicrosoft_t3761211273 * __this, const RuntimeMethod* method)
{
	{
		AudioSpatializerMicrosoft_SetSpatializerFloats_m388021816(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::SetSpatializerFloats()
extern "C" IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_SetSpatializerFloats_m388021816 (AudioSpatializerMicrosoft_t3761211273 * __this, const RuntimeMethod* method)
{
	{
		AudioSpatializerMicrosoft_SetSpatializerRoomSize_m2991082460(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AudioSource UnityEngine.Audio.AudioSpatializerMicrosoft::get_audioSource()
extern "C" IL2CPP_METHOD_ATTR AudioSource_t3935305588 * AudioSpatializerMicrosoft_get_audioSource_m2096898666 (AudioSpatializerMicrosoft_t3761211273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSpatializerMicrosoft_get_audioSource_m2096898666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSource_t3935305588 * V_0 = NULL;
	{
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m2193089347(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m2193089347_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		AudioSource_t3935305588 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::SetSpatializerRoomSize()
extern "C" IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_SetSpatializerRoomSize_m2991082460 (AudioSpatializerMicrosoft_t3761211273 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = AudioSpatializerMicrosoft_get_audioSource_m2096898666(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_m_RoomSize_4();
		NullCheck(L_0);
		AudioSource_SetSpatializerFloat_m3945040067(L_0, 0, (((float)((float)L_1))), /*hidden argument*/NULL);
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
// System.Void UnityEngine.EventSystems.HoloLensInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput__ctor_m2641801619 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput__ctor_m2641801619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_IsEmulatedMouseDownCurr_4((bool)0);
		__this->set_m_IsEmulatedMouseDownPrev_5((bool)0);
		__this->set_m_MouseEmulationMode_6(0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_NavigationNormalizedOffset_7(L_0);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_NavigationAnchorWorldSpace_8(L_1);
		Vector3_t3722313464  L_2 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_TapAnchorWorldSpace_9(L_2);
		__this->set_m_LastTapTime_10((0.0f));
		BaseInput__ctor_m372566135(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::get_mousePresent()
extern "C" IL2CPP_METHOD_ATTR bool HoloLensInput_get_mousePresent_m3082850780 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::GetMouseButtonDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool HoloLensInput_GetMouseButtonDown_m3967640261 (HoloLensInput_t4157575750 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___button0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = __this->get_m_IsEmulatedMouseDownPrev_5();
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		bool L_2 = __this->get_m_IsEmulatedMouseDownCurr_4();
		G_B4_0 = ((int32_t)(L_2));
		goto IL_001b;
	}

IL_001a:
	{
		G_B4_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::GetMouseButtonUp(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool HoloLensInput_GetMouseButtonUp_m479837968 (HoloLensInput_t4157575750 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___button0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		bool L_1 = __this->get_m_IsEmulatedMouseDownPrev_5();
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = __this->get_m_IsEmulatedMouseDownCurr_4();
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::GetMouseButton(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool HoloLensInput_GetMouseButton_m2678339211 (HoloLensInput_t4157575750 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___button0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = __this->get_m_IsEmulatedMouseDownCurr_4();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  HoloLensInput_get_mousePosition_m2078063999 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t2156229523  L_0 = HoloLensInput_GetGazeAndGestureScreenPosition_m2931287743(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_t2156229523  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::get_mouseScrollDelta()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  HoloLensInput_get_mouseScrollDelta_m4061185065 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t2156229523  L_0 = HoloLensInput_GetGestureScrollDelta_m4045976453(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_t2156229523  L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::get_touchSupported()
extern "C" IL2CPP_METHOD_ATTR bool HoloLensInput_get_touchSupported_m2757640102 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.EventSystems.HoloLensInput::get_touchCount()
extern "C" IL2CPP_METHOD_ATTR int32_t HoloLensInput_get_touchCount_m351325548 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::Awake()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput_Awake_m3731921795 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_Awake_m3731921795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UIBehaviour_Awake_m2366095154(__this, /*hidden argument*/NULL);
		HoloLensInputModule_t3599952490 * L_0 = Component_GetComponent_TisHoloLensInputModule_t3599952490_m88657983(__this, /*hidden argument*/Component_GetComponent_TisHoloLensInputModule_t3599952490_m88657983_RuntimeMethod_var);
		__this->set_m_Module_11(L_0);
		GestureRecognizer_t1566529591 * L_1 = (GestureRecognizer_t1566529591 *)il2cpp_codegen_object_new(GestureRecognizer_t1566529591_il2cpp_TypeInfo_var);
		GestureRecognizer__ctor_m2713890136(L_1, /*hidden argument*/NULL);
		__this->set_m_GestureRecognizer_12(L_1);
		GestureRecognizer_t1566529591 * L_2 = __this->get_m_GestureRecognizer_12();
		intptr_t L_3 = (intptr_t)HoloLensInput_GestureHandler_OnTapped_m3280423155_RuntimeMethod_var;
		Action_1_t2902256995 * L_4 = (Action_1_t2902256995 *)il2cpp_codegen_object_new(Action_1_t2902256995_il2cpp_TypeInfo_var);
		Action_1__ctor_m1275483063(L_4, __this, (intptr_t)L_3, /*hidden argument*/Action_1__ctor_m1275483063_RuntimeMethod_var);
		NullCheck(L_2);
		GestureRecognizer_add_Tapped_m147378669(L_2, L_4, /*hidden argument*/NULL);
		GestureRecognizer_t1566529591 * L_5 = __this->get_m_GestureRecognizer_12();
		intptr_t L_6 = (intptr_t)HoloLensInput_GestureHandler_OnNavigationStarted_m4120052574_RuntimeMethod_var;
		Action_1_t3544757211 * L_7 = (Action_1_t3544757211 *)il2cpp_codegen_object_new(Action_1_t3544757211_il2cpp_TypeInfo_var);
		Action_1__ctor_m2185077854(L_7, __this, (intptr_t)L_6, /*hidden argument*/Action_1__ctor_m2185077854_RuntimeMethod_var);
		NullCheck(L_5);
		GestureRecognizer_add_NavigationStarted_m113418328(L_5, L_7, /*hidden argument*/NULL);
		GestureRecognizer_t1566529591 * L_8 = __this->get_m_GestureRecognizer_12();
		intptr_t L_9 = (intptr_t)HoloLensInput_GestureHandler_OnNavigationUpdated_m3726276814_RuntimeMethod_var;
		Action_1_t1156518837 * L_10 = (Action_1_t1156518837 *)il2cpp_codegen_object_new(Action_1_t1156518837_il2cpp_TypeInfo_var);
		Action_1__ctor_m2118875495(L_10, __this, (intptr_t)L_9, /*hidden argument*/Action_1__ctor_m2118875495_RuntimeMethod_var);
		NullCheck(L_8);
		GestureRecognizer_add_NavigationUpdated_m213586133(L_8, L_10, /*hidden argument*/NULL);
		GestureRecognizer_t1566529591 * L_11 = __this->get_m_GestureRecognizer_12();
		intptr_t L_12 = (intptr_t)HoloLensInput_GestureHandler_OnNavigationCompleted_m4038163504_RuntimeMethod_var;
		Action_1_t341761863 * L_13 = (Action_1_t341761863 *)il2cpp_codegen_object_new(Action_1_t341761863_il2cpp_TypeInfo_var);
		Action_1__ctor_m82690689(L_13, __this, (intptr_t)L_12, /*hidden argument*/Action_1__ctor_m82690689_RuntimeMethod_var);
		NullCheck(L_11);
		GestureRecognizer_add_NavigationCompleted_m3307413119(L_11, L_13, /*hidden argument*/NULL);
		GestureRecognizer_t1566529591 * L_14 = __this->get_m_GestureRecognizer_12();
		intptr_t L_15 = (intptr_t)HoloLensInput_GestureHandler_OnNavigationCanceled_m4190221622_RuntimeMethod_var;
		Action_1_t3270971242 * L_16 = (Action_1_t3270971242 *)il2cpp_codegen_object_new(Action_1_t3270971242_il2cpp_TypeInfo_var);
		Action_1__ctor_m3347797990(L_16, __this, (intptr_t)L_15, /*hidden argument*/Action_1__ctor_m3347797990_RuntimeMethod_var);
		NullCheck(L_14);
		GestureRecognizer_add_NavigationCanceled_m1987680094(L_14, L_16, /*hidden argument*/NULL);
		GestureRecognizer_t1566529591 * L_17 = __this->get_m_GestureRecognizer_12();
		NullCheck(L_17);
		GestureRecognizer_SetRecognizableGestures_m2376525628(L_17, ((int32_t)113), /*hidden argument*/NULL);
		GestureRecognizer_t1566529591 * L_18 = __this->get_m_GestureRecognizer_12();
		NullCheck(L_18);
		GestureRecognizer_StartCapturingGestures_m2930269420(L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput_OnDestroy_m968357151 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_OnDestroy_m968357151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GestureRecognizer_t1566529591 * L_0 = __this->get_m_GestureRecognizer_12();
		NullCheck(L_0);
		GestureRecognizer_StopCapturingGestures_m2515341192(L_0, /*hidden argument*/NULL);
		GestureRecognizer_t1566529591 * L_1 = __this->get_m_GestureRecognizer_12();
		intptr_t L_2 = (intptr_t)HoloLensInput_GestureHandler_OnTapped_m3280423155_RuntimeMethod_var;
		Action_1_t2902256995 * L_3 = (Action_1_t2902256995 *)il2cpp_codegen_object_new(Action_1_t2902256995_il2cpp_TypeInfo_var);
		Action_1__ctor_m1275483063(L_3, __this, (intptr_t)L_2, /*hidden argument*/Action_1__ctor_m1275483063_RuntimeMethod_var);
		NullCheck(L_1);
		GestureRecognizer_remove_Tapped_m1269883542(L_1, L_3, /*hidden argument*/NULL);
		GestureRecognizer_t1566529591 * L_4 = __this->get_m_GestureRecognizer_12();
		intptr_t L_5 = (intptr_t)HoloLensInput_GestureHandler_OnNavigationStarted_m4120052574_RuntimeMethod_var;
		Action_1_t3544757211 * L_6 = (Action_1_t3544757211 *)il2cpp_codegen_object_new(Action_1_t3544757211_il2cpp_TypeInfo_var);
		Action_1__ctor_m2185077854(L_6, __this, (intptr_t)L_5, /*hidden argument*/Action_1__ctor_m2185077854_RuntimeMethod_var);
		NullCheck(L_4);
		GestureRecognizer_remove_NavigationStarted_m149485525(L_4, L_6, /*hidden argument*/NULL);
		GestureRecognizer_t1566529591 * L_7 = __this->get_m_GestureRecognizer_12();
		intptr_t L_8 = (intptr_t)HoloLensInput_GestureHandler_OnNavigationUpdated_m3726276814_RuntimeMethod_var;
		Action_1_t1156518837 * L_9 = (Action_1_t1156518837 *)il2cpp_codegen_object_new(Action_1_t1156518837_il2cpp_TypeInfo_var);
		Action_1__ctor_m2118875495(L_9, __this, (intptr_t)L_8, /*hidden argument*/Action_1__ctor_m2118875495_RuntimeMethod_var);
		NullCheck(L_7);
		GestureRecognizer_remove_NavigationUpdated_m2263930006(L_7, L_9, /*hidden argument*/NULL);
		GestureRecognizer_t1566529591 * L_10 = __this->get_m_GestureRecognizer_12();
		intptr_t L_11 = (intptr_t)HoloLensInput_GestureHandler_OnNavigationCompleted_m4038163504_RuntimeMethod_var;
		Action_1_t341761863 * L_12 = (Action_1_t341761863 *)il2cpp_codegen_object_new(Action_1_t341761863_il2cpp_TypeInfo_var);
		Action_1__ctor_m82690689(L_12, __this, (intptr_t)L_11, /*hidden argument*/Action_1__ctor_m82690689_RuntimeMethod_var);
		NullCheck(L_10);
		GestureRecognizer_remove_NavigationCompleted_m977910435(L_10, L_12, /*hidden argument*/NULL);
		GestureRecognizer_t1566529591 * L_13 = __this->get_m_GestureRecognizer_12();
		intptr_t L_14 = (intptr_t)HoloLensInput_GestureHandler_OnNavigationCanceled_m4190221622_RuntimeMethod_var;
		Action_1_t3270971242 * L_15 = (Action_1_t3270971242 *)il2cpp_codegen_object_new(Action_1_t3270971242_il2cpp_TypeInfo_var);
		Action_1__ctor_m3347797990(L_15, __this, (intptr_t)L_14, /*hidden argument*/Action_1__ctor_m3347797990_RuntimeMethod_var);
		NullCheck(L_13);
		GestureRecognizer_remove_NavigationCanceled_m1841886029(L_13, L_15, /*hidden argument*/NULL);
		UIBehaviour_OnDestroy_m1613239498(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::UpdateInput()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput_UpdateInput_m3276086152 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_MouseEmulationMode_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0030;
		}
	}
	{
		float L_1 = __this->get_m_LastTapTime_10();
		HoloLensInputModule_t3599952490 * L_2 = __this->get_m_Module_11();
		NullCheck(L_2);
		float L_3 = HoloLensInputModule_get_timeToPressOnTap_m2760646233(L_2, /*hidden argument*/NULL);
		float L_4 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_add((float)L_1, (float)L_3))) < ((float)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		__this->set_m_MouseEmulationMode_6(0);
	}

IL_0030:
	{
		bool L_5 = __this->get_m_IsEmulatedMouseDownCurr_4();
		__this->set_m_IsEmulatedMouseDownPrev_5(L_5);
		int32_t L_6 = __this->get_m_MouseEmulationMode_6();
		__this->set_m_IsEmulatedMouseDownCurr_4((bool)((((int32_t)((((int32_t)L_6) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::AllowDrag()
extern "C" IL2CPP_METHOD_ATTR bool HoloLensInput_AllowDrag_m2531001270 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_MouseEmulationMode_6();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::TryGetAnchorWorldSpace(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool HoloLensInput_TryGetAnchorWorldSpace_m3603888745 (HoloLensInput_t4157575750 * __this, Vector3_t3722313464 * ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_TryGetAnchorWorldSpace_m3603888745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	bool V_1 = false;
	RectTransform_t3704657025 * V_2 = NULL;
	{
		HoloLensInputModule_t3599952490 * L_0 = __this->get_m_Module_11();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = HoloLensInputModule_Internal_GetCurrentFocusedGameObject_m2430273228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Vector3_t3722313464 * L_4 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_4 = L_5;
		V_1 = (bool)0;
		goto IL_0069;
	}

IL_002c:
	{
		GameObject_t1113636619 * L_6 = V_0;
		NullCheck(L_6);
		RectTransform_t3704657025 * L_7 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		V_2 = L_7;
		RectTransform_t3704657025 * L_8 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		Vector3_t3722313464 * L_10 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_10 = L_11;
		V_1 = (bool)0;
		goto IL_0069;
	}

IL_0052:
	{
		RectTransform_t3704657025 * L_12 = V_2;
		Vector2_t2156229523  L_13 = HoloLensInput_GetGazeScreenPosition_m3716061908(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t4157153871 * L_14 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_15 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		bool L_16 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m1761902807(NULL /*static, unused*/, L_12, L_13, L_14, (Vector3_t3722313464 *)L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0069;
	}

IL_0069:
	{
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::GestureHandler_OnTapped(UnityEngine.XR.WSA.Input.TappedEventArgs)
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput_GestureHandler_OnTapped_m3280423155 (HoloLensInput_t4157575750 * __this, TappedEventArgs_t2729789400  ___eventArgs0, const RuntimeMethod* method)
{
	{
		HoloLensInputModule_t3599952490 * L_0 = __this->get_m_Module_11();
		NullCheck(L_0);
		HoloLensInputModule_Internal_GestureNotifier_m4248145545(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_1 = __this->get_address_of_m_TapAnchorWorldSpace_9();
		bool L_2 = HoloLensInput_TryGetAnchorWorldSpace_m3603888745(__this, (Vector3_t3722313464 *)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0034;
	}

IL_0022:
	{
		__this->set_m_MouseEmulationMode_6(2);
		float L_3 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_LastTapTime_10(L_3);
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::GestureHandler_OnNavigationStarted(UnityEngine.XR.WSA.Input.NavigationStartedEventArgs)
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput_GestureHandler_OnNavigationStarted_m4120052574 (HoloLensInput_t4157575750 * __this, NavigationStartedEventArgs_t3372289616  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_GestureHandler_OnNavigationStarted_m4120052574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HoloLensInputModule_t3599952490 * L_0 = __this->get_m_Module_11();
		NullCheck(L_0);
		HoloLensInputModule_Internal_GestureNotifier_m4248145545(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_1 = __this->get_address_of_m_NavigationAnchorWorldSpace_8();
		bool L_2 = HoloLensInput_TryGetAnchorWorldSpace_m3603888745(__this, (Vector3_t3722313464 *)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0034;
	}

IL_0022:
	{
		__this->set_m_MouseEmulationMode_6(1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_NavigationNormalizedOffset_7(L_3);
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::GestureHandler_OnNavigationUpdated(UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs)
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput_GestureHandler_OnNavigationUpdated_m3726276814 (HoloLensInput_t4157575750 * __this, NavigationUpdatedEventArgs_t984051242  ___eventArgs0, const RuntimeMethod* method)
{
	{
		HoloLensInputModule_t3599952490 * L_0 = __this->get_m_Module_11();
		NullCheck(L_0);
		HoloLensInputModule_Internal_GestureNotifier_m4248145545(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = NavigationUpdatedEventArgs_get_normalizedOffset_m614681949((NavigationUpdatedEventArgs_t984051242 *)(&___eventArgs0), /*hidden argument*/NULL);
		__this->set_m_NavigationNormalizedOffset_7(L_1);
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::GestureHandler_OnNavigationCompleted(UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs)
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput_GestureHandler_OnNavigationCompleted_m4038163504 (HoloLensInput_t4157575750 * __this, NavigationCompletedEventArgs_t169294268  ___eventArgs0, const RuntimeMethod* method)
{
	{
		HoloLensInput_OnNavigationCompletedOrCanceled_m1485381899(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::GestureHandler_OnNavigationCanceled(UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs)
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput_GestureHandler_OnNavigationCanceled_m4190221622 (HoloLensInput_t4157575750 * __this, NavigationCanceledEventArgs_t3098503647  ___eventArgs0, const RuntimeMethod* method)
{
	{
		HoloLensInput_OnNavigationCompletedOrCanceled_m1485381899(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::OnNavigationCompletedOrCanceled()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInput_OnNavigationCompletedOrCanceled_m1485381899 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_OnNavigationCompletedOrCanceled_m1485381899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HoloLensInputModule_t3599952490 * L_0 = __this->get_m_Module_11();
		NullCheck(L_0);
		HoloLensInputModule_Internal_GestureNotifier_m4248145545(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_NavigationNormalizedOffset_7(L_1);
		__this->set_m_MouseEmulationMode_6(0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGazeScreenPosition()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  HoloLensInput_GetGazeScreenPosition_m3716061908 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), ((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_0))))), ((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_1))))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0024;
	}

IL_0024:
	{
		Vector2_t2156229523  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::EmulateMousePosition(UnityEngine.Vector3,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  HoloLensInput_EmulateMousePosition_m4159836491 (HoloLensInput_t4157575750 * __this, Vector3_t3722313464  ___anchorWorldspace0, Vector2_t2156229523  ___finalOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_EmulateMousePosition_m4159836491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = ___anchorWorldspace0;
		NullCheck(L_0);
		Vector3_t3722313464  L_2 = Camera_WorldToScreenPoint_m3726311023(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_t2156229523  L_4 = V_0;
		Vector2_t2156229523  L_5 = ___finalOffset1;
		Vector2_t2156229523  L_6 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		Vector2_t2156229523  L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGazeAndGestureScreenPosition()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  HoloLensInput_GetGazeAndGestureScreenPosition_m2931287743 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_GetGazeAndGestureScreenPosition_m2931287743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_m_MouseEmulationMode_6();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_006f;
	}

IL_001b:
	{
		Vector3_t3722313464  L_3 = __this->get_m_NavigationAnchorWorldSpace_8();
		HoloLensInputModule_t3599952490 * L_4 = __this->get_m_Module_11();
		NullCheck(L_4);
		float L_5 = HoloLensInputModule_get_normalizedNavigationToScreenOffsetScalar_m2747580876(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_6 = __this->get_address_of_m_NavigationNormalizedOffset_7();
		float L_7 = L_6->get_x_2();
		Vector3_t3722313464 * L_8 = __this->get_address_of_m_NavigationNormalizedOffset_7();
		float L_9 = L_8->get_y_3();
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), L_7, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_11 = Vector2_op_Multiply_m3294489634(NULL /*static, unused*/, L_5, L_10, /*hidden argument*/NULL);
		Vector2_t2156229523  L_12 = HoloLensInput_EmulateMousePosition_m4159836491(__this, L_3, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_007a;
	}

IL_0058:
	{
		Vector3_t3722313464  L_13 = __this->get_m_TapAnchorWorldSpace_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_14 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_15 = HoloLensInput_EmulateMousePosition_m4159836491(__this, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_007a;
	}

IL_006f:
	{
		Vector2_t2156229523  L_16 = HoloLensInput_GetGazeScreenPosition_m3716061908(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_007a;
	}

IL_007a:
	{
		Vector2_t2156229523  L_17 = V_1;
		return L_17;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGestureScrollDelta()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  HoloLensInput_GetGestureScrollDelta_m4045976453 (HoloLensInput_t4157575750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_GetGestureScrollDelta_m4045976453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->get_m_MouseEmulationMode_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		Vector3_t3722313464 * L_1 = __this->get_address_of_m_NavigationNormalizedOffset_7();
		float L_2 = L_1->get_z_4();
		Vector2_t2156229523  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3970636864((&L_3), (0.0f), L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_002c:
	{
		V_0 = G_B3_0;
		goto IL_0032;
	}

IL_0032:
	{
		Vector2_t2156229523  L_5 = V_0;
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
// System.Void UnityEngine.EventSystems.HoloLensInputModule::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInputModule__ctor_m3860011851 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_NormalizedNavigationToScreenOffsetScalar_30((500.0f));
		__this->set_m_TimeToPressOnTap_31((0.3f));
		__this->set_m_HasBeenActivated_33((bool)0);
		__this->set_m_HasGestureToProcess_34((bool)0);
		StandaloneInputModule__ctor_m2419721820(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.EventSystems.HoloLensInputModule::get_normalizedNavigationToScreenOffsetScalar()
extern "C" IL2CPP_METHOD_ATTR float HoloLensInputModule_get_normalizedNavigationToScreenOffsetScalar_m2747580876 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_NormalizedNavigationToScreenOffsetScalar_30();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::set_normalizedNavigationToScreenOffsetScalar(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HoloLensInputModule_set_normalizedNavigationToScreenOffsetScalar_m2932404404 (HoloLensInputModule_t3599952490 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_NormalizedNavigationToScreenOffsetScalar_30(L_0);
		return;
	}
}
// System.Single UnityEngine.EventSystems.HoloLensInputModule::get_timeToPressOnTap()
extern "C" IL2CPP_METHOD_ATTR float HoloLensInputModule_get_timeToPressOnTap_m2760646233 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_TimeToPressOnTap_31();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::set_timeToPressOnTap(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HoloLensInputModule_set_timeToPressOnTap_m3287972605 (HoloLensInputModule_t3599952490 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_TimeToPressOnTap_31(L_0);
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::Awake()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInputModule_Awake_m1201948299 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInputModule_Awake_m1201948299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UIBehaviour_Awake_m2366095154(__this, /*hidden argument*/NULL);
		HoloLensInput_t4157575750 * L_0 = Component_GetComponent_TisHoloLensInput_t4157575750_m2391789968(__this, /*hidden argument*/Component_GetComponent_TisHoloLensInput_t4157575750_m2391789968_RuntimeMethod_var);
		__this->set_m_HoloLensInput_32(L_0);
		HoloLensInput_t4157575750 * L_1 = __this->get_m_HoloLensInput_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		HoloLensInput_t4157575750 * L_4 = GameObject_AddComponent_TisHoloLensInput_t4157575750_m1267438782(L_3, /*hidden argument*/GameObject_AddComponent_TisHoloLensInput_t4157575750_m1267438782_RuntimeMethod_var);
		__this->set_m_HoloLensInput_32(L_4);
	}

IL_0034:
	{
		HoloLensInput_t4157575750 * L_5 = __this->get_m_HoloLensInput_32();
		((BaseInputModule_t2019268878 *)__this)->set_m_InputOverride_8(L_5);
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInputModule::IsModuleSupported()
extern "C" IL2CPP_METHOD_ATTR bool HoloLensInputModule_IsModuleSupported_m195902423 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInputModule_IsModuleSupported_m195902423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = StandaloneInputModule_IsModuleSupported_m2880633224(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = XRSettings_get_loadedDeviceName_m2020127682(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = String_Equals_m1744302937(NULL /*static, unused*/, L_1, _stringLiteral1601630912, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInputModule::ShouldActivateModule()
extern "C" IL2CPP_METHOD_ATTR bool HoloLensInputModule_ShouldActivateModule_m2961503482 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		bool L_0 = StandaloneInputModule_get_forceModuleActive_m3500597849(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->get_m_HasGestureToProcess_34();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		bool L_2 = __this->get_m_HasBeenActivated_33();
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 1;
	}

IL_0023:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0029;
	}

IL_0029:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::ActivateModule()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInputModule_ActivateModule_m1458223221 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_HasBeenActivated_33((bool)1);
		StandaloneInputModule_ActivateModule_m2232892298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::UpdateModule()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInputModule_UpdateModule_m1826027724 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	{
		HoloLensInput_t4157575750 * L_0 = __this->get_m_HoloLensInput_32();
		NullCheck(L_0);
		HoloLensInput_UpdateInput_m3276086152(L_0, /*hidden argument*/NULL);
		StandaloneInputModule_UpdateModule_m450861257(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void HoloLensInputModule_ProcessDrag_m3801212445 (HoloLensInputModule_t3599952490 * __this, PointerEventData_t3807901092 * ___pointerEvent0, const RuntimeMethod* method)
{
	{
		HoloLensInput_t4157575750 * L_0 = __this->get_m_HoloLensInput_32();
		NullCheck(L_0);
		bool L_1 = HoloLensInput_AllowDrag_m2531001270(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		PointerEventData_t3807901092 * L_2 = ___pointerEvent0;
		PointerInputModule_ProcessDrag_m1341573435(__this, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.HoloLensInputModule::Internal_GetCurrentFocusedGameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * HoloLensInputModule_Internal_GetCurrentFocusedGameObject_m2430273228 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = StandaloneInputModule_GetCurrentFocusedGameObject_m2194131683(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GameObject_t1113636619 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::Internal_GestureNotifier()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInputModule_Internal_GestureNotifier_m4248145545 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_HasGestureToProcess_34((bool)1);
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::HoloLensInput_GestureNotifier()
extern "C" IL2CPP_METHOD_ATTR void HoloLensInputModule_HoloLensInput_GestureNotifier_m2886727957 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.HoloLensInputModule::HoloLensInput_GetEventSystem()
extern "C" IL2CPP_METHOD_ATTR EventSystem_t1003666588 * HoloLensInputModule_HoloLensInput_GetEventSystem_m642674056 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	EventSystem_t1003666588 * V_0 = NULL;
	{
		EventSystem_t1003666588 * L_0 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		EventSystem_t1003666588 * L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.EventSystems.HoloLensInputModule::HoloLensInput_GetScreenOffsetScalar()
extern "C" IL2CPP_METHOD_ATTR float HoloLensInputModule_HoloLensInput_GetScreenOffsetScalar_m3750260014 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = HoloLensInputModule_get_normalizedNavigationToScreenOffsetScalar_m2747580876(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.EventSystems.HoloLensInputModule::HoloLensInput_GetTimeToPressOnTap()
extern "C" IL2CPP_METHOD_ATTR float HoloLensInputModule_HoloLensInput_GetTimeToPressOnTap_m4110197182 (HoloLensInputModule_t3599952490 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = HoloLensInputModule_get_timeToPressOnTap_m2760646233(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
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
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase__ctor_m3608052931 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase__ctor_m3608052931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceData_t200825419  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		__this->set_m_FreezeUpdates_8((bool)0);
		__this->set_m_VolumeType_9(1);
		__this->set_m_SphereRadius_10((2.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_0, (4.0f), /*hidden argument*/NULL);
		__this->set_m_HalfBoxExtents_11(L_1);
		__this->set_m_LodType_12(1);
		__this->set_m_NumUpdatesBeforeRemoval_13(((int32_t)10));
		__this->set_m_SecondsBetweenUpdates_14((2.5f));
		__this->set_m_BakePhysics_15((bool)0);
		Dictionary_2_t2943126845 * L_2 = (Dictionary_2_t2943126845 *)il2cpp_codegen_object_new(Dictionary_2_t2943126845_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3933169253(L_2, /*hidden argument*/Dictionary_2__ctor_m3933169253_RuntimeMethod_var);
		__this->set_m_PendingSurfacesForEviction_23(L_2);
		List_1_t128053199 * L_3 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1204004817(L_3, /*hidden argument*/List_1__ctor_m1204004817_RuntimeMethod_var);
		__this->set_m_SurfacesToRemoveFromDict_24(L_3);
		__this->set_m_SurfaceParentWasDynamicallyCreated_25((bool)0);
		il2cpp_codegen_initobj((&V_0), sizeof(SurfaceData_t200825419 ));
		SurfaceData_t200825419  L_4 = V_0;
		__this->set_bestSurfaceDataNull_27(L_4);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * SpatialMappingBase_get_surfaceParent_m2921944919 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_m_SurfaceParent_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GameObject_t1113636619 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParent(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParent_m2781619170 (SpatialMappingBase_t1565881417 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___value0;
		__this->set_m_SurfaceParent_7(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_freezeUpdates()
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_freezeUpdates_m3541631440 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_FreezeUpdates_8();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_freezeUpdates(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_freezeUpdates_m2498319217 (SpatialMappingBase_t1565881417 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_FreezeUpdates_8(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase/VolumeType UnityEngine.XR.WSA.SpatialMappingBase::get_volumeType()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_volumeType_m68629827 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_VolumeType_9();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_volumeType(UnityEngine.XR.WSA.SpatialMappingBase/VolumeType)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_volumeType_m507530622 (SpatialMappingBase_t1565881417 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_VolumeType_9(L_0);
		return;
	}
}
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_sphereRadius()
extern "C" IL2CPP_METHOD_ATTR float SpatialMappingBase_get_sphereRadius_m2108285469 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_SphereRadius_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_sphereRadius(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_sphereRadius_m2675230551 (SpatialMappingBase_t1565881417 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_SphereRadius_10(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_halfBoxExtents()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  SpatialMappingBase_get_halfBoxExtents_m2701254627 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_HalfBoxExtents_11();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_halfBoxExtents(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_halfBoxExtents_m2287182654 (SpatialMappingBase_t1565881417 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_m_HalfBoxExtents_11(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase/LODType UnityEngine.XR.WSA.SpatialMappingBase::get_lodType()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_lodType_m3008284673 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_LodType_12();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_lodType(UnityEngine.XR.WSA.SpatialMappingBase/LODType)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_lodType_m247952560 (SpatialMappingBase_t1565881417 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_LodType_12(L_0);
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_numUpdatesBeforeRemoval()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_numUpdatesBeforeRemoval_m1861592450 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_NumUpdatesBeforeRemoval_13();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_numUpdatesBeforeRemoval(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_numUpdatesBeforeRemoval_m1294716367 (SpatialMappingBase_t1565881417 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_NumUpdatesBeforeRemoval_13(L_0);
		return;
	}
}
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_secondsBetweenUpdates()
extern "C" IL2CPP_METHOD_ATTR float SpatialMappingBase_get_secondsBetweenUpdates_m1560615971 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_SecondsBetweenUpdates_14();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_secondsBetweenUpdates(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_secondsBetweenUpdates_m1923132398 (SpatialMappingBase_t1565881417 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_SecondsBetweenUpdates_14(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_bakePhysics()
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_bakePhysics_m3582877037 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_BakePhysics_15();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bakePhysics(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bakePhysics_m3587048758 (SpatialMappingBase_t1565881417 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_BakePhysics_15(L_0);
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_observerId()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_observerId_m311309638 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CobserverIdU3Ek__BackingField_16();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_observerId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_observerId_m4165439406 (SpatialMappingBase_t1565881417 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CobserverIdU3Ek__BackingField_16(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObserver()
extern "C" IL2CPP_METHOD_ATTR SurfaceObserver_t1930409633 * SpatialMappingBase_get_surfaceObserver_m2593881494 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	SurfaceObserver_t1930409633 * V_0 = NULL;
	{
		SurfaceObserver_t1930409633 * L_0 = __this->get_U3CsurfaceObserverU3Ek__BackingField_17();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		SurfaceObserver_t1930409633 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObserver(UnityEngine.XR.WSA.SurfaceObserver)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObserver_m1104502479 (SpatialMappingBase_t1565881417 * __this, SurfaceObserver_t1930409633 * ___value0, const RuntimeMethod* method)
{
	{
		SurfaceObserver_t1930409633 * L_0 = ___value0;
		__this->set_U3CsurfaceObserverU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObjects()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2943126845 * SpatialMappingBase_get_surfaceObjects_m4219327713 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t2943126845 * V_0 = NULL;
	{
		Dictionary_2_t2943126845 * L_0 = __this->get_U3CsurfaceObjectsU3Ek__BackingField_18();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Dictionary_2_t2943126845 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObjects(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObjects_m311615174 (SpatialMappingBase_t1565881417 * __this, Dictionary_2_t2943126845 * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t2943126845 * L_0 = ___value0;
		__this->set_U3CsurfaceObjectsU3Ek__BackingField_18(L_0);
		return;
	}
}
// UnityEngine.Bounds UnityEngine.XR.WSA.SpatialMappingBase::get_bounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_t2266837910  SpatialMappingBase_get_bounds_m3134789507 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	Bounds_t2266837910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Bounds_t2266837910  L_0 = __this->get_U3CboundsU3Ek__BackingField_19();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Bounds_t2266837910  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bounds(UnityEngine.Bounds)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bounds_m92900639 (SpatialMappingBase_t1565881417 * __this, Bounds_t2266837910  ___value0, const RuntimeMethod* method)
{
	{
		Bounds_t2266837910  L_0 = ___value0;
		__this->set_U3CboundsU3Ek__BackingField_19(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_lastUpdatedObserverPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  SpatialMappingBase_get_lastUpdatedObserverPosition_m2010441697 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_U3ClastUpdatedObserverPositionU3Ek__BackingField_20();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_lastUpdatedObserverPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_lastUpdatedObserverPosition_m2622840791 (SpatialMappingBase_t1565881417 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3ClastUpdatedObserverPositionU3Ek__BackingField_20(L_0);
		return;
	}
}
// UnityEngine.Camera UnityEngine.XR.WSA.SpatialMappingBase::get_selectedCamera()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * SpatialMappingBase_get_selectedCamera_m3580988241 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	Camera_t4157153871 * V_0 = NULL;
	{
		Camera_t4157153871 * L_0 = __this->get_U3CselectedCameraU3Ek__BackingField_21();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Camera_t4157153871 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_selectedCamera(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_selectedCamera_m4006794900 (SpatialMappingBase_t1565881417 * __this, Camera_t4157153871 * ___value0, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = ___value0;
		__this->set_U3CselectedCameraU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_nextSurfaceChangeUpdateTime()
extern "C" IL2CPP_METHOD_ATTR float SpatialMappingBase_get_nextSurfaceChangeUpdateTime_m2221532507 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_nextSurfaceChangeUpdateTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m3031625415 (SpatialMappingBase_t1565881417 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_pendingSurfacesForEviction()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2943126845 * SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t2943126845 * V_0 = NULL;
	{
		Dictionary_2_t2943126845 * L_0 = __this->get_m_PendingSurfacesForEviction_23();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Dictionary_2_t2943126845 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_pendingSurfacesForEviction(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_pendingSurfacesForEviction_m3930070920 (SpatialMappingBase_t1565881417 * __this, Dictionary_2_t2943126845 * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t2943126845 * L_0 = ___value0;
		__this->set_m_PendingSurfacesForEviction_23(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.WSA.SpatialMappingBase::get_surfacesToRemoveFromDict()
extern "C" IL2CPP_METHOD_ATTR List_1_t128053199 * SpatialMappingBase_get_surfacesToRemoveFromDict_m3794671202 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	List_1_t128053199 * V_0 = NULL;
	{
		List_1_t128053199 * L_0 = __this->get_m_SurfacesToRemoveFromDict_24();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		List_1_t128053199 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfacesToRemoveFromDict(System.Collections.Generic.List`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfacesToRemoveFromDict_m2218099771 (SpatialMappingBase_t1565881417 * __this, List_1_t128053199 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t128053199 * L_0 = ___value0;
		__this->set_m_SurfacesToRemoveFromDict_24(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParentWasDynamicallyCreated()
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_surfaceParentWasDynamicallyCreated_m4140374276 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_SurfaceParentWasDynamicallyCreated_25();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParentWasDynamicallyCreated(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParentWasDynamicallyCreated_m3990611021 (SpatialMappingBase_t1565881417 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_SurfaceParentWasDynamicallyCreated_25(L_0);
		return;
	}
}
// System.Int32[] UnityEngine.XR.WSA.SpatialMappingBase::get_lodToPcm()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* SpatialMappingBase_get_lodToPcm_m1331271856 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_get_lodToPcm_m1331271856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_0 = ((SpatialMappingBase_t1565881417_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var))->get_s_LodToPcm_26();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Int32U5BU5D_t385246372* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase/LODType UnityEngine.XR.WSA.SpatialMappingBase::GetLODFromTPCM(System.Double)
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_GetLODFromTPCM_m2017509555 (RuntimeObject * __this /* static, unused */, double ___trianglesPerCubicMeter0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		double L_0 = ___trianglesPerCubicMeter0;
		if ((!(((double)L_0) >= ((double)(1999.0)))))
		{
			goto IL_0018;
		}
	}
	{
		V_0 = 0;
		goto IL_0045;
	}

IL_0018:
	{
		double L_1 = ___trianglesPerCubicMeter0;
		if ((!(((double)L_1) >= ((double)(749.0)))))
		{
			goto IL_003e;
		}
	}
	{
		double L_2 = ___trianglesPerCubicMeter0;
		if ((!(((double)L_2) <= ((double)(751.0)))))
		{
			goto IL_003e;
		}
	}
	{
		V_0 = 1;
		goto IL_0045;
	}

IL_003e:
	{
		V_0 = 2;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Awake()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_Awake_m3415035952 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Start()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_Start_m2201571065 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_Start_m2201571065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SpatialMappingBase_t1565881417_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var))->get_s_ObserverIdCounter_6();
		int32_t L_1 = L_0;
		((SpatialMappingBase_t1565881417_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var))->set_s_ObserverIdCounter_6(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		SpatialMappingBase_set_observerId_m4165439406(__this, L_1, /*hidden argument*/NULL);
		Dictionary_2_t2943126845 * L_2 = (Dictionary_2_t2943126845 *)il2cpp_codegen_object_new(Dictionary_2_t2943126845_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3933169253(L_2, /*hidden argument*/Dictionary_2__ctor_m3933169253_RuntimeMethod_var);
		SpatialMappingBase_set_surfaceObjects_m311615174(__this, L_2, /*hidden argument*/NULL);
		Camera_t4157153871 * L_3 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		SpatialMappingBase_set_selectedCamera_m4006794900(__this, L_3, /*hidden argument*/NULL);
		SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m3031625415(__this, (-std::numeric_limits<float>::max()), /*hidden argument*/NULL);
		SurfaceObserver_t1930409633 * L_4 = (SurfaceObserver_t1930409633 *)il2cpp_codegen_object_new(SurfaceObserver_t1930409633_il2cpp_TypeInfo_var);
		SurfaceObserver__ctor_m1882911206(L_4, /*hidden argument*/NULL);
		SpatialMappingBase_set_surfaceObserver_m1104502479(__this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_t1697439830_il2cpp_TypeInfo_var);
		SpatialMappingContext_t1697439830 * L_5 = SpatialMappingContext_get_Instance_m527477890(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_6 = (intptr_t)GetVirtualMethodInfo(__this, 12);
		SurfaceDataReadyCallback_t2457228298 * L_7 = (SurfaceDataReadyCallback_t2457228298 *)il2cpp_codegen_object_new(SurfaceDataReadyCallback_t2457228298_il2cpp_TypeInfo_var);
		SurfaceDataReadyCallback__ctor_m953033282(L_7, __this, (intptr_t)L_6, /*hidden argument*/NULL);
		intptr_t L_8 = (intptr_t)GetVirtualMethodInfo(__this, 14);
		GetHighestPriorityCallback_t3420804231 * L_9 = (GetHighestPriorityCallback_t3420804231 *)il2cpp_codegen_object_new(GetHighestPriorityCallback_t3420804231_il2cpp_TypeInfo_var);
		GetHighestPriorityCallback__ctor_m1422064434(L_9, __this, (intptr_t)L_8, /*hidden argument*/NULL);
		SurfaceObserver_t1930409633 * L_10 = SpatialMappingBase_get_surfaceObserver_m2593881494(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		SpatialMappingContext_RegisterComponent_m1382065901(L_5, __this, L_7, L_9, L_10, /*hidden argument*/NULL);
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = SpatialMappingBase_get_halfBoxExtents_m2701254627(__this, /*hidden argument*/NULL);
		Bounds_t2266837910  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Bounds__ctor_m1937678907((&L_14), L_12, L_13, /*hidden argument*/NULL);
		SpatialMappingBase_set_bounds_m92900639(__this, L_14, /*hidden argument*/NULL);
		SpatialMappingBase_UpdatePosition_m1218108679(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnEnable_m46936215 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnEnable_m46936215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t1045831716  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t602342324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	KeyValuePair_2_t1045831716  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t602342324  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2943126845 * L_0 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		Dictionary_2_t2943126845 * L_1 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m3196174006(L_1, /*hidden argument*/Dictionary_2_get_Count_m3196174006_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		Dictionary_2_t2943126845 * L_3 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_t602342324  L_4 = Dictionary_2_GetEnumerator_m1270273418(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0030:
		{
			KeyValuePair_2_t1045831716  L_5 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_0 = L_5;
			Surface_t4054413514 * L_6 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_6);
			GameObject_t1113636619 * L_7 = Surface_get_gameObject_m1222724741(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0064;
			}
		}

IL_0050:
		{
			Surface_t4054413514 * L_9 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_9);
			GameObject_t1113636619 * L_10 = Surface_get_gameObject_m1222724741(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			GameObject_SetActive_m796801857(L_10, (bool)1, /*hidden argument*/NULL);
		}

IL_0064:
		{
		}

IL_0065:
		{
			bool L_11 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0030;
			}
		}

IL_0071:
		{
			IL2CPP_LEAVE(0x84, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0084:
	{
	}

IL_0085:
	{
		Dictionary_2_t2943126845 * L_12 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0128;
		}
	}
	{
		Dictionary_2_t2943126845 * L_13 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = Dictionary_2_get_Count_m3196174006(L_13, /*hidden argument*/Dictionary_2_get_Count_m3196174006_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0128;
		}
	}
	{
		Dictionary_2_t2943126845 * L_15 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Enumerator_t602342324  L_16 = Dictionary_2_GetEnumerator_m1270273418(L_15, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_3 = L_16;
	}

IL_00af:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0108;
		}

IL_00b4:
		{
			KeyValuePair_2_t1045831716  L_17 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_2 = L_17;
			Surface_t4054413514 * L_18 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_18);
			GameObject_t1113636619 * L_19 = Surface_get_gameObject_m1222724741(L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_20 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00f5;
			}
		}

IL_00d4:
		{
			int32_t L_21 = KeyValuePair_2_get_Key_m3348634344((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m3348634344_RuntimeMethod_var);
			int32_t L_22 = L_21;
			RuntimeObject * L_23 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_22);
			String_t* L_24 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3913530819, L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			goto IL_0108;
		}

IL_00f5:
		{
			Surface_t4054413514 * L_25 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_25);
			GameObject_t1113636619 * L_26 = Surface_get_gameObject_m1222724741(L_25, /*hidden argument*/NULL);
			NullCheck(L_26);
			GameObject_SetActive_m796801857(L_26, (bool)1, /*hidden argument*/NULL);
		}

IL_0108:
		{
			bool L_27 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_00b4;
			}
		}

IL_0114:
		{
			IL2CPP_LEAVE(0x127, FINALLY_0119);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0119;
	}

FINALLY_0119:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(281)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(281)
	{
		IL2CPP_JUMP_TBL(0x127, IL_0127)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0127:
	{
	}

IL_0128:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDisable_m3062484944 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnDisable_m3062484944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t1045831716  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t602342324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	KeyValuePair_2_t1045831716  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t602342324  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2943126845 * L_0 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		Dictionary_2_t2943126845 * L_1 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m3196174006(L_1, /*hidden argument*/Dictionary_2_get_Count_m3196174006_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		Dictionary_2_t2943126845 * L_3 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_t602342324  L_4 = Dictionary_2_GetEnumerator_m1270273418(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0030:
		{
			KeyValuePair_2_t1045831716  L_5 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_0 = L_5;
			Surface_t4054413514 * L_6 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_6);
			GameObject_t1113636619 * L_7 = Surface_get_gameObject_m1222724741(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0064;
			}
		}

IL_0050:
		{
			Surface_t4054413514 * L_9 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_9);
			GameObject_t1113636619 * L_10 = Surface_get_gameObject_m1222724741(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			GameObject_SetActive_m796801857(L_10, (bool)0, /*hidden argument*/NULL);
		}

IL_0064:
		{
		}

IL_0065:
		{
			bool L_11 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0030;
			}
		}

IL_0071:
		{
			IL2CPP_LEAVE(0x84, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0084:
	{
	}

IL_0085:
	{
		Dictionary_2_t2943126845 * L_12 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_010d;
		}
	}
	{
		Dictionary_2_t2943126845 * L_13 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = Dictionary_2_get_Count_m3196174006(L_13, /*hidden argument*/Dictionary_2_get_Count_m3196174006_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		Dictionary_2_t2943126845 * L_15 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Enumerator_t602342324  L_16 = Dictionary_2_GetEnumerator_m1270273418(L_15, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_3 = L_16;
	}

IL_00af:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ed;
		}

IL_00b4:
		{
			KeyValuePair_2_t1045831716  L_17 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_2 = L_17;
			Surface_t4054413514 * L_18 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_18);
			GameObject_t1113636619 * L_19 = Surface_get_gameObject_m1222724741(L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_20 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00da;
			}
		}

IL_00d4:
		{
			goto IL_00ed;
		}

IL_00da:
		{
			Surface_t4054413514 * L_21 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_21);
			GameObject_t1113636619 * L_22 = Surface_get_gameObject_m1222724741(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			GameObject_SetActive_m796801857(L_22, (bool)0, /*hidden argument*/NULL);
		}

IL_00ed:
		{
			bool L_23 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_00b4;
			}
		}

IL_00f9:
		{
			IL2CPP_LEAVE(0x10C, FINALLY_00fe);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fe;
	}

FINALLY_00fe:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(254)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(254)
	{
		IL2CPP_JUMP_TBL(0x10C, IL_010c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_010c:
	{
	}

IL_010d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDestroy_m3399831572 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnDestroy_m3399831572_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t1045831716  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t602342324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	KeyValuePair_2_t1045831716  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t602342324  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_t1697439830_il2cpp_TypeInfo_var);
		SpatialMappingContext_t1697439830 * L_0 = SpatialMappingContext_get_Instance_m527477890(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		SpatialMappingContext_DeregisterComponent_m2711223001(L_0, __this, /*hidden argument*/NULL);
		Dictionary_2_t2943126845 * L_1 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t2943126845 * L_2 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m3196174006(L_2, /*hidden argument*/Dictionary_2_get_Count_m3196174006_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t2943126845 * L_4 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Enumerator_t602342324  L_5 = Dictionary_2_GetEnumerator_m1270273418(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_003b:
		{
			KeyValuePair_2_t1045831716  L_6 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_0 = L_6;
			Surface_t4054413514 * L_7 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			VirtActionInvoker1< Surface_t4054413514 * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_7);
		}

IL_0052:
		{
			bool L_8 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_003b;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x71, IL_0071)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0071:
	{
		Dictionary_2_t2943126845 * L_9 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Dictionary_2_Clear_m1864584243(L_9, /*hidden argument*/Dictionary_2_Clear_m1864584243_RuntimeMethod_var);
	}

IL_007d:
	{
		Dictionary_2_t2943126845 * L_10 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_010b;
		}
	}
	{
		Dictionary_2_t2943126845 * L_11 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = Dictionary_2_get_Count_m3196174006(L_11, /*hidden argument*/Dictionary_2_get_Count_m3196174006_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_010b;
		}
	}
	{
		Dictionary_2_t2943126845 * L_13 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Enumerator_t602342324  L_14 = Dictionary_2_GetEnumerator_m1270273418(L_13, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_3 = L_14;
	}

IL_00a7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00e0;
		}

IL_00ac:
		{
			KeyValuePair_2_t1045831716  L_15 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_2 = L_15;
			Surface_t4054413514 * L_16 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_16);
			GameObject_t1113636619 * L_17 = Surface_get_gameObject_m1222724741(L_16, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_18 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_00d2;
			}
		}

IL_00cc:
		{
			goto IL_00e0;
		}

IL_00d2:
		{
			Surface_t4054413514 * L_19 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			VirtActionInvoker1< Surface_t4054413514 * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_19);
		}

IL_00e0:
		{
			bool L_20 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00ac;
			}
		}

IL_00ec:
		{
			IL2CPP_LEAVE(0xFF, FINALLY_00f1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f1;
	}

FINALLY_00f1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(241)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(241)
	{
		IL2CPP_JUMP_TBL(0xFF, IL_00ff)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ff:
	{
		Dictionary_2_t2943126845 * L_21 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Dictionary_2_Clear_m1864584243(L_21, /*hidden argument*/Dictionary_2_Clear_m1864584243_RuntimeMethod_var);
	}

IL_010b:
	{
		bool L_22 = SpatialMappingBase_get_surfaceParentWasDynamicallyCreated_m4140374276(__this, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_012a;
		}
	}
	{
		GameObject_t1113636619 * L_23 = SpatialMappingBase_get_surfaceParent_m2921944919(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		SpatialMappingBase_set_surfaceParent_m2781619170(__this, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
	}

IL_012a:
	{
		SurfaceObserver_t1930409633 * L_24 = SpatialMappingBase_get_surfaceObserver_m2593881494(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		SurfaceObserver_Dispose_m3692775015(L_24, /*hidden argument*/NULL);
		SpatialMappingBase_set_surfaceObserver_m1104502479(__this, (SurfaceObserver_t1930409633 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Update()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_Update_m3308418223 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_Update_m3308418223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = SpatialMappingBase_get_lastUpdatedObserverPosition_m2010441697(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		float L_4 = Vector3_SqrMagnitude_m3025115945(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var);
		float L_5 = ((SpatialMappingBase_t1565881417_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var))->get_s_MovementUpdateThresholdSqr_4();
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_002e;
		}
	}
	{
		SpatialMappingBase_UpdatePosition_m1218108679(__this, /*hidden argument*/NULL);
	}

IL_002e:
	{
		bool L_6 = SpatialMappingBase_get_freezeUpdates_m3541631440(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0086;
		}
	}
	{
		float L_7 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = SpatialMappingBase_get_nextSurfaceChangeUpdateTime_m2221532507(__this, /*hidden argument*/NULL);
		if ((!(((float)L_7) >= ((float)L_8))))
		{
			goto IL_0085;
		}
	}
	{
		SurfaceObserver_t1930409633 * L_9 = SpatialMappingBase_get_surfaceObserver_m2593881494(__this, /*hidden argument*/NULL);
		intptr_t L_10 = (intptr_t)SpatialMappingBase_OnSurfaceChanged_m3121177166_RuntimeMethod_var;
		SurfaceChangedDelegate_t2591813092 * L_11 = (SurfaceChangedDelegate_t2591813092 *)il2cpp_codegen_object_new(SurfaceChangedDelegate_t2591813092_il2cpp_TypeInfo_var);
		SurfaceChangedDelegate__ctor_m2596031620(L_11, __this, (intptr_t)L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		SurfaceObserver_Update_m722573683(L_9, L_11, /*hidden argument*/NULL);
		SpatialMappingBase_ProcessEvictedObjects_m1133365705(__this, /*hidden argument*/NULL);
		float L_12 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = SpatialMappingBase_get_secondsBetweenUpdates_m1560615971(__this, /*hidden argument*/NULL);
		SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m3031625415(__this, ((float)il2cpp_codegen_add((float)L_12, (float)L_13)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_t1697439830_il2cpp_TypeInfo_var);
		SpatialMappingContext_t1697439830 * L_14 = SpatialMappingContext_get_Instance_m527477890(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		SpatialMappingContext_ComponentHasDataRequests_m3294686077(L_14, /*hidden argument*/NULL);
	}

IL_0085:
	{
	}

IL_0086:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdatePosition()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdatePosition_m1218108679 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	Bounds_t2266837910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = SpatialMappingBase_get_volumeType_m68629827(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		SurfaceObserver_t1930409633 * L_1 = SpatialMappingBase_get_surfaceObserver_m2593881494(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		float L_4 = SpatialMappingBase_get_sphereRadius_m2108285469(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		SurfaceObserver_SetVolumeAsSphere_m2950597134(L_1, L_3, L_4, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_002f:
	{
		int32_t L_5 = SpatialMappingBase_get_volumeType_m68629827(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0086;
		}
	}
	{
		SurfaceObserver_t1930409633 * L_6 = SpatialMappingBase_get_surfaceObserver_m2593881494(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = SpatialMappingBase_get_halfBoxExtents_m2701254627(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		SurfaceObserver_SetVolumeAsAxisAlignedBox_m3933700684(L_6, L_8, L_9, /*hidden argument*/NULL);
		Bounds_t2266837910  L_10 = SpatialMappingBase_get_bounds_m3134789507(__this, /*hidden argument*/NULL);
		V_0 = L_10;
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		Bounds_set_center_m335768106((Bounds_t2266837910 *)(&V_0), L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = SpatialMappingBase_get_halfBoxExtents_m2701254627(__this, /*hidden argument*/NULL);
		Bounds_set_extents_m2537337060((Bounds_t2266837910 *)(&V_0), L_13, /*hidden argument*/NULL);
		Bounds_t2266837910  L_14 = V_0;
		SpatialMappingBase_set_bounds_m92900639(__this, L_14, /*hidden argument*/NULL);
	}

IL_0086:
	{
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		SpatialMappingBase_set_lastUpdatedObserverPosition_m2622840791(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnSurfaceChanged(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnSurfaceChanged_m3121177166 (SpatialMappingBase_t1565881417 * __this, SurfaceId_t2999094746  ___surfaceId0, int32_t ___changeType1, Bounds_t2266837910  ___bounds2, DateTime_t3738529785  ___updateTime3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___changeType1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_0018;
			}
			case 2:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_0038;
	}

IL_0018:
	{
		SurfaceId_t2999094746  L_1 = ___surfaceId0;
		DateTime_t3738529785  L_2 = ___updateTime3;
		bool L_3 = SpatialMappingBase_get_bakePhysics_m3582877037(__this, /*hidden argument*/NULL);
		SpatialMappingBase_OnAddOrUpdateSurface_m4264909164(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_002c:
	{
		SurfaceId_t2999094746  L_4 = ___surfaceId0;
		SpatialMappingBase_OnRemoveSurface_m2379226760(__this, L_4, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0038:
	{
		goto IL_003d;
	}

IL_003d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnAddOrUpdateSurface(UnityEngine.XR.WSA.SurfaceId,System.DateTime,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnAddOrUpdateSurface_m4264909164 (SpatialMappingBase_t1565881417 * __this, SurfaceId_t2999094746  ___surfaceId0, DateTime_t3738529785  ___updateTime1, bool ___bakePhysics2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnAddOrUpdateSurface_m4264909164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t4054413514 * V_0 = NULL;
	SurfaceData_t200825419  V_1;
	memset(&V_1, 0, sizeof(V_1));
	SurfaceData_t200825419  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (Surface_t4054413514 *)NULL;
		Dictionary_2_t2943126845 * L_0 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		int32_t L_1 = (&___surfaceId0)->get_handle_0();
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m2572687910(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m2572687910_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t2943126845 * L_3 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		int32_t L_4 = (&___surfaceId0)->get_handle_0();
		Dictionary_2_t2943126845 * L_5 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		int32_t L_6 = (&___surfaceId0)->get_handle_0();
		NullCheck(L_5);
		Surface_t4054413514 * L_7 = Dictionary_2_get_Item_m3334157318(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m3334157318_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_set_Item_m304484421(L_3, L_4, L_7, /*hidden argument*/Dictionary_2_set_Item_m304484421_RuntimeMethod_var);
		Dictionary_2_t2943126845 * L_8 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		int32_t L_9 = (&___surfaceId0)->get_handle_0();
		NullCheck(L_8);
		Dictionary_2_Remove_m2741774404(L_8, L_9, /*hidden argument*/Dictionary_2_Remove_m2741774404_RuntimeMethod_var);
		goto IL_009b;
	}

IL_0058:
	{
		Dictionary_2_t2943126845 * L_10 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		int32_t L_11 = (&___surfaceId0)->get_handle_0();
		NullCheck(L_10);
		bool L_12 = Dictionary_2_ContainsKey_m2572687910(L_10, L_11, /*hidden argument*/Dictionary_2_ContainsKey_m2572687910_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_009b;
		}
	}
	{
		SurfaceId_t2999094746  L_13 = ___surfaceId0;
		Surface_t4054413514 * L_14 = SpatialMappingBase_CreateSurface_m210883022(__this, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		Surface_t4054413514 * L_15 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(SurfaceData_t200825419 ));
		SurfaceData_t200825419  L_16 = V_1;
		NullCheck(L_15);
		Surface_set_surfaceData_m1874742482(L_15, L_16, /*hidden argument*/NULL);
		Dictionary_2_t2943126845 * L_17 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		int32_t L_18 = (&___surfaceId0)->get_handle_0();
		Surface_t4054413514 * L_19 = V_0;
		NullCheck(L_17);
		Dictionary_2_Add_m3142488424(L_17, L_18, L_19, /*hidden argument*/Dictionary_2_Add_m3142488424_RuntimeMethod_var);
	}

IL_009b:
	{
		Surface_t4054413514 * L_20 = V_0;
		if (L_20)
		{
			goto IL_00b6;
		}
	}
	{
		Dictionary_2_t2943126845 * L_21 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		int32_t L_22 = (&___surfaceId0)->get_handle_0();
		NullCheck(L_21);
		Surface_t4054413514 * L_23 = Dictionary_2_get_Item_m3334157318(L_21, L_22, /*hidden argument*/Dictionary_2_get_Item_m3334157318_RuntimeMethod_var);
		V_0 = L_23;
	}

IL_00b6:
	{
		Surface_t4054413514 * L_24 = V_0;
		NullCheck(L_24);
		SurfaceData_t200825419  L_25 = Surface_get_surfaceData_m1464996161(L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		SurfaceId_t2999094746  L_26 = ___surfaceId0;
		(&V_2)->set_id_0(L_26);
		bool L_27 = ___bakePhysics2;
		(&V_2)->set_bakeCollider_5(L_27);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_28 = SpatialMappingBase_get_lodToPcm_m1331271856(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_29 = SpatialMappingBase_get_lodType_m3008284673(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		(&V_2)->set_trianglesPerCubicMeter_4((((float)((float)L_31))));
		Surface_t4054413514 * L_32 = V_0;
		SurfaceData_t200825419  L_33 = V_2;
		NullCheck(L_32);
		Surface_set_surfaceData_m1874742482(L_32, L_33, /*hidden argument*/NULL);
		Surface_t4054413514 * L_34 = V_0;
		NullCheck(L_34);
		Surface_set_awaitingBake_m1929127634(L_34, (bool)1, /*hidden argument*/NULL);
		Surface_t4054413514 * L_35 = V_0;
		DateTime_t3738529785  L_36 = ___updateTime1;
		NullCheck(L_35);
		Surface_set_updateTime_m4237487960(L_35, L_36, /*hidden argument*/NULL);
		Surface_t4054413514 * L_37 = V_0;
		VirtActionInvoker1< Surface_t4054413514 * >::Invoke(10 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_37);
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase/Surface UnityEngine.XR.WSA.SpatialMappingBase::CreateSurface(UnityEngine.XR.WSA.SurfaceId)
extern "C" IL2CPP_METHOD_ATTR Surface_t4054413514 * SpatialMappingBase_CreateSurface_m210883022 (SpatialMappingBase_t1565881417 * __this, SurfaceId_t2999094746  ___surfaceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_CreateSurface_m210883022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t4054413514 * V_0 = NULL;
	Surface_t4054413514 * V_1 = NULL;
	{
		Surface_t4054413514 * L_0 = (Surface_t4054413514 *)il2cpp_codegen_object_new(Surface_t4054413514_il2cpp_TypeInfo_var);
		Surface__ctor_m1401598773(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Surface_t4054413514 * L_1 = V_0;
		SurfaceId_t2999094746  L_2 = ___surfaceId0;
		NullCheck(L_1);
		Surface_set_surfaceId_m2855891470(L_1, L_2, /*hidden argument*/NULL);
		Surface_t4054413514 * L_3 = V_0;
		NullCheck(L_3);
		Surface_set_awaitingBake_m1929127634(L_3, (bool)0, /*hidden argument*/NULL);
		Surface_t4054413514 * L_4 = V_0;
		V_1 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		Surface_t4054413514 * L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::CloneBakedComponents(UnityEngine.XR.WSA.SurfaceData,UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_CloneBakedComponents_m2758487843 (SpatialMappingBase_t1565881417 * __this, SurfaceData_t200825419  ___bakedData0, Surface_t4054413514 * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_CloneBakedComponents_m2758487843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Surface_t4054413514 * L_0 = ___target1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0059;
	}

IL_000d:
	{
		MeshFilter_t3523625662 * L_1 = (&___bakedData0)->get_outputMesh_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		Surface_t4054413514 * L_3 = ___target1;
		NullCheck(L_3);
		MeshFilter_t3523625662 * L_4 = Surface_get_meshFilter_m1700654280(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		Surface_t4054413514 * L_6 = ___target1;
		NullCheck(L_6);
		MeshFilter_t3523625662 * L_7 = Surface_get_meshFilter_m1700654280(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Mesh_t3648964284 * L_8 = MeshFilter_get_mesh_m3346355278(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Surface_t4054413514 * L_9 = ___target1;
		NullCheck(L_9);
		MeshFilter_t3523625662 * L_10 = Surface_get_meshFilter_m1700654280(L_9, /*hidden argument*/NULL);
		MeshFilter_t3523625662 * L_11 = (&___bakedData0)->get_outputMesh_1();
		NullCheck(L_11);
		Mesh_t3648964284 * L_12 = MeshFilter_get_sharedMesh_m1726897210(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		MeshFilter_set_mesh_m1415871686(L_10, L_12, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_AddRequiredComponentsForBaking_m589190807 (SpatialMappingBase_t1565881417 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_AddRequiredComponentsForBaking_m589190807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceId_t2999094746  V_0;
	memset(&V_0, 0, sizeof(V_0));
	SurfaceData_t200825419  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = SpatialMappingBase_get_surfaceParent_m2921944919(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2 = SpatialMappingBase_get_observerId_m311309638(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2080566521, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_6, L_5, /*hidden argument*/NULL);
		SpatialMappingBase_set_surfaceParent_m2781619170(__this, L_6, /*hidden argument*/NULL);
		SpatialMappingBase_set_surfaceParentWasDynamicallyCreated_m3990611021(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		Surface_t4054413514 * L_7 = ___surface0;
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = Surface_get_gameObject_m1222724741(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_009c;
		}
	}
	{
		Surface_t4054413514 * L_10 = ___surface0;
		int32_t L_11 = SpatialMappingBase_get_observerId_m311309638(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		Surface_t4054413514 * L_14 = ___surface0;
		NullCheck(L_14);
		SurfaceId_t2999094746  L_15 = Surface_get_surfaceId_m3957897989(L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		int32_t L_16 = (&V_0)->get_handle_0();
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral139343397, L_13, L_18, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_20, L_19, /*hidden argument*/NULL);
		NullCheck(L_10);
		Surface_set_gameObject_m31762453(L_10, L_20, /*hidden argument*/NULL);
		Surface_t4054413514 * L_21 = ___surface0;
		NullCheck(L_21);
		GameObject_t1113636619 * L_22 = Surface_get_gameObject_m1222724741(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_t3600365921 * L_23 = GameObject_get_transform_m1369836730(L_22, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_24 = SpatialMappingBase_get_surfaceParent_m2921944919(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_t3600365921 * L_25 = GameObject_get_transform_m1369836730(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_parent_m786917804(L_23, L_25, /*hidden argument*/NULL);
	}

IL_009c:
	{
		Surface_t4054413514 * L_26 = ___surface0;
		NullCheck(L_26);
		MeshFilter_t3523625662 * L_27 = Surface_get_meshFilter_m1700654280(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_27, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00e4;
		}
	}
	{
		Surface_t4054413514 * L_29 = ___surface0;
		Surface_t4054413514 * L_30 = ___surface0;
		NullCheck(L_30);
		GameObject_t1113636619 * L_31 = Surface_get_gameObject_m1222724741(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		MeshFilter_t3523625662 * L_32 = GameObject_GetComponent_TisMeshFilter_t3523625662_m1245918568(L_31, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t3523625662_m1245918568_RuntimeMethod_var);
		NullCheck(L_29);
		Surface_set_meshFilter_m2861310253(L_29, L_32, /*hidden argument*/NULL);
		Surface_t4054413514 * L_33 = ___surface0;
		NullCheck(L_33);
		MeshFilter_t3523625662 * L_34 = Surface_get_meshFilter_m1700654280(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_35 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_34, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00e3;
		}
	}
	{
		Surface_t4054413514 * L_36 = ___surface0;
		Surface_t4054413514 * L_37 = ___surface0;
		NullCheck(L_37);
		GameObject_t1113636619 * L_38 = Surface_get_gameObject_m1222724741(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		MeshFilter_t3523625662 * L_39 = GameObject_AddComponent_TisMeshFilter_t3523625662_m1910295747(L_38, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t3523625662_m1910295747_RuntimeMethod_var);
		NullCheck(L_36);
		Surface_set_meshFilter_m2861310253(L_36, L_39, /*hidden argument*/NULL);
	}

IL_00e3:
	{
	}

IL_00e4:
	{
		Surface_t4054413514 * L_40 = ___surface0;
		NullCheck(L_40);
		SurfaceData_t200825419  L_41 = Surface_get_surfaceData_m1464996161(L_40, /*hidden argument*/NULL);
		V_1 = L_41;
		Surface_t4054413514 * L_42 = ___surface0;
		NullCheck(L_42);
		MeshFilter_t3523625662 * L_43 = Surface_get_meshFilter_m1700654280(L_42, /*hidden argument*/NULL);
		(&V_1)->set_outputMesh_1(L_43);
		Surface_t4054413514 * L_44 = ___surface0;
		NullCheck(L_44);
		WorldAnchor_t2161774153 * L_45 = Surface_get_worldAnchor_m2380240801(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_46 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_45, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0140;
		}
	}
	{
		Surface_t4054413514 * L_47 = ___surface0;
		Surface_t4054413514 * L_48 = ___surface0;
		NullCheck(L_48);
		GameObject_t1113636619 * L_49 = Surface_get_gameObject_m1222724741(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		WorldAnchor_t2161774153 * L_50 = GameObject_GetComponent_TisWorldAnchor_t2161774153_m3129018124(L_49, /*hidden argument*/GameObject_GetComponent_TisWorldAnchor_t2161774153_m3129018124_RuntimeMethod_var);
		NullCheck(L_47);
		Surface_set_worldAnchor_m2844199449(L_47, L_50, /*hidden argument*/NULL);
		Surface_t4054413514 * L_51 = ___surface0;
		NullCheck(L_51);
		WorldAnchor_t2161774153 * L_52 = Surface_get_worldAnchor_m2380240801(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_53 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_52, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_013f;
		}
	}
	{
		Surface_t4054413514 * L_54 = ___surface0;
		Surface_t4054413514 * L_55 = ___surface0;
		NullCheck(L_55);
		GameObject_t1113636619 * L_56 = Surface_get_gameObject_m1222724741(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		WorldAnchor_t2161774153 * L_57 = GameObject_AddComponent_TisWorldAnchor_t2161774153_m1146425241(L_56, /*hidden argument*/GameObject_AddComponent_TisWorldAnchor_t2161774153_m1146425241_RuntimeMethod_var);
		NullCheck(L_54);
		Surface_set_worldAnchor_m2844199449(L_54, L_57, /*hidden argument*/NULL);
	}

IL_013f:
	{
	}

IL_0140:
	{
		Surface_t4054413514 * L_58 = ___surface0;
		NullCheck(L_58);
		WorldAnchor_t2161774153 * L_59 = Surface_get_worldAnchor_m2380240801(L_58, /*hidden argument*/NULL);
		(&V_1)->set_outputAnchor_2(L_59);
		Surface_t4054413514 * L_60 = ___surface0;
		SurfaceData_t200825419  L_61 = V_1;
		NullCheck(L_60);
		Surface_set_surfaceData_m1874742482(L_60, L_61, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnRemoveSurface(UnityEngine.XR.WSA.SurfaceId)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnRemoveSurface_m2379226760 (SpatialMappingBase_t1565881417 * __this, SurfaceId_t2999094746  ___surfaceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnRemoveSurface_m2379226760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t4054413514 * V_0 = NULL;
	{
		Dictionary_2_t2943126845 * L_0 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Dictionary_2_t2943126845 * L_1 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m3196174006(L_1, /*hidden argument*/Dictionary_2_get_Count_m3196174006_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0022;
		}
	}

IL_001c:
	{
		goto IL_00b7;
	}

IL_0022:
	{
		Dictionary_2_t2943126845 * L_3 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		int32_t L_4 = (&___surfaceId0)->get_handle_0();
		NullCheck(L_3);
		bool L_5 = Dictionary_2_TryGetValue_m3606827976(L_3, L_4, (Surface_t4054413514 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3606827976_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = (&___surfaceId0)->get_handle_0();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1110979500, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		goto IL_00b7;
	}

IL_005c:
	{
		Dictionary_2_t2943126845 * L_10 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		int32_t L_11 = (&___surfaceId0)->get_handle_0();
		NullCheck(L_10);
		Dictionary_2_Remove_m2741774404(L_10, L_11, /*hidden argument*/Dictionary_2_Remove_m2741774404_RuntimeMethod_var);
		int32_t L_12 = SpatialMappingBase_get_numUpdatesBeforeRemoval_m1861592450(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_12) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		Surface_t4054413514 * L_13 = V_0;
		VirtActionInvoker1< Surface_t4054413514 * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_13);
		goto IL_00b7;
	}

IL_0088:
	{
		Surface_t4054413514 * L_14 = V_0;
		bool L_15 = SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m3306344036(__this, L_14, /*hidden argument*/NULL);
		Surface_t4054413514 * L_16 = V_0;
		VirtActionInvoker2< bool, Surface_t4054413514 * >::Invoke(11 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnBeginSurfaceEviction(System.Boolean,UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_15, L_16);
		Surface_t4054413514 * L_17 = V_0;
		int32_t L_18 = SpatialMappingBase_get_numUpdatesBeforeRemoval_m1861592450(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Surface_set_remainingUpdatesToLive_m731613306(L_17, ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), /*hidden argument*/NULL);
		Dictionary_2_t2943126845 * L_19 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		int32_t L_20 = (&___surfaceId0)->get_handle_0();
		Surface_t4054413514 * L_21 = V_0;
		NullCheck(L_19);
		Dictionary_2_Add_m3142488424(L_19, L_20, L_21, /*hidden argument*/Dictionary_2_Add_m3142488424_RuntimeMethod_var);
	}

IL_00b7:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::ShouldRemainActiveWhileBeingRemoved(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m3306344036 (SpatialMappingBase_t1565881417 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m3306344036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t1113636619 * V_1 = NULL;
	bool V_2 = false;
	Transform_t3600365921 * V_3 = NULL;
	{
		Surface_t4054413514 * L_0 = ___surface0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Surface_get_gameObject_m1222724741(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00b5;
	}

IL_001a:
	{
		Camera_t4157153871 * L_3 = SpatialMappingBase_get_selectedCamera_m3580988241(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Surface_t4054413514 * L_5 = ___surface0;
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = Surface_get_gameObject_m1222724741(L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Surface_t4054413514 * L_9 = ___surface0;
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Surface_get_gameObject_m1222724741(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = Transform_get_parent_m835071599(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		goto IL_006b;
	}

IL_0049:
	{
		Transform_t3600365921 * L_13 = V_3;
		NullCheck(L_13);
		GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0063;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_007d;
	}

IL_0063:
	{
		Transform_t3600365921 * L_17 = V_3;
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = Transform_get_parent_m835071599(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
	}

IL_006b:
	{
		bool L_19 = V_2;
		if (L_19)
		{
			goto IL_007d;
		}
	}
	{
		Transform_t3600365921 * L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_20, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0049;
		}
	}

IL_007d:
	{
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_008b;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00b5;
	}

IL_008b:
	{
		Surface_t4054413514 * L_23 = ___surface0;
		NullCheck(L_23);
		GameObject_t1113636619 * L_24 = Surface_get_gameObject_m1222724741(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_t3600365921 * L_25 = GameObject_get_transform_m1369836730(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t3722313464  L_26 = Transform_get_position_m36019626(L_25, /*hidden argument*/NULL);
		bool L_27 = SpatialMappingBase_BoundsContains_m2272712744(__this, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00ae;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00b5;
	}

IL_00ae:
	{
		V_0 = (bool)1;
		goto IL_00b5;
	}

IL_00b5:
	{
		bool L_28 = V_0;
		return L_28;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::BoundsContains(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingBase_BoundsContains_m2272712744 (SpatialMappingBase_t1565881417 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_BoundsContains_m2272712744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Bounds_t2266837910  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = SpatialMappingBase_get_volumeType_m68629827(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0043;
		}
	}
	{
		Vector3_t3722313464  L_1 = ___position0;
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		float L_5 = Vector3_SqrMagnitude_m3025115945(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_6 = SpatialMappingBase_get_sphereRadius_m2108285469(__this, /*hidden argument*/NULL);
		float L_7 = SpatialMappingBase_get_sphereRadius_m2108285469(__this, /*hidden argument*/NULL);
		if ((!(((float)L_5) <= ((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))))))
		{
			goto IL_003d;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_006c;
	}

IL_003d:
	{
		goto IL_0065;
	}

IL_0043:
	{
		int32_t L_8 = SpatialMappingBase_get_volumeType_m68629827(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0065;
		}
	}
	{
		Bounds_t2266837910  L_9 = SpatialMappingBase_get_bounds_m3134789507(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		Vector3_t3722313464  L_10 = ___position0;
		bool L_11 = Bounds_Contains_m1110518741((Bounds_t2266837910 *)(&V_1), L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_006c;
	}

IL_0065:
	{
		V_0 = (bool)0;
		goto IL_006c;
	}

IL_006c:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_DestroySurface_m298508766 (SpatialMappingBase_t1565881417 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_DestroySurface_m298508766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Surface_t4054413514 * L_0 = ___surface0;
		NullCheck(L_0);
		Surface_set_remainingUpdatesToLive_m731613306(L_0, (-1), /*hidden argument*/NULL);
		Surface_t4054413514 * L_1 = ___surface0;
		NullCheck(L_1);
		MeshFilter_t3523625662 * L_2 = Surface_get_meshFilter_m1700654280(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		Surface_t4054413514 * L_4 = ___surface0;
		NullCheck(L_4);
		MeshFilter_t3523625662 * L_5 = Surface_get_meshFilter_m1700654280(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Mesh_t3648964284 * L_6 = MeshFilter_get_mesh_m3346355278(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		Surface_t4054413514 * L_8 = ___surface0;
		NullCheck(L_8);
		MeshFilter_t3523625662 * L_9 = Surface_get_meshFilter_m1700654280(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Mesh_t3648964284 * L_10 = MeshFilter_get_mesh_m3346355278(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0042:
	{
	}

IL_0043:
	{
		Surface_t4054413514 * L_11 = ___surface0;
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = Surface_get_gameObject_m1222724741(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Surface_t4054413514 * L_13 = ___surface0;
		NullCheck(L_13);
		Surface_set_gameObject_m31762453(L_13, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ProcessEvictedObjects()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_ProcessEvictedObjects_m1133365705 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_ProcessEvictedObjects_m1133365705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t1045831716  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t602342324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Surface_t4054413514 * V_2 = NULL;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2943126845 * L_0 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Dictionary_2_t2943126845 * L_1 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m3196174006(L_1, /*hidden argument*/Dictionary_2_get_Count_m3196174006_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0022;
		}
	}

IL_001c:
	{
		goto IL_014d;
	}

IL_0022:
	{
		List_1_t128053199 * L_3 = SpatialMappingBase_get_surfacesToRemoveFromDict_m3794671202(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Clear_m3865004651(L_3, /*hidden argument*/List_1_Clear_m3865004651_RuntimeMethod_var);
		Dictionary_2_t2943126845 * L_4 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Enumerator_t602342324  L_5 = Dictionary_2_GetEnumerator_m1270273418(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_003f:
		{
			KeyValuePair_2_t1045831716  L_6 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_0 = L_6;
			Surface_t4054413514 * L_7 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_7);
			GameObject_t1113636619 * L_8 = Surface_get_gameObject_m1222724741(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0077;
			}
		}

IL_005f:
		{
			List_1_t128053199 * L_10 = SpatialMappingBase_get_surfacesToRemoveFromDict_m3794671202(__this, /*hidden argument*/NULL);
			int32_t L_11 = KeyValuePair_2_get_Key_m3348634344((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m3348634344_RuntimeMethod_var);
			NullCheck(L_10);
			List_1_Add_m2080863212(L_10, L_11, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
			goto IL_00f3;
		}

IL_0077:
		{
			Surface_t4054413514 * L_12 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			V_2 = L_12;
			Surface_t4054413514 * L_13 = V_2;
			NullCheck(L_13);
			GameObject_t1113636619 * L_14 = Surface_get_gameObject_m1222724741(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			Transform_t3600365921 * L_15 = GameObject_get_transform_m1369836730(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			Vector3_t3722313464  L_17 = V_3;
			bool L_18 = SpatialMappingBase_BoundsContains_m2272712744(__this, L_17, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_00bc;
			}
		}

IL_009c:
		{
			Vector3_t3722313464  L_19 = V_3;
			Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
			NullCheck(L_20);
			Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_22 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/NULL);
			float L_23 = Vector3_SqrMagnitude_m3025115945(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var);
			float L_24 = ((SpatialMappingBase_t1565881417_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var))->get_s_EvictionUpdateTickThresholdSqr_5();
			if ((!(((float)L_23) <= ((float)L_24))))
			{
				goto IL_00f2;
			}
		}

IL_00bc:
		{
			Surface_t4054413514 * L_25 = V_2;
			Surface_t4054413514 * L_26 = L_25;
			NullCheck(L_26);
			int32_t L_27 = Surface_get_remainingUpdatesToLive_m4163189161(L_26, /*hidden argument*/NULL);
			int32_t L_28 = L_27;
			V_4 = L_28;
			NullCheck(L_26);
			Surface_set_remainingUpdatesToLive_m731613306(L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), /*hidden argument*/NULL);
			int32_t L_29 = V_4;
			if ((((int32_t)L_29) > ((int32_t)0)))
			{
				goto IL_00f1;
			}
		}

IL_00d6:
		{
			Surface_t4054413514 * L_30 = V_2;
			VirtActionInvoker1< Surface_t4054413514 * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_30);
			List_1_t128053199 * L_31 = SpatialMappingBase_get_surfacesToRemoveFromDict_m3794671202(__this, /*hidden argument*/NULL);
			int32_t L_32 = KeyValuePair_2_get_Key_m3348634344((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m3348634344_RuntimeMethod_var);
			NullCheck(L_31);
			List_1_Add_m2080863212(L_31, L_32, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
		}

IL_00f1:
		{
		}

IL_00f2:
		{
		}

IL_00f3:
		{
			bool L_33 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_003f;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x112, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(260)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x112, IL_0112)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0112:
	{
		V_5 = 0;
		goto IL_013b;
	}

IL_011a:
	{
		Dictionary_2_t2943126845 * L_34 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		List_1_t128053199 * L_35 = SpatialMappingBase_get_surfacesToRemoveFromDict_m3794671202(__this, /*hidden argument*/NULL);
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = List_1_get_Item_m1086679910(L_35, L_36, /*hidden argument*/List_1_get_Item_m1086679910_RuntimeMethod_var);
		NullCheck(L_34);
		Dictionary_2_Remove_m2741774404(L_34, L_37, /*hidden argument*/Dictionary_2_Remove_m2741774404_RuntimeMethod_var);
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_013b:
	{
		int32_t L_39 = V_5;
		List_1_t128053199 * L_40 = SpatialMappingBase_get_surfacesToRemoveFromDict_m3794671202(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		int32_t L_41 = List_1_get_Count_m3438314823(L_40, /*hidden argument*/List_1_get_Count_m3438314823_RuntimeMethod_var);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_011a;
		}
	}

IL_014d:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::TryGetHighestPriorityRequest(UnityEngine.XR.WSA.SurfaceData&)
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingBase_TryGetHighestPriorityRequest_m4061701214 (SpatialMappingBase_t1565881417 * __this, SurfaceData_t200825419 * ___bestSurfaceData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_TryGetHighestPriorityRequest_m4061701214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Surface_t4054413514 * V_1 = NULL;
	KeyValuePair_2_t1045831716  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t602342324  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		SurfaceData_t200825419 * L_0 = ___bestSurfaceData0;
		SurfaceData_t200825419  L_1 = __this->get_bestSurfaceDataNull_27();
		*(SurfaceData_t200825419 *)L_0 = L_1;
		Dictionary_2_t2943126845 * L_2 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t2943126845 * L_3 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = Dictionary_2_get_Count_m3196174006(L_3, /*hidden argument*/Dictionary_2_get_Count_m3196174006_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0030;
		}
	}

IL_0028:
	{
		V_0 = (bool)0;
		goto IL_00ed;
	}

IL_0030:
	{
		V_1 = (Surface_t4054413514 *)NULL;
		Dictionary_2_t2943126845 * L_5 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Enumerator_t602342324  L_6 = Dictionary_2_GetEnumerator_m1270273418(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_3 = L_6;
	}

IL_003f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0044:
		{
			KeyValuePair_2_t1045831716  L_7 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_2 = L_7;
			Surface_t4054413514 * L_8 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_8);
			bool L_9 = Surface_get_awaitingBake_m1433621250(L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0064;
			}
		}

IL_005e:
		{
			goto IL_009f;
		}

IL_0064:
		{
			Surface_t4054413514 * L_10 = V_1;
			if (L_10)
			{
				goto IL_0078;
			}
		}

IL_006a:
		{
			Surface_t4054413514 * L_11 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			V_1 = L_11;
			goto IL_009f;
		}

IL_0078:
		{
			Surface_t4054413514 * L_12 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_12);
			DateTime_t3738529785  L_13 = Surface_get_updateTime_m1560912062(L_12, /*hidden argument*/NULL);
			Surface_t4054413514 * L_14 = V_1;
			NullCheck(L_14);
			DateTime_t3738529785  L_15 = Surface_get_updateTime_m1560912062(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
			bool L_16 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_009e;
			}
		}

IL_0094:
		{
			Surface_t4054413514 * L_17 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			V_1 = L_17;
		}

IL_009e:
		{
		}

IL_009f:
		{
			bool L_18 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0044;
			}
		}

IL_00ab:
		{
			IL2CPP_LEAVE(0xBE, FINALLY_00b0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b0;
	}

FINALLY_00b0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(176)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(176)
	{
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00be:
	{
		Surface_t4054413514 * L_19 = V_1;
		if (L_19)
		{
			goto IL_00cc;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00ed;
	}

IL_00cc:
	{
		Surface_t4054413514 * L_20 = V_1;
		VirtActionInvoker1< Surface_t4054413514 * >::Invoke(10 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_20);
		Surface_t4054413514 * L_21 = V_1;
		VirtActionInvoker1< Surface_t4054413514 * >::Invoke(15 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_21);
		SurfaceData_t200825419 * L_22 = ___bestSurfaceData0;
		Surface_t4054413514 * L_23 = V_1;
		NullCheck(L_23);
		SurfaceData_t200825419  L_24 = Surface_get_surfaceData_m1464996161(L_23, /*hidden argument*/NULL);
		*(SurfaceData_t200825419 *)L_22 = L_24;
		V_0 = (bool)1;
		goto IL_00ed;
	}

IL_00ed:
	{
		bool L_25 = V_0;
		return L_25;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdateSurfaceData_m2114368718 (SpatialMappingBase_t1565881417 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_UpdateSurfaceData_m2114368718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceData_t200825419  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Surface_t4054413514 * L_0 = ___surface0;
		NullCheck(L_0);
		SurfaceData_t200825419  L_1 = Surface_get_surfaceData_m1464996161(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Surface_t4054413514 * L_2 = ___surface0;
		NullCheck(L_2);
		SurfaceId_t2999094746  L_3 = Surface_get_surfaceId_m3957897989(L_2, /*hidden argument*/NULL);
		(&V_0)->set_id_0(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_4 = SpatialMappingBase_get_lodToPcm_m1331271856(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = SpatialMappingBase_get_lodType_m3008284673(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		(&V_0)->set_trianglesPerCubicMeter_4((((float)((float)L_7))));
		(&V_0)->set_bakeCollider_5((bool)0);
		Surface_t4054413514 * L_8 = ___surface0;
		NullCheck(L_8);
		MeshFilter_t3523625662 * L_9 = Surface_get_meshFilter_m1700654280(L_8, /*hidden argument*/NULL);
		(&V_0)->set_outputMesh_1(L_9);
		Surface_t4054413514 * L_10 = ___surface0;
		SurfaceData_t200825419  L_11 = V_0;
		NullCheck(L_10);
		Surface_set_surfaceData_m1874742482(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ForEachSurfaceInCache(System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_ForEachSurfaceInCache_m41844318 (SpatialMappingBase_t1565881417 * __this, Action_1_t4226881109 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_ForEachSurfaceInCache_m41844318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t1045831716  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t602342324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	KeyValuePair_2_t1045831716  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t602342324  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Action_1_t4226881109 * L_0 = ___callback0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_00d2;
	}

IL_000d:
	{
		Dictionary_2_t2943126845 * L_1 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t2943126845 * L_2 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m3196174006(L_2, /*hidden argument*/Dictionary_2_get_Count_m3196174006_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002e;
		}
	}

IL_0028:
	{
		goto IL_00d2;
	}

IL_002e:
	{
		Dictionary_2_t2943126845 * L_4 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Enumerator_t602342324  L_5 = Dictionary_2_GetEnumerator_m1270273418(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_0040:
		{
			KeyValuePair_2_t1045831716  L_6 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_0 = L_6;
			Action_1_t4226881109 * L_7 = ___callback0;
			Surface_t4054413514 * L_8 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_7);
			Action_1_Invoke_m3713600556(L_7, L_8, /*hidden argument*/Action_1_Invoke_m3713600556_RuntimeMethod_var);
		}

IL_0057:
		{
			bool L_9 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0040;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x76, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x76, IL_0076)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0076:
	{
		Dictionary_2_t2943126845 * L_10 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Enumerator_t602342324  L_11 = Dictionary_2_GetEnumerator_m1270273418(L_10, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_3 = L_11;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b3;
		}

IL_0088:
		{
			KeyValuePair_2_t1045831716  L_12 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_2 = L_12;
			Surface_t4054413514 * L_13 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			bool L_14 = SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m3306344036(__this, L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_00b2;
			}
		}

IL_00a3:
		{
			Action_1_t4226881109 * L_15 = ___callback0;
			Surface_t4054413514 * L_16 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_15);
			Action_1_Invoke_m3713600556(L_15, L_16, /*hidden argument*/Action_1_Invoke_m3713600556_RuntimeMethod_var);
		}

IL_00b2:
		{
		}

IL_00b3:
		{
			bool L_17 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0088;
			}
		}

IL_00bf:
		{
			IL2CPP_LEAVE(0xD2, FINALLY_00c4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c4;
	}

FINALLY_00c4:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(196)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(196)
	{
		IL2CPP_JUMP_TBL(0xD2, IL_00d2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d2:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnResetProperties_m3500339833 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDidApplyAnimationProperties()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDidApplyAnimationProperties_m2223130757 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(16 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties() */, __this);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Reset()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase_Reset_m3515706896 (SpatialMappingBase_t1565881417 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(16 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties() */, __this);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingBase__cctor_m3118431880 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase__cctor_m3118431880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SpatialMappingBase_t1565881417_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var))->set_s_MovementUpdateThresholdSqr_4((0.0001f));
		((SpatialMappingBase_t1565881417_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var))->set_s_EvictionUpdateTickThresholdSqr_5((100.0f));
		((SpatialMappingBase_t1565881417_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var))->set_s_ObserverIdCounter_6(0);
		Int32U5BU5D_t385246372* L_0 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t385246372* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255372____U24fieldU2DD15896F389DBE7C4EB4B27E5CA408E92D08149C9_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((SpatialMappingBase_t1565881417_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var))->set_s_LodToPcm_26(L_1);
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
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Surface__ctor_m1401598773 (Surface_t4054413514 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_surfaceId()
extern "C" IL2CPP_METHOD_ATTR SurfaceId_t2999094746  Surface_get_surfaceId_m3957897989 (Surface_t4054413514 * __this, const RuntimeMethod* method)
{
	SurfaceId_t2999094746  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SurfaceId_t2999094746  L_0 = __this->get_U3CsurfaceIdU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		SurfaceId_t2999094746  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_surfaceId(UnityEngine.XR.WSA.SurfaceId)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_surfaceId_m2855891470 (Surface_t4054413514 * __this, SurfaceId_t2999094746  ___value0, const RuntimeMethod* method)
{
	{
		SurfaceId_t2999094746  L_0 = ___value0;
		__this->set_U3CsurfaceIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.DateTime UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_updateTime()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  Surface_get_updateTime_m1560912062 (Surface_t4054413514 * __this, const RuntimeMethod* method)
{
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		DateTime_t3738529785  L_0 = __this->get_U3CupdateTimeU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		DateTime_t3738529785  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_updateTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_updateTime_m4237487960 (Surface_t4054413514 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_U3CupdateTimeU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Surface_get_gameObject_m1222724741 (Surface_t4054413514 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_U3CgameObjectU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		GameObject_t1113636619 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_gameObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_gameObject_m31762453 (Surface_t4054413514 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___value0;
		__this->set_U3CgameObjectU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_surfaceData()
extern "C" IL2CPP_METHOD_ATTR SurfaceData_t200825419  Surface_get_surfaceData_m1464996161 (Surface_t4054413514 * __this, const RuntimeMethod* method)
{
	SurfaceData_t200825419  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SurfaceData_t200825419  L_0 = __this->get_U3CsurfaceDataU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		SurfaceData_t200825419  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_surfaceData(UnityEngine.XR.WSA.SurfaceData)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_surfaceData_m1874742482 (Surface_t4054413514 * __this, SurfaceData_t200825419  ___value0, const RuntimeMethod* method)
{
	{
		SurfaceData_t200825419  L_0 = ___value0;
		__this->set_U3CsurfaceDataU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_remainingUpdatesToLive()
extern "C" IL2CPP_METHOD_ATTR int32_t Surface_get_remainingUpdatesToLive_m4163189161 (Surface_t4054413514 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CremainingUpdatesToLiveU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_remainingUpdatesToLive(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_remainingUpdatesToLive_m731613306 (Surface_t4054413514 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CremainingUpdatesToLiveU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_awaitingBake()
extern "C" IL2CPP_METHOD_ATTR bool Surface_get_awaitingBake_m1433621250 (Surface_t4054413514 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CawaitingBakeU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_awaitingBake(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_awaitingBake_m1929127634 (Surface_t4054413514 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CawaitingBakeU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.MeshFilter UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshFilter()
extern "C" IL2CPP_METHOD_ATTR MeshFilter_t3523625662 * Surface_get_meshFilter_m1700654280 (Surface_t4054413514 * __this, const RuntimeMethod* method)
{
	MeshFilter_t3523625662 * V_0 = NULL;
	{
		MeshFilter_t3523625662 * L_0 = __this->get_U3CmeshFilterU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		MeshFilter_t3523625662 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshFilter(UnityEngine.MeshFilter)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_meshFilter_m2861310253 (Surface_t4054413514 * __this, MeshFilter_t3523625662 * ___value0, const RuntimeMethod* method)
{
	{
		MeshFilter_t3523625662 * L_0 = ___value0;
		__this->set_U3CmeshFilterU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.MeshRenderer UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshRenderer()
extern "C" IL2CPP_METHOD_ATTR MeshRenderer_t587009260 * Surface_get_meshRenderer_m2164391012 (Surface_t4054413514 * __this, const RuntimeMethod* method)
{
	MeshRenderer_t587009260 * V_0 = NULL;
	{
		MeshRenderer_t587009260 * L_0 = __this->get_U3CmeshRendererU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		MeshRenderer_t587009260 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshRenderer(UnityEngine.MeshRenderer)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_meshRenderer_m2783951849 (Surface_t4054413514 * __this, MeshRenderer_t587009260 * ___value0, const RuntimeMethod* method)
{
	{
		MeshRenderer_t587009260 * L_0 = ___value0;
		__this->set_U3CmeshRendererU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.MeshCollider UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshCollider()
extern "C" IL2CPP_METHOD_ATTR MeshCollider_t903564387 * Surface_get_meshCollider_m1987373388 (Surface_t4054413514 * __this, const RuntimeMethod* method)
{
	MeshCollider_t903564387 * V_0 = NULL;
	{
		MeshCollider_t903564387 * L_0 = __this->get_U3CmeshColliderU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		MeshCollider_t903564387 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshCollider(UnityEngine.MeshCollider)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_meshCollider_m2942846609 (Surface_t4054413514 * __this, MeshCollider_t903564387 * ___value0, const RuntimeMethod* method)
{
	{
		MeshCollider_t903564387 * L_0 = ___value0;
		__this->set_U3CmeshColliderU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_worldAnchor()
extern "C" IL2CPP_METHOD_ATTR WorldAnchor_t2161774153 * Surface_get_worldAnchor_m2380240801 (Surface_t4054413514 * __this, const RuntimeMethod* method)
{
	WorldAnchor_t2161774153 * V_0 = NULL;
	{
		WorldAnchor_t2161774153 * L_0 = __this->get_U3CworldAnchorU3Ek__BackingField_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		WorldAnchor_t2161774153 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_worldAnchor(UnityEngine.XR.WSA.WorldAnchor)
extern "C" IL2CPP_METHOD_ATTR void Surface_set_worldAnchor_m2844199449 (Surface_t4054413514 * __this, WorldAnchor_t2161774153 * ___value0, const RuntimeMethod* method)
{
	{
		WorldAnchor_t2161774153 * L_0 = ___value0;
		__this->set_U3CworldAnchorU3Ek__BackingField_9(L_0);
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
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback__ctor_m953033282 (SurfaceDataReadyCallback_t2457228298 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback::Invoke(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback_Invoke_m3801253413 (SurfaceDataReadyCallback_t2457228298 * __this, SpatialMappingBase_t1565881417 * ___requester0, SurfaceData_t200825419  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method)
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
						typedef void (*FunctionPointerType) (RuntimeObject *, SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker4< SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
							else
								GenericVirtActionInvoker4< SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker4< SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
							else
								VirtActionInvoker4< SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
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
								GenericInterfaceActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
							else
								GenericVirtActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
							else
								VirtActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
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
					typedef void (*FunctionPointerType) (RuntimeObject *, SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker4< SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
						else
							GenericVirtActionInvoker4< SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker4< SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
						else
							VirtActionInvoker4< SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
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
							GenericInterfaceActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
						else
							GenericVirtActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
						else
							VirtActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (SpatialMappingBase_t1565881417 *, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback::BeginInvoke(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SurfaceDataReadyCallback_BeginInvoke_m199031901 (SurfaceDataReadyCallback_t2457228298 * __this, SpatialMappingBase_t1565881417 * ___requester0, SurfaceData_t200825419  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceDataReadyCallback_BeginInvoke_m199031901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___requester0;
	__d_args[1] = Box(SurfaceData_t200825419_il2cpp_TypeInfo_var, &___bakedData1);
	__d_args[2] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___outputWritten2);
	__d_args[3] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &___elapsedBakeTimeSeconds3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback_EndInvoke_m676348884 (SurfaceDataReadyCallback_t2457228298 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider__ctor_m1097103321 (SpatialMappingCollider_t1632102360 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider__ctor_m1097103321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Layer_28(0);
		__this->set_m_EnableCollisions_30((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var);
		SpatialMappingBase__ctor_m3608052931(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingCollider::get_layer()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingCollider_get_layer_m1700436402 (SpatialMappingCollider_t1632102360 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Layer_28();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::set_layer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_set_layer_m4246067135 (SpatialMappingCollider_t1632102360 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Layer_28(L_0);
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m3709253588(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.PhysicMaterial UnityEngine.XR.WSA.SpatialMappingCollider::get_material()
extern "C" IL2CPP_METHOD_ATTR PhysicMaterial_t2874185564 * SpatialMappingCollider_get_material_m2477253011 (SpatialMappingCollider_t1632102360 * __this, const RuntimeMethod* method)
{
	PhysicMaterial_t2874185564 * V_0 = NULL;
	{
		PhysicMaterial_t2874185564 * L_0 = __this->get_m_Material_29();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PhysicMaterial_t2874185564 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::set_material(UnityEngine.PhysicMaterial)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_set_material_m1665821260 (SpatialMappingCollider_t1632102360 * __this, PhysicMaterial_t2874185564 * ___value0, const RuntimeMethod* method)
{
	{
		PhysicMaterial_t2874185564 * L_0 = ___value0;
		__this->set_m_Material_29(L_0);
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m3709253588(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingCollider::get_enableCollisions()
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingCollider_get_enableCollisions_m477768250 (SpatialMappingCollider_t1632102360 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_EnableCollisions_30();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::set_enableCollisions(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_set_enableCollisions_m2152202377 (SpatialMappingCollider_t1632102360 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_EnableCollisions_30(L_0);
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m3709253588(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::Awake()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_Awake_m2264869296 (SpatialMappingCollider_t1632102360 * __this, const RuntimeMethod* method)
{
	{
		SpatialMappingBase_set_bakePhysics_m3587048758(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::OnSurfaceDataReady(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_OnSurfaceDataReady_m3101173399 (SpatialMappingCollider_t1632102360 * __this, SpatialMappingBase_t1565881417 * ___requester0, SurfaceData_t200825419  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_OnSurfaceDataReady_m3101173399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t4054413514 * V_0 = NULL;
	{
		Dictionary_2_t2943126845 * L_0 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		SurfaceId_t2999094746 * L_1 = (&___bakedData1)->get_address_of_id_0();
		int32_t L_2 = L_1->get_handle_0();
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m3606827976(L_0, L_2, (Surface_t4054413514 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3606827976_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		goto IL_00d9;
	}

IL_0025:
	{
		Surface_t4054413514 * L_4 = V_0;
		NullCheck(L_4);
		Surface_set_awaitingBake_m1929127634(L_4, (bool)0, /*hidden argument*/NULL);
		bool L_5 = ___outputWritten2;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_00d9;
	}

IL_0038:
	{
		Surface_t4054413514 * L_6 = V_0;
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Surface_get_gameObject_m1222724741(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		SurfaceId_t2999094746 * L_9 = (&___bakedData1)->get_address_of_id_0();
		int32_t L_10 = L_9->get_handle_0();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2157998569, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		goto IL_00d9;
	}

IL_006f:
	{
		MeshCollider_t903564387 * L_14 = (&___bakedData1)->get_outputCollider_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_14, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00d9;
	}

IL_0087:
	{
		SpatialMappingBase_t1565881417 * L_16 = ___requester0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_16, __this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009d;
		}
	}
	{
		SurfaceData_t200825419  L_18 = ___bakedData1;
		Surface_t4054413514 * L_19 = V_0;
		SpatialMappingBase_CloneBakedComponents_m2758487843(__this, L_18, L_19, /*hidden argument*/NULL);
	}

IL_009d:
	{
		MeshCollider_t903564387 * L_20 = (&___bakedData1)->get_outputCollider_3();
		NullCheck(L_20);
		GameObject_t1113636619 * L_21 = Component_get_gameObject_m442555142(L_20, /*hidden argument*/NULL);
		int32_t L_22 = SpatialMappingCollider_get_layer_m1700436402(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		GameObject_set_layer_m3294992795(L_21, L_22, /*hidden argument*/NULL);
		PhysicMaterial_t2874185564 * L_23 = SpatialMappingCollider_get_material_m2477253011(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00d9;
		}
	}
	{
		MeshCollider_t903564387 * L_25 = (&___bakedData1)->get_outputCollider_3();
		PhysicMaterial_t2874185564 * L_26 = SpatialMappingCollider_get_material_m2477253011(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Collider_set_material_m3792038929(L_25, L_26, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::OnBeginSurfaceEviction(System.Boolean,UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_OnBeginSurfaceEviction_m3329450924 (SpatialMappingCollider_t1632102360 * __this, bool ___shouldBeActiveWhileRemoved0, Surface_t4054413514 * ___surfaceData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_OnBeginSurfaceEviction_m3329450924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Surface_t4054413514 * L_0 = ___surfaceData1;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Surface_get_gameObject_m1222724741(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_003b;
	}

IL_0018:
	{
		Surface_t4054413514 * L_3 = ___surfaceData1;
		NullCheck(L_3);
		MeshCollider_t903564387 * L_4 = Surface_get_meshCollider_m1987373388(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_003b;
	}

IL_002f:
	{
		Surface_t4054413514 * L_6 = ___surfaceData1;
		NullCheck(L_6);
		MeshCollider_t903564387 * L_7 = Surface_get_meshCollider_m1987373388(L_6, /*hidden argument*/NULL);
		bool L_8 = ___shouldBeActiveWhileRemoved0;
		NullCheck(L_7);
		Collider_set_enabled_m1517463283(L_7, L_8, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_UpdateSurfaceData_m1035792811 (SpatialMappingCollider_t1632102360 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method)
{
	SurfaceData_t200825419  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Surface_t4054413514 * L_0 = ___surface0;
		SpatialMappingBase_UpdateSurfaceData_m2114368718(__this, L_0, /*hidden argument*/NULL);
		Surface_t4054413514 * L_1 = ___surface0;
		NullCheck(L_1);
		SurfaceData_t200825419  L_2 = Surface_get_surfaceData_m1464996161(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SpatialMappingBase_get_bakePhysics_m3582877037(__this, /*hidden argument*/NULL);
		(&V_0)->set_bakeCollider_5(L_3);
		Surface_t4054413514 * L_4 = ___surface0;
		NullCheck(L_4);
		MeshCollider_t903564387 * L_5 = Surface_get_meshCollider_m1987373388(L_4, /*hidden argument*/NULL);
		(&V_0)->set_outputCollider_3(L_5);
		Surface_t4054413514 * L_6 = ___surface0;
		SurfaceData_t200825419  L_7 = V_0;
		NullCheck(L_6);
		Surface_set_surfaceData_m1874742482(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_AddRequiredComponentsForBaking_m1293650252 (SpatialMappingCollider_t1632102360 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_AddRequiredComponentsForBaking_m1293650252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceData_t200825419  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Surface_t4054413514 * L_0 = ___surface0;
		SpatialMappingBase_AddRequiredComponentsForBaking_m589190807(__this, L_0, /*hidden argument*/NULL);
		Surface_t4054413514 * L_1 = ___surface0;
		NullCheck(L_1);
		MeshCollider_t903564387 * L_2 = Surface_get_meshCollider_m1987373388(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Surface_t4054413514 * L_4 = ___surface0;
		Surface_t4054413514 * L_5 = ___surface0;
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = Surface_get_gameObject_m1222724741(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		MeshCollider_t903564387 * L_7 = GameObject_AddComponent_TisMeshCollider_t903564387_m855072157(L_6, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t903564387_m855072157_RuntimeMethod_var);
		NullCheck(L_4);
		Surface_set_meshCollider_m2942846609(L_4, L_7, /*hidden argument*/NULL);
	}

IL_002c:
	{
		Surface_t4054413514 * L_8 = ___surface0;
		NullCheck(L_8);
		SurfaceData_t200825419  L_9 = Surface_get_surfaceData_m1464996161(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Surface_t4054413514 * L_10 = ___surface0;
		NullCheck(L_10);
		MeshCollider_t903564387 * L_11 = Surface_get_meshCollider_m1987373388(L_10, /*hidden argument*/NULL);
		(&V_0)->set_outputCollider_3(L_11);
		Surface_t4054413514 * L_12 = ___surface0;
		SurfaceData_t200825419  L_13 = V_0;
		NullCheck(L_12);
		Surface_set_surfaceData_m1874742482(L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::ApplyPropertiesToCachedSurfaces()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m3709253588 (SpatialMappingCollider_t1632102360 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m3709253588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhysicMaterial_t2874185564 * L_0 = SpatialMappingCollider_get_material_m2477253011(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_002a;
	}

IL_0018:
	{
		intptr_t L_2 = (intptr_t)SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Em__0_m3882804129_RuntimeMethod_var;
		Action_1_t4226881109 * L_3 = (Action_1_t4226881109 *)il2cpp_codegen_object_new(Action_1_t4226881109_il2cpp_TypeInfo_var);
		Action_1__ctor_m2863752444(L_3, __this, (intptr_t)L_2, /*hidden argument*/Action_1__ctor_m2863752444_RuntimeMethod_var);
		SpatialMappingBase_ForEachSurfaceInCache_m41844318(__this, L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::OnResetProperties()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_OnResetProperties_m1472078680 (SpatialMappingCollider_t1632102360 * __this, const RuntimeMethod* method)
{
	{
		SpatialMappingBase_OnResetProperties_m3500339833(__this, /*hidden argument*/NULL);
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m3709253588(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::<ApplyPropertiesToCachedSurfaces>m__0(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Em__0_m3882804129 (SpatialMappingCollider_t1632102360 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Em__0_m3882804129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Surface_t4054413514 * L_0 = ___surface0;
		NullCheck(L_0);
		MeshCollider_t903564387 * L_1 = Surface_get_meshCollider_m1987373388(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_00ab;
	}

IL_0018:
	{
		Surface_t4054413514 * L_3 = ___surface0;
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Surface_get_gameObject_m1222724741(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		Surface_t4054413514 * L_6 = ___surface0;
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Surface_get_gameObject_m1222724741(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = GameObject_get_layer_m4158800245(L_7, /*hidden argument*/NULL);
		int32_t L_9 = SpatialMappingCollider_get_layer_m1700436402(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0053;
		}
	}
	{
		Surface_t4054413514 * L_10 = ___surface0;
		NullCheck(L_10);
		GameObject_t1113636619 * L_11 = Surface_get_gameObject_m1222724741(L_10, /*hidden argument*/NULL);
		int32_t L_12 = SpatialMappingCollider_get_layer_m1700436402(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_set_layer_m3294992795(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0053:
	{
	}

IL_0054:
	{
		Surface_t4054413514 * L_13 = ___surface0;
		NullCheck(L_13);
		MeshCollider_t903564387 * L_14 = Surface_get_meshCollider_m1987373388(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		PhysicMaterial_t2874185564 * L_15 = Collider_get_material_m1396492839(L_14, /*hidden argument*/NULL);
		PhysicMaterial_t2874185564 * L_16 = SpatialMappingCollider_get_material_m2477253011(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		Surface_t4054413514 * L_18 = ___surface0;
		NullCheck(L_18);
		MeshCollider_t903564387 * L_19 = Surface_get_meshCollider_m1987373388(L_18, /*hidden argument*/NULL);
		PhysicMaterial_t2874185564 * L_20 = SpatialMappingCollider_get_material_m2477253011(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Collider_set_material_m3792038929(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0082:
	{
		Surface_t4054413514 * L_21 = ___surface0;
		NullCheck(L_21);
		MeshCollider_t903564387 * L_22 = Surface_get_meshCollider_m1987373388(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = Collider_get_enabled_m3096904824(L_22, /*hidden argument*/NULL);
		bool L_24 = SpatialMappingCollider_get_enableCollisions_m477768250(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_23) == ((int32_t)L_24)))
		{
			goto IL_00ab;
		}
	}
	{
		Surface_t4054413514 * L_25 = ___surface0;
		NullCheck(L_25);
		MeshCollider_t903564387 * L_26 = Surface_get_meshCollider_m1987373388(L_25, /*hidden argument*/NULL);
		bool L_27 = SpatialMappingCollider_get_enableCollisions_m477768250(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Collider_set_enabled_m1517463283(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00ab:
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext__ctor_m859583417 (SpatialMappingContext_t1697439830 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext__ctor_m859583417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1469039449 * L_0 = (List_1_t1469039449 *)il2cpp_codegen_object_new(List_1_t1469039449_il2cpp_TypeInfo_var);
		List_1__ctor_m3285698757(L_0, /*hidden argument*/List_1__ctor_m3285698757_RuntimeMethod_var);
		__this->set_m_Components_2(L_0);
		SMBakeRequestU5BU5D_t3259285392* L_1 = (SMBakeRequestU5BU5D_t3259285392*)SZArrayNew(SMBakeRequestU5BU5D_t3259285392_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_InFlightRequests_3(L_1);
		__this->set_m_InFlightSurfaces_4(0);
		__this->set_m_NextIndex_5(0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingContext UnityEngine.XR.WSA.SpatialMappingContext::get_Instance()
extern "C" IL2CPP_METHOD_ATTR SpatialMappingContext_t1697439830 * SpatialMappingContext_get_Instance_m527477890 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_get_Instance_m527477890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpatialMappingContext_t1697439830 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_t1697439830_il2cpp_TypeInfo_var);
		SpatialMappingContext_t1697439830 * L_0 = ((SpatialMappingContext_t1697439830_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingContext_t1697439830_il2cpp_TypeInfo_var))->get_instance_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		SpatialMappingContext_t1697439830 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RegisterComponent(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback,UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback,UnityEngine.XR.WSA.SurfaceObserver)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_RegisterComponent_m1382065901 (SpatialMappingContext_t1697439830 * __this, SpatialMappingBase_t1565881417 * ___smComponent0, SurfaceDataReadyCallback_t2457228298 * ___onDataReady1, GetHighestPriorityCallback_t3420804231 * ___getHighestPri2, SurfaceObserver_t1930409633 * ___observer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_RegisterComponent_m1382065901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRegisterComponentU3Ec__AnonStorey0_t222113166 * V_0 = NULL;
	SMComponentRecord_t4291932003  V_1;
	memset(&V_1, 0, sizeof(V_1));
	SMComponentRecord_t4291932003  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		U3CRegisterComponentU3Ec__AnonStorey0_t222113166 * L_0 = (U3CRegisterComponentU3Ec__AnonStorey0_t222113166 *)il2cpp_codegen_object_new(U3CRegisterComponentU3Ec__AnonStorey0_t222113166_il2cpp_TypeInfo_var);
		U3CRegisterComponentU3Ec__AnonStorey0__ctor_m320312479(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRegisterComponentU3Ec__AnonStorey0_t222113166 * L_1 = V_0;
		SpatialMappingBase_t1565881417 * L_2 = ___smComponent0;
		NullCheck(L_1);
		L_1->set_smComponent_0(L_2);
		U3CRegisterComponentU3Ec__AnonStorey0_t222113166 * L_3 = V_0;
		NullCheck(L_3);
		SpatialMappingBase_t1565881417 * L_4 = L_3->get_smComponent_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_6 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_6, _stringLiteral4028545695, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, SpatialMappingContext_RegisterComponent_m1382065901_RuntimeMethod_var);
	}

IL_002b:
	{
		SurfaceDataReadyCallback_t2457228298 * L_7 = ___onDataReady1;
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_8 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_8, _stringLiteral720981499, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, SpatialMappingContext_RegisterComponent_m1382065901_RuntimeMethod_var);
	}

IL_003d:
	{
		GetHighestPriorityCallback_t3420804231 * L_9 = ___getHighestPri2;
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_10 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_10, _stringLiteral1661863850, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, SpatialMappingContext_RegisterComponent_m1382065901_RuntimeMethod_var);
	}

IL_004f:
	{
		SurfaceObserver_t1930409633 * L_11 = ___observer3;
		if (L_11)
		{
			goto IL_0062;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_12 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_12, _stringLiteral4152309335, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, SpatialMappingContext_RegisterComponent_m1382065901_RuntimeMethod_var);
	}

IL_0062:
	{
		List_1_t1469039449 * L_13 = __this->get_m_Components_2();
		U3CRegisterComponentU3Ec__AnonStorey0_t222113166 * L_14 = V_0;
		intptr_t L_15 = (intptr_t)U3CRegisterComponentU3Ec__AnonStorey0_U3CU3Em__0_m1240286447_RuntimeMethod_var;
		Predicate_1_t822258831 * L_16 = (Predicate_1_t822258831 *)il2cpp_codegen_object_new(Predicate_1_t822258831_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m2455368237(L_16, L_14, (intptr_t)L_15, /*hidden argument*/Predicate_1__ctor_m2455368237_RuntimeMethod_var);
		NullCheck(L_13);
		SMComponentRecord_t4291932003  L_17 = List_1_Find_m1208598465(L_13, L_16, /*hidden argument*/List_1_Find_m1208598465_RuntimeMethod_var);
		V_1 = L_17;
		SpatialMappingBase_t1565881417 * L_18 = (&V_1)->get_m_Component_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0098;
		}
	}
	{
		ArgumentException_t132251570 * L_20 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_20, _stringLiteral1061430505, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, SpatialMappingContext_RegisterComponent_m1382065901_RuntimeMethod_var);
	}

IL_0098:
	{
		U3CRegisterComponentU3Ec__AnonStorey0_t222113166 * L_21 = V_0;
		NullCheck(L_21);
		SpatialMappingBase_t1565881417 * L_22 = L_21->get_smComponent_0();
		(&V_2)->set_m_Component_0(L_22);
		SurfaceDataReadyCallback_t2457228298 * L_23 = ___onDataReady1;
		(&V_2)->set_m_OnDataReady_1(L_23);
		GetHighestPriorityCallback_t3420804231 * L_24 = ___getHighestPri2;
		(&V_2)->set_m_GetHighestPri_2(L_24);
		SurfaceObserver_t1930409633 * L_25 = ___observer3;
		(&V_2)->set_m_SurfaceObserver_3(L_25);
		List_1_t1469039449 * L_26 = __this->get_m_Components_2();
		SMComponentRecord_t4291932003  L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_m376061299(L_26, L_27, /*hidden argument*/List_1_Add_m376061299_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::DeregisterComponent(UnityEngine.XR.WSA.SpatialMappingBase)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_DeregisterComponent_m2711223001 (SpatialMappingContext_t1697439830 * __this, SpatialMappingBase_t1565881417 * ___smComponent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_DeregisterComponent_m2711223001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538 * L_0 = (U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538 *)il2cpp_codegen_object_new(U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538_il2cpp_TypeInfo_var);
		U3CDeregisterComponentU3Ec__AnonStorey1__ctor_m1502378428(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538 * L_1 = V_0;
		SpatialMappingBase_t1565881417 * L_2 = ___smComponent0;
		NullCheck(L_1);
		L_1->set_smComponent_0(L_2);
		List_1_t1469039449 * L_3 = __this->get_m_Components_2();
		U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CDeregisterComponentU3Ec__AnonStorey1_U3CU3Em__0_m1267700509_RuntimeMethod_var;
		Predicate_1_t822258831 * L_6 = (Predicate_1_t822258831 *)il2cpp_codegen_object_new(Predicate_1_t822258831_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m2455368237(L_6, L_4, (intptr_t)L_5, /*hidden argument*/Predicate_1__ctor_m2455368237_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_7 = List_1_RemoveAll_m3087115158(L_3, L_6, /*hidden argument*/List_1_RemoveAll_m3087115158_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, _stringLiteral846040651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, SpatialMappingContext_DeregisterComponent_m2711223001_RuntimeMethod_var);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::OnSurfaceDataReady(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_OnSurfaceDataReady_m2293454231 (SpatialMappingContext_t1697439830 * __this, SurfaceData_t200825419  ___sd0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		SurfaceData_t200825419  L_0 = ___sd0;
		int32_t L_1 = SpatialMappingContext_GetInFlightIndexFromSD_m235357745(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SurfaceData_t200825419  L_2 = ___sd0;
		bool L_3 = ___outputWritten1;
		float L_4 = ___elapsedBakeTimeSeconds2;
		int32_t L_5 = V_0;
		SpatialMappingContext_PropagateDataReadyEventToComponents_m66442097(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		float L_7 = ___elapsedBakeTimeSeconds2;
		SpatialMappingContext_UpdateInFlightRecords_m1761761938(__this, L_6, L_7, /*hidden argument*/NULL);
		SpatialMappingContext_RequestMeshPriorityFromComponents_m1980942071(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::GetInFlightIndexFromSD(UnityEngine.XR.WSA.SurfaceData)
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingContext_GetInFlightIndexFromSD_m235357745 (SpatialMappingContext_t1697439830 * __this, SurfaceData_t200825419  ___sd0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	SMBakeRequest_t3729498717  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_007a;
	}

IL_0008:
	{
		SMBakeRequestU5BU5D_t3259285392* L_0 = __this->get_m_InFlightRequests_3();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		V_1 = (*(SMBakeRequest_t3729498717 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))));
		SurfaceData_t200825419 * L_2 = (&V_1)->get_address_of_m_RequestData_0();
		SurfaceId_t2999094746 * L_3 = L_2->get_address_of_id_0();
		int32_t L_4 = L_3->get_handle_0();
		SurfaceId_t2999094746 * L_5 = (&___sd0)->get_address_of_id_0();
		int32_t L_6 = L_5->get_handle_0();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_0075;
		}
	}
	{
		SurfaceData_t200825419 * L_7 = (&V_1)->get_address_of_m_RequestData_0();
		float L_8 = L_7->get_trianglesPerCubicMeter_4();
		float L_9 = (&___sd0)->get_trianglesPerCubicMeter_4();
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0075;
		}
	}
	{
		SurfaceData_t200825419 * L_10 = (&V_1)->get_address_of_m_RequestData_0();
		bool L_11 = L_10->get_bakeCollider_5();
		bool L_12 = (&___sd0)->get_bakeCollider_5();
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_13 = V_0;
		V_2 = L_13;
		goto IL_008f;
	}

IL_0075:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_15 = V_0;
		SMBakeRequestU5BU5D_t3259285392* L_16 = __this->get_m_InFlightRequests_3();
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0008;
		}
	}
	{
		V_2 = (-1);
		goto IL_008f;
	}

IL_008f:
	{
		int32_t L_17 = V_2;
		return L_17;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext::GetSMComponentFromInFlightIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR SpatialMappingBase_t1565881417 * SpatialMappingContext_GetSMComponentFromInFlightIndex_m1092231486 (SpatialMappingContext_t1697439830 * __this, int32_t ___inFlightIndex0, const RuntimeMethod* method)
{
	SpatialMappingBase_t1565881417 * V_0 = NULL;
	{
		int32_t L_0 = ___inFlightIndex0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		V_0 = (SpatialMappingBase_t1565881417 *)NULL;
		goto IL_0063;
	}

IL_0010:
	{
		SMBakeRequestU5BU5D_t3259285392* L_1 = __this->get_m_InFlightRequests_3();
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_2 = ___inFlightIndex0;
		SMBakeRequestU5BU5D_t3259285392* L_3 = __this->get_m_InFlightRequests_3();
		NullCheck(L_3);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))))
		{
			goto IL_003f;
		}
	}
	{
		SMBakeRequestU5BU5D_t3259285392* L_4 = __this->get_m_InFlightRequests_3();
		int32_t L_5 = ___inFlightIndex0;
		NullCheck(L_4);
		bool L_6 = SMBakeRequest_IsClear_m2527899854((SMBakeRequest_t3729498717 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}

IL_003f:
	{
		V_0 = (SpatialMappingBase_t1565881417 *)NULL;
		goto IL_0063;
	}

IL_0047:
	{
		SMBakeRequestU5BU5D_t3259285392* L_7 = __this->get_m_InFlightRequests_3();
		int32_t L_8 = ___inFlightIndex0;
		NullCheck(L_7);
		SMComponentRecord_t4291932003 * L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_address_of_m_Requester_1();
		SpatialMappingBase_t1565881417 * L_10 = L_9->get_m_Component_0();
		V_0 = L_10;
		goto IL_0063;
	}

IL_0063:
	{
		SpatialMappingBase_t1565881417 * L_11 = V_0;
		return L_11;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::PropagateDataReadyEventToComponents(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_PropagateDataReadyEventToComponents_m66442097 (SpatialMappingContext_t1697439830 * __this, SurfaceData_t200825419  ___sd0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, int32_t ___inFlightIndex3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_PropagateDataReadyEventToComponents_m66442097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpatialMappingBase_t1565881417 * V_1 = NULL;
	SMComponentRecord_t4291932003  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t3358283326  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		float L_0 = (&___sd0)->get_trianglesPerCubicMeter_4();
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var);
		int32_t L_1 = SpatialMappingBase_GetLODFromTPCM_m2017509555(NULL /*static, unused*/, (((double)((double)L_0))), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___inFlightIndex3;
		SpatialMappingBase_t1565881417 * L_3 = SpatialMappingContext_GetSMComponentFromInFlightIndex_m1092231486(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = ___outputWritten1;
		if (!L_4)
		{
			goto IL_009c;
		}
	}
	{
		List_1_t1469039449 * L_5 = __this->get_m_Components_2();
		NullCheck(L_5);
		Enumerator_t3358283326  L_6 = List_1_GetEnumerator_m101756636(L_5, /*hidden argument*/List_1_GetEnumerator_m101756636_RuntimeMethod_var);
		V_3 = L_6;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0077;
		}

IL_0031:
		{
			SMComponentRecord_t4291932003  L_7 = Enumerator_get_Current_m1173067942((Enumerator_t3358283326 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m1173067942_RuntimeMethod_var);
			V_2 = L_7;
			SpatialMappingBase_t1565881417 * L_8 = (&V_2)->get_m_Component_0();
			NullCheck(L_8);
			int32_t L_9 = SpatialMappingBase_get_lodType_m3008284673(L_8, /*hidden argument*/NULL);
			int32_t L_10 = V_0;
			if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
			{
				goto IL_0076;
			}
		}

IL_004c:
		{
			SpatialMappingBase_t1565881417 * L_11 = (&V_2)->get_m_Component_0();
			NullCheck(L_11);
			bool L_12 = SpatialMappingBase_get_bakePhysics_m3582877037(L_11, /*hidden argument*/NULL);
			bool L_13 = (&___sd0)->get_bakeCollider_5();
			if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
			{
				goto IL_0076;
			}
		}

IL_0064:
		{
			SurfaceDataReadyCallback_t2457228298 * L_14 = (&V_2)->get_m_OnDataReady_1();
			SpatialMappingBase_t1565881417 * L_15 = V_1;
			SurfaceData_t200825419  L_16 = ___sd0;
			bool L_17 = ___outputWritten1;
			float L_18 = ___elapsedBakeTimeSeconds2;
			NullCheck(L_14);
			SurfaceDataReadyCallback_Invoke_m3801253413(L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		}

IL_0076:
		{
		}

IL_0077:
		{
			bool L_19 = Enumerator_MoveNext_m408144751((Enumerator_t3358283326 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m408144751_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0031;
			}
		}

IL_0083:
		{
			IL2CPP_LEAVE(0x96, FINALLY_0088);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0088;
	}

FINALLY_0088:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2945450316((Enumerator_t3358283326 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m2945450316_RuntimeMethod_var);
		IL2CPP_END_FINALLY(136)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(136)
	{
		IL2CPP_JUMP_TBL(0x96, IL_0096)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0096:
	{
		goto IL_00ef;
	}

IL_009c:
	{
		int32_t L_20 = ___inFlightIndex3;
		if ((((int32_t)L_20) == ((int32_t)(-1))))
		{
			goto IL_00cc;
		}
	}
	{
		SMBakeRequestU5BU5D_t3259285392* L_21 = __this->get_m_InFlightRequests_3();
		int32_t L_22 = ___inFlightIndex3;
		NullCheck(L_21);
		SMComponentRecord_t4291932003 * L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->get_address_of_m_Requester_1();
		SurfaceDataReadyCallback_t2457228298 * L_24 = L_23->get_m_OnDataReady_1();
		SpatialMappingBase_t1565881417 * L_25 = V_1;
		SurfaceData_t200825419  L_26 = ___sd0;
		bool L_27 = ___outputWritten1;
		float L_28 = ___elapsedBakeTimeSeconds2;
		NullCheck(L_24);
		SurfaceDataReadyCallback_Invoke_m3801253413(L_24, L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
		goto IL_00ee;
	}

IL_00cc:
	{
		SurfaceId_t2999094746 * L_29 = (&___sd0)->get_address_of_id_0();
		int32_t L_30 = L_29->get_handle_0();
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3952112447, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::UpdateInFlightRecords(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_UpdateInFlightRecords_m1761761938 (SpatialMappingContext_t1697439830 * __this, int32_t ___inFlightIndex0, float ___elapsedBakeTimeSeconds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_UpdateInFlightRecords_m1761761938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___inFlightIndex0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___inFlightIndex0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0072;
		}
	}

IL_000e:
	{
		int32_t L_2 = __this->get_m_InFlightSurfaces_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3594459470, /*hidden argument*/NULL);
		goto IL_003c;
	}

IL_002c:
	{
		int32_t L_3 = __this->get_m_InFlightSurfaces_4();
		__this->set_m_InFlightSurfaces_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
	}

IL_003c:
	{
		SMBakeRequestU5BU5D_t3259285392* L_4 = __this->get_m_InFlightRequests_3();
		int32_t L_5 = ___inFlightIndex0;
		NullCheck(L_4);
		SMBakeRequest_Clear_m110826664((SMBakeRequest_t3729498717 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		SMBakeRequestU5BU5D_t3259285392* L_6 = __this->get_m_InFlightRequests_3();
		int32_t L_7 = ___inFlightIndex0;
		NullCheck(L_6);
		bool L_8 = SMBakeRequest_IsClear_m2527899854((SMBakeRequest_t3729498717 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0065;
		}
	}
	{
	}

IL_0065:
	{
		int32_t L_9 = ___inFlightIndex0;
		__this->set_m_NextIndex_5(L_9);
		goto IL_0089;
	}

IL_0072:
	{
		int32_t L_10 = ___inFlightIndex0;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3807659798, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_0089:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RequestMeshPriorityFromComponents()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_RequestMeshPriorityFromComponents_m1980942071 (SpatialMappingContext_t1697439830 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_RequestMeshPriorityFromComponents_m1980942071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SMComponentRecord_t4291932003  V_1;
	memset(&V_1, 0, sizeof(V_1));
	SurfaceData_t200825419  V_2;
	memset(&V_2, 0, sizeof(V_2));
	SpatialMappingContext_t1697439830 * G_B9_0 = NULL;
	SpatialMappingContext_t1697439830 * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	SpatialMappingContext_t1697439830 * G_B10_1 = NULL;
	{
		int32_t L_0 = __this->get_m_InFlightSurfaces_4();
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_013a;
		}
	}
	{
		V_0 = 0;
		goto IL_0128;
	}

IL_0015:
	{
		List_1_t1469039449 * L_1 = __this->get_m_Components_2();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		SMComponentRecord_t4291932003  L_3 = List_1_get_Item_m1040871401(L_1, L_2, /*hidden argument*/List_1_get_Item_m1040871401_RuntimeMethod_var);
		V_1 = L_3;
		GetHighestPriorityCallback_t3420804231 * L_4 = (&V_1)->get_m_GetHighestPri_2();
		NullCheck(L_4);
		bool L_5 = GetHighestPriorityCallback_Invoke_m1091030339(L_4, (SurfaceData_t200825419 *)(&V_2), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_6 = __this->get_m_NextIndex_5();
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_005e;
		}
	}
	{
		SMBakeRequestU5BU5D_t3259285392* L_7 = __this->get_m_InFlightRequests_3();
		int32_t L_8 = __this->get_m_NextIndex_5();
		NullCheck(L_7);
		bool L_9 = SMBakeRequest_IsClear_m2527899854((SMBakeRequest_t3729498717 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_007f;
		}
	}

IL_005e:
	{
		int32_t L_10 = __this->get_m_NextIndex_5();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2011594946, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		goto IL_011e;
	}

IL_007f:
	{
		SurfaceObserver_t1930409633 * L_14 = (&V_1)->get_m_SurfaceObserver_3();
		SurfaceData_t200825419  L_15 = V_2;
		intptr_t L_16 = (intptr_t)SpatialMappingContext_OnSurfaceDataReady_m2293454231_RuntimeMethod_var;
		SurfaceDataReadyDelegate_t4152308677 * L_17 = (SurfaceDataReadyDelegate_t4152308677 *)il2cpp_codegen_object_new(SurfaceDataReadyDelegate_t4152308677_il2cpp_TypeInfo_var);
		SurfaceDataReadyDelegate__ctor_m2681927192(L_17, __this, (intptr_t)L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_18 = SurfaceObserver_RequestMeshAsync_m1474962252(L_14, L_15, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0111;
		}
	}
	{
		SMBakeRequestU5BU5D_t3259285392* L_19 = __this->get_m_InFlightRequests_3();
		int32_t L_20 = __this->get_m_NextIndex_5();
		NullCheck(L_19);
		SurfaceData_t200825419  L_21 = V_2;
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_m_RequestData_0(L_21);
		SMBakeRequestU5BU5D_t3259285392* L_22 = __this->get_m_InFlightRequests_3();
		int32_t L_23 = __this->get_m_NextIndex_5();
		NullCheck(L_22);
		SMComponentRecord_t4291932003  L_24 = V_1;
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->set_m_Requester_1(L_24);
		int32_t L_25 = __this->get_m_InFlightSurfaces_4();
		__this->set_m_InFlightSurfaces_4(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
		int32_t L_26 = __this->get_m_NextIndex_5();
		G_B8_0 = __this;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			G_B9_0 = __this;
			goto IL_00ee;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		goto IL_00ef;
	}

IL_00ee:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
	}

IL_00ef:
	{
		NullCheck(G_B10_1);
		G_B10_1->set_m_NextIndex_5(G_B10_0);
		List_1_t1469039449 * L_27 = __this->get_m_Components_2();
		int32_t L_28 = V_0;
		NullCheck(L_27);
		List_1_RemoveAt_m794802037(L_27, L_28, /*hidden argument*/List_1_RemoveAt_m794802037_RuntimeMethod_var);
		List_1_t1469039449 * L_29 = __this->get_m_Components_2();
		SMComponentRecord_t4291932003  L_30 = V_1;
		NullCheck(L_29);
		List_1_Add_m376061299(L_29, L_30, /*hidden argument*/List_1_Add_m376061299_RuntimeMethod_var);
		goto IL_0139;
	}

IL_0111:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1285157625, /*hidden argument*/NULL);
	}

IL_011e:
	{
		goto IL_0139;
	}

IL_0123:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0128:
	{
		int32_t L_32 = V_0;
		List_1_t1469039449 * L_33 = __this->get_m_Components_2();
		NullCheck(L_33);
		int32_t L_34 = List_1_get_Count_m414841771(L_33, /*hidden argument*/List_1_get_Count_m414841771_RuntimeMethod_var);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_0015;
		}
	}

IL_0139:
	{
	}

IL_013a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::ComponentHasDataRequests()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext_ComponentHasDataRequests_m3294686077 (SpatialMappingContext_t1697439830 * __this, const RuntimeMethod* method)
{
	{
		SpatialMappingContext_RequestMeshPriorityFromComponents_m1980942071(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingContext__cctor_m3693341998 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext__cctor_m3693341998_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpatialMappingContext_t1697439830 * L_0 = (SpatialMappingContext_t1697439830 *)il2cpp_codegen_object_new(SpatialMappingContext_t1697439830_il2cpp_TypeInfo_var);
		SpatialMappingContext__ctor_m859583417(L_0, /*hidden argument*/NULL);
		((SpatialMappingContext_t1697439830_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingContext_t1697439830_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/<DeregisterComponent>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDeregisterComponentU3Ec__AnonStorey1__ctor_m1502378428 (U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/<DeregisterComponent>c__AnonStorey1::<>m__0(UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord)
extern "C" IL2CPP_METHOD_ATTR bool U3CDeregisterComponentU3Ec__AnonStorey1_U3CU3Em__0_m1267700509 (U3CDeregisterComponentU3Ec__AnonStorey1_t2751021538 * __this, SMComponentRecord_t4291932003  ___record0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDeregisterComponentU3Ec__AnonStorey1_U3CU3Em__0_m1267700509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		SpatialMappingBase_t1565881417 * L_0 = (&___record0)->get_m_Component_0();
		SpatialMappingBase_t1565881417 * L_1 = __this->get_smComponent_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_3 = V_0;
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/<RegisterComponent>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRegisterComponentU3Ec__AnonStorey0__ctor_m320312479 (U3CRegisterComponentU3Ec__AnonStorey0_t222113166 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/<RegisterComponent>c__AnonStorey0::<>m__0(UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord)
extern "C" IL2CPP_METHOD_ATTR bool U3CRegisterComponentU3Ec__AnonStorey0_U3CU3Em__0_m1240286447 (U3CRegisterComponentU3Ec__AnonStorey0_t222113166 * __this, SMComponentRecord_t4291932003  ___record0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRegisterComponentU3Ec__AnonStorey0_U3CU3Em__0_m1240286447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		SpatialMappingBase_t1565881417 * L_0 = (&___record0)->get_m_Component_0();
		SpatialMappingBase_t1565881417 * L_1 = __this->get_smComponent_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_3 = V_0;
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetHighestPriorityCallback__ctor_m1422064434 (GetHighestPriorityCallback_t3420804231 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback::Invoke(UnityEngine.XR.WSA.SurfaceData&)
extern "C" IL2CPP_METHOD_ATTR bool GetHighestPriorityCallback_Invoke_m1091030339 (GetHighestPriorityCallback_t3420804231 * __this, SurfaceData_t200825419 * ___dataRequest0, const RuntimeMethod* method)
{
	bool result = false;
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
						typedef bool (*FunctionPointerType) (RuntimeObject *, SurfaceData_t200825419 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, ___dataRequest0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef bool (*FunctionPointerType) (RuntimeObject *, void*, SurfaceData_t200825419 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___dataRequest0, targetMethod);
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
								result = GenericInterfaceFuncInvoker1< bool, SurfaceData_t200825419 * >::Invoke(targetMethod, targetThis, ___dataRequest0);
							else
								result = GenericVirtFuncInvoker1< bool, SurfaceData_t200825419 * >::Invoke(targetMethod, targetThis, ___dataRequest0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker1< bool, SurfaceData_t200825419 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___dataRequest0);
							else
								result = VirtFuncInvoker1< bool, SurfaceData_t200825419 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___dataRequest0);
						}
					}
					else
					{
						typedef bool (*FunctionPointerType) (void*, SurfaceData_t200825419 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___dataRequest0, targetMethod);
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
					typedef bool (*FunctionPointerType) (RuntimeObject *, SurfaceData_t200825419 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, ___dataRequest0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef bool (*FunctionPointerType) (RuntimeObject *, void*, SurfaceData_t200825419 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___dataRequest0, targetMethod);
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
							result = GenericInterfaceFuncInvoker1< bool, SurfaceData_t200825419 * >::Invoke(targetMethod, targetThis, ___dataRequest0);
						else
							result = GenericVirtFuncInvoker1< bool, SurfaceData_t200825419 * >::Invoke(targetMethod, targetThis, ___dataRequest0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker1< bool, SurfaceData_t200825419 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___dataRequest0);
						else
							result = VirtFuncInvoker1< bool, SurfaceData_t200825419 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___dataRequest0);
					}
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, SurfaceData_t200825419 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___dataRequest0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback::BeginInvoke(UnityEngine.XR.WSA.SurfaceData&,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetHighestPriorityCallback_BeginInvoke_m1577895165 (GetHighestPriorityCallback_t3420804231 * __this, SurfaceData_t200825419 * ___dataRequest0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetHighestPriorityCallback_BeginInvoke_m1577895165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SurfaceData_t200825419_il2cpp_TypeInfo_var, &*___dataRequest0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback::EndInvoke(UnityEngine.XR.WSA.SurfaceData&,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool GetHighestPriorityCallback_EndInvoke_m98934323 (GetHighestPriorityCallback_t3420804231 * __this, SurfaceData_t200825419 * ___dataRequest0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___dataRequest0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif




// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
extern "C" void SMBakeRequest_t3729498717_marshal_pinvoke(const SMBakeRequest_t3729498717& unmarshaled, SMBakeRequest_t3729498717_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL, NULL);
}
extern "C" void SMBakeRequest_t3729498717_marshal_pinvoke_back(const SMBakeRequest_t3729498717_marshaled_pinvoke& marshaled, SMBakeRequest_t3729498717& unmarshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
extern "C" void SMBakeRequest_t3729498717_marshal_pinvoke_cleanup(SMBakeRequest_t3729498717_marshaled_pinvoke& marshaled)
{
}




// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
extern "C" void SMBakeRequest_t3729498717_marshal_com(const SMBakeRequest_t3729498717& unmarshaled, SMBakeRequest_t3729498717_marshaled_com& marshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL, NULL);
}
extern "C" void SMBakeRequest_t3729498717_marshal_com_back(const SMBakeRequest_t3729498717_marshaled_com& marshaled, SMBakeRequest_t3729498717& unmarshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
extern "C" void SMBakeRequest_t3729498717_marshal_com_cleanup(SMBakeRequest_t3729498717_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest::Clear()
extern "C" IL2CPP_METHOD_ATTR void SMBakeRequest_Clear_m110826664 (SMBakeRequest_t3729498717 * __this, const RuntimeMethod* method)
{
	{
		SurfaceData_t200825419 * L_0 = __this->get_address_of_m_RequestData_0();
		SurfaceId_t2999094746 * L_1 = L_0->get_address_of_id_0();
		L_1->set_handle_0(0);
		SMComponentRecord_t4291932003 * L_2 = __this->get_address_of_m_Requester_1();
		SMComponentRecord_Clear_m3667022335((SMComponentRecord_t4291932003 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void SMBakeRequest_Clear_m110826664_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SMBakeRequest_t3729498717 * _thisAdjusted = reinterpret_cast<SMBakeRequest_t3729498717 *>(__this + 1);
	SMBakeRequest_Clear_m110826664(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest::IsClear()
extern "C" IL2CPP_METHOD_ATTR bool SMBakeRequest_IsClear_m2527899854 (SMBakeRequest_t3729498717 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		SurfaceData_t200825419 * L_0 = __this->get_address_of_m_RequestData_0();
		SurfaceId_t2999094746 * L_1 = L_0->get_address_of_id_0();
		int32_t L_2 = L_1->get_handle_0();
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		SMComponentRecord_t4291932003 * L_3 = __this->get_address_of_m_Requester_1();
		bool L_4 = SMComponentRecord_IsClear_m669906794((SMComponentRecord_t4291932003 *)L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern "C"  bool SMBakeRequest_IsClear_m2527899854_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SMBakeRequest_t3729498717 * _thisAdjusted = reinterpret_cast<SMBakeRequest_t3729498717 *>(__this + 1);
	return SMBakeRequest_IsClear_m2527899854(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
extern "C" void SMComponentRecord_t4291932003_marshal_pinvoke(const SMComponentRecord_t4291932003& unmarshaled, SMComponentRecord_t4291932003_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL, NULL);
}
extern "C" void SMComponentRecord_t4291932003_marshal_pinvoke_back(const SMComponentRecord_t4291932003_marshaled_pinvoke& marshaled, SMComponentRecord_t4291932003& unmarshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
extern "C" void SMComponentRecord_t4291932003_marshal_pinvoke_cleanup(SMComponentRecord_t4291932003_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
extern "C" void SMComponentRecord_t4291932003_marshal_com(const SMComponentRecord_t4291932003& unmarshaled, SMComponentRecord_t4291932003_marshaled_com& marshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL, NULL);
}
extern "C" void SMComponentRecord_t4291932003_marshal_com_back(const SMComponentRecord_t4291932003_marshaled_com& marshaled, SMComponentRecord_t4291932003& unmarshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
extern "C" void SMComponentRecord_t4291932003_marshal_com_cleanup(SMComponentRecord_t4291932003_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::.ctor(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback,UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback,UnityEngine.XR.WSA.SurfaceObserver)
extern "C" IL2CPP_METHOD_ATTR void SMComponentRecord__ctor_m1823993706 (SMComponentRecord_t4291932003 * __this, SpatialMappingBase_t1565881417 * ___comp0, SurfaceDataReadyCallback_t2457228298 * ___onDataReady1, GetHighestPriorityCallback_t3420804231 * ___getHighestPri2, SurfaceObserver_t1930409633 * ___observer3, const RuntimeMethod* method)
{
	{
		SpatialMappingBase_t1565881417 * L_0 = ___comp0;
		__this->set_m_Component_0(L_0);
		SurfaceDataReadyCallback_t2457228298 * L_1 = ___onDataReady1;
		__this->set_m_OnDataReady_1(L_1);
		GetHighestPriorityCallback_t3420804231 * L_2 = ___getHighestPri2;
		__this->set_m_GetHighestPri_2(L_2);
		SurfaceObserver_t1930409633 * L_3 = ___observer3;
		__this->set_m_SurfaceObserver_3(L_3);
		return;
	}
}
extern "C"  void SMComponentRecord__ctor_m1823993706_AdjustorThunk (RuntimeObject * __this, SpatialMappingBase_t1565881417 * ___comp0, SurfaceDataReadyCallback_t2457228298 * ___onDataReady1, GetHighestPriorityCallback_t3420804231 * ___getHighestPri2, SurfaceObserver_t1930409633 * ___observer3, const RuntimeMethod* method)
{
	SMComponentRecord_t4291932003 * _thisAdjusted = reinterpret_cast<SMComponentRecord_t4291932003 *>(__this + 1);
	SMComponentRecord__ctor_m1823993706(_thisAdjusted, ___comp0, ___onDataReady1, ___getHighestPri2, ___observer3, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::Clear()
extern "C" IL2CPP_METHOD_ATTR void SMComponentRecord_Clear_m3667022335 (SMComponentRecord_t4291932003 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Component_0((SpatialMappingBase_t1565881417 *)NULL);
		__this->set_m_OnDataReady_1((SurfaceDataReadyCallback_t2457228298 *)NULL);
		__this->set_m_GetHighestPri_2((GetHighestPriorityCallback_t3420804231 *)NULL);
		__this->set_m_SurfaceObserver_3((SurfaceObserver_t1930409633 *)NULL);
		return;
	}
}
extern "C"  void SMComponentRecord_Clear_m3667022335_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SMComponentRecord_t4291932003 * _thisAdjusted = reinterpret_cast<SMComponentRecord_t4291932003 *>(__this + 1);
	SMComponentRecord_Clear_m3667022335(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::IsClear()
extern "C" IL2CPP_METHOD_ATTR bool SMComponentRecord_IsClear_m669906794 (SMComponentRecord_t4291932003 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SMComponentRecord_IsClear_m669906794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		SpatialMappingBase_t1565881417 * L_0 = __this->get_m_Component_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		SurfaceDataReadyCallback_t2457228298 * L_2 = __this->get_m_OnDataReady_1();
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		GetHighestPriorityCallback_t3420804231 * L_3 = __this->get_m_GetHighestPri_2();
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		SurfaceObserver_t1930409633 * L_4 = __this->get_m_SurfaceObserver_3();
		G_B5_0 = ((((RuntimeObject*)(SurfaceObserver_t1930409633 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B5_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003a;
	}

IL_003a:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern "C"  bool SMComponentRecord_IsClear_m669906794_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SMComponentRecord_t4291932003 * _thisAdjusted = reinterpret_cast<SMComponentRecord_t4291932003 *>(__this + 1);
	return SMComponentRecord_IsClear_m669906794(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer__ctor_m3018187447 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer__ctor_m3018187447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_CurrentRenderState_28(1);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t1565881417_il2cpp_TypeInfo_var);
		SpatialMappingBase__ctor_m3608052931(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingRenderer/RenderState UnityEngine.XR.WSA.SpatialMappingRenderer::get_renderState()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialMappingRenderer_get_renderState_m3369581027 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_CurrentRenderState_28();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_renderState(UnityEngine.XR.WSA.SpatialMappingRenderer/RenderState)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_renderState_m3292080885 (SpatialMappingRenderer_t1808097488 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_CurrentRenderState_28(L_0);
		SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m1197102617(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_visualMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * SpatialMappingRenderer_get_visualMaterial_m62984138 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method)
{
	Material_t340375123 * V_0 = NULL;
	{
		Material_t340375123 * L_0 = __this->get_m_VisualMaterial_29();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Material_t340375123 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_visualMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_visualMaterial_m3135258387 (SpatialMappingRenderer_t1808097488 * __this, Material_t340375123 * ___value0, const RuntimeMethod* method)
{
	{
		Material_t340375123 * L_0 = ___value0;
		__this->set_m_VisualMaterial_29(L_0);
		return;
	}
}
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_occlusionMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * SpatialMappingRenderer_get_occlusionMaterial_m266410818 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method)
{
	Material_t340375123 * V_0 = NULL;
	{
		Material_t340375123 * L_0 = __this->get_m_OcclusionMaterial_30();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Material_t340375123 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_occlusionMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_occlusionMaterial_m1921952621 (SpatialMappingRenderer_t1808097488 * __this, Material_t340375123 * ___value0, const RuntimeMethod* method)
{
	{
		Material_t340375123 * L_0 = ___value0;
		__this->set_m_OcclusionMaterial_30(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnSurfaceDataReady(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnSurfaceDataReady_m2124969018 (SpatialMappingRenderer_t1808097488 * __this, SpatialMappingBase_t1565881417 * ___requester0, SurfaceData_t200825419  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_OnSurfaceDataReady_m2124969018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t4054413514 * V_0 = NULL;
	{
		Dictionary_2_t2943126845 * L_0 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		SurfaceId_t2999094746 * L_1 = (&___bakedData1)->get_address_of_id_0();
		int32_t L_2 = L_1->get_handle_0();
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m3606827976(L_0, L_2, (Surface_t4054413514 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3606827976_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		goto IL_00f1;
	}

IL_0025:
	{
		Surface_t4054413514 * L_4 = V_0;
		NullCheck(L_4);
		Surface_set_awaitingBake_m1929127634(L_4, (bool)0, /*hidden argument*/NULL);
		bool L_5 = ___outputWritten2;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_00f1;
	}

IL_0038:
	{
		Surface_t4054413514 * L_6 = V_0;
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Surface_get_gameObject_m1222724741(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		SurfaceId_t2999094746 * L_9 = (&___bakedData1)->get_address_of_id_0();
		int32_t L_10 = L_9->get_handle_0();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3024037018, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_006f:
	{
		SpatialMappingBase_t1565881417 * L_14 = ___requester0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_14, __this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0085;
		}
	}
	{
		SurfaceData_t200825419  L_16 = ___bakedData1;
		Surface_t4054413514 * L_17 = V_0;
		SpatialMappingBase_CloneBakedComponents_m2758487843(__this, L_16, L_17, /*hidden argument*/NULL);
	}

IL_0085:
	{
		Surface_t4054413514 * L_18 = V_0;
		NullCheck(L_18);
		MeshRenderer_t587009260 * L_19 = Surface_get_meshRenderer_m2164391012(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e5;
		}
	}
	{
		Surface_t4054413514 * L_21 = V_0;
		Surface_t4054413514 * L_22 = V_0;
		NullCheck(L_22);
		GameObject_t1113636619 * L_23 = Surface_get_gameObject_m1222724741(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		MeshRenderer_t587009260 * L_24 = GameObject_GetComponent_TisMeshRenderer_t587009260_m758541173(L_23, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m758541173_RuntimeMethod_var);
		NullCheck(L_21);
		Surface_set_meshRenderer_m2783951849(L_21, L_24, /*hidden argument*/NULL);
		Surface_t4054413514 * L_25 = V_0;
		NullCheck(L_25);
		MeshRenderer_t587009260 * L_26 = Surface_get_meshRenderer_m2164391012(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_26, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00cc;
		}
	}
	{
		Surface_t4054413514 * L_28 = V_0;
		Surface_t4054413514 * L_29 = V_0;
		NullCheck(L_29);
		GameObject_t1113636619 * L_30 = Surface_get_gameObject_m1222724741(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		MeshRenderer_t587009260 * L_31 = GameObject_AddComponent_TisMeshRenderer_t587009260_m412216294(L_30, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t587009260_m412216294_RuntimeMethod_var);
		NullCheck(L_28);
		Surface_set_meshRenderer_m2783951849(L_28, L_31, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		Surface_t4054413514 * L_32 = V_0;
		NullCheck(L_32);
		MeshRenderer_t587009260 * L_33 = Surface_get_meshRenderer_m2164391012(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Renderer_set_receiveShadows_m108599289(L_33, (bool)0, /*hidden argument*/NULL);
		Surface_t4054413514 * L_34 = V_0;
		NullCheck(L_34);
		MeshRenderer_t587009260 * L_35 = Surface_get_meshRenderer_m2164391012(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Renderer_set_shadowCastingMode_m987547713(L_35, 0, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		Surface_t4054413514 * L_36 = V_0;
		NullCheck(L_36);
		MeshRenderer_t587009260 * L_37 = Surface_get_meshRenderer_m2164391012(L_36, /*hidden argument*/NULL);
		SpatialMappingRenderer_ApplyRenderSettings_m3044446323(__this, L_37, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnBeginSurfaceEviction(System.Boolean,UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnBeginSurfaceEviction_m3773769302 (SpatialMappingRenderer_t1808097488 * __this, bool ___shouldBeActiveWhileRemoved0, Surface_t4054413514 * ___surface1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_OnBeginSurfaceEviction_m3773769302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Surface_t4054413514 * L_0 = ___surface1;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Surface_get_gameObject_m1222724741(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_003b;
	}

IL_0018:
	{
		Surface_t4054413514 * L_3 = ___surface1;
		NullCheck(L_3);
		MeshRenderer_t587009260 * L_4 = Surface_get_meshRenderer_m2164391012(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_003b;
	}

IL_002f:
	{
		Surface_t4054413514 * L_6 = ___surface1;
		NullCheck(L_6);
		MeshRenderer_t587009260 * L_7 = Surface_get_meshRenderer_m2164391012(L_6, /*hidden argument*/NULL);
		bool L_8 = ___shouldBeActiveWhileRemoved0;
		NullCheck(L_7);
		Renderer_set_enabled_m1727253150(L_7, L_8, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyPropertiesToCachedSurfaces()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m1197102617 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m1197102617_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t1045831716  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t602342324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t1113636619 * V_2 = NULL;
	KeyValuePair_2_t1045831716  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Enumerator_t602342324  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2943126845 * L_0 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Dictionary_2_t2943126845 * L_1 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m3196174006(L_1, /*hidden argument*/Dictionary_2_get_Count_m3196174006_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0022;
		}
	}

IL_001c:
	{
		goto IL_0147;
	}

IL_0022:
	{
		Dictionary_2_t2943126845 * L_3 = SpatialMappingBase_get_surfaceObjects_m4219327713(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_t602342324  L_4 = Dictionary_2_GetEnumerator_m1270273418(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008c;
		}

IL_0034:
		{
			KeyValuePair_2_t1045831716  L_5 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_0 = L_5;
			Surface_t4054413514 * L_6 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_6);
			GameObject_t1113636619 * L_7 = Surface_get_gameObject_m1222724741(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			GameObject_t1113636619 * L_8 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_005c;
			}
		}

IL_0056:
		{
			goto IL_008c;
		}

IL_005c:
		{
			Surface_t4054413514 * L_10 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_10);
			MeshRenderer_t587009260 * L_11 = Surface_get_meshRenderer_m2164391012(L_10, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_12 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			goto IL_008c;
		}

IL_0079:
		{
			Surface_t4054413514 * L_13 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_13);
			MeshRenderer_t587009260 * L_14 = Surface_get_meshRenderer_m2164391012(L_13, /*hidden argument*/NULL);
			SpatialMappingRenderer_ApplyRenderSettings_m3044446323(__this, L_14, /*hidden argument*/NULL);
		}

IL_008c:
		{
			bool L_15 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0034;
			}
		}

IL_0098:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_009d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009d;
	}

FINALLY_009d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(157)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ab:
	{
		Dictionary_2_t2943126845 * L_16 = SpatialMappingBase_get_pendingSurfacesForEviction_m3975088124(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Enumerator_t602342324  L_17 = Dictionary_2_GetEnumerator_m1270273418(L_16, /*hidden argument*/Dictionary_2_GetEnumerator_m1270273418_RuntimeMethod_var);
		V_4 = L_17;
	}

IL_00b9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0128;
		}

IL_00be:
		{
			KeyValuePair_2_t1045831716  L_18 = Enumerator_get_Current_m1264606807((Enumerator_t602342324 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m1264606807_RuntimeMethod_var);
			V_3 = L_18;
			Surface_t4054413514 * L_19 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_19);
			MeshRenderer_t587009260 * L_20 = Surface_get_meshRenderer_m2164391012(L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_21 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_20, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00e4;
			}
		}

IL_00de:
		{
			goto IL_0128;
		}

IL_00e4:
		{
			Surface_t4054413514 * L_22 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_22);
			MeshRenderer_t587009260 * L_23 = Surface_get_meshRenderer_m2164391012(L_22, /*hidden argument*/NULL);
			SpatialMappingRenderer_ApplyRenderSettings_m3044446323(__this, L_23, /*hidden argument*/NULL);
			Surface_t4054413514 * L_24 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			bool L_25 = SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m3306344036(__this, L_24, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_0127;
			}
		}

IL_0108:
		{
			Surface_t4054413514 * L_26 = KeyValuePair_2_get_Value_m1578890025((KeyValuePair_2_t1045831716 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m1578890025_RuntimeMethod_var);
			NullCheck(L_26);
			MeshRenderer_t587009260 * L_27 = Surface_get_meshRenderer_m2164391012(L_26, /*hidden argument*/NULL);
			int32_t L_28 = SpatialMappingRenderer_get_renderState_m3369581027(__this, /*hidden argument*/NULL);
			NullCheck(L_27);
			Renderer_set_enabled_m1727253150(L_27, (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		}

IL_0127:
		{
		}

IL_0128:
		{
			bool L_29 = Enumerator_MoveNext_m2331042058((Enumerator_t602342324 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m2331042058_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_00be;
			}
		}

IL_0134:
		{
			IL2CPP_LEAVE(0x147, FINALLY_0139);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0139;
	}

FINALLY_0139:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76550905((Enumerator_t602342324 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m76550905_RuntimeMethod_var);
		IL2CPP_END_FINALLY(313)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(313)
	{
		IL2CPP_JUMP_TBL(0x147, IL_0147)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0147:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyRenderSettings(UnityEngine.MeshRenderer)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyRenderSettings_m3044446323 (SpatialMappingRenderer_t1808097488 * __this, MeshRenderer_t587009260 * ___meshRenderer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_ApplyRenderSettings_m3044446323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		MeshRenderer_t587009260 * L_0 = ___meshRenderer0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_006f;
	}

IL_0013:
	{
		int32_t L_2 = SpatialMappingRenderer_get_renderState_m3369581027(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		goto IL_006f;
	}

IL_0033:
	{
		MeshRenderer_t587009260 * L_6 = ___meshRenderer0;
		Material_t340375123 * L_7 = SpatialMappingRenderer_get_occlusionMaterial_m266410818(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m2374163090(L_6, L_7, /*hidden argument*/NULL);
		MeshRenderer_t587009260 * L_8 = ___meshRenderer0;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_004b:
	{
		MeshRenderer_t587009260 * L_9 = ___meshRenderer0;
		Material_t340375123 * L_10 = SpatialMappingRenderer_get_visualMaterial_m62984138(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Renderer_set_sharedMaterial_m2374163090(L_9, L_10, /*hidden argument*/NULL);
		MeshRenderer_t587009260 * L_11 = ___meshRenderer0;
		NullCheck(L_11);
		Renderer_set_enabled_m1727253150(L_11, (bool)1, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_0063:
	{
		MeshRenderer_t587009260 * L_12 = ___meshRenderer0;
		NullCheck(L_12);
		Renderer_set_enabled_m1727253150(L_12, (bool)0, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_DestroySurface_m3478115798 (SpatialMappingRenderer_t1808097488 * __this, Surface_t4054413514 * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_DestroySurface_m3478115798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Surface_t4054413514 * L_0 = ___surface0;
		NullCheck(L_0);
		MeshRenderer_t587009260 * L_1 = Surface_get_meshRenderer_m2164391012(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Surface_t4054413514 * L_3 = ___surface0;
		NullCheck(L_3);
		MeshRenderer_t587009260 * L_4 = Surface_get_meshRenderer_m2164391012(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Renderer_set_sharedMaterial_m2374163090(L_4, (Material_t340375123 *)NULL, /*hidden argument*/NULL);
		Surface_t4054413514 * L_5 = ___surface0;
		NullCheck(L_5);
		MeshRenderer_t587009260 * L_6 = Surface_get_meshRenderer_m2164391012(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Renderer_set_enabled_m1727253150(L_6, (bool)0, /*hidden argument*/NULL);
		Surface_t4054413514 * L_7 = ___surface0;
		NullCheck(L_7);
		MeshRenderer_t587009260 * L_8 = Surface_get_meshRenderer_m2164391012(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Surface_t4054413514 * L_9 = ___surface0;
		NullCheck(L_9);
		Surface_set_meshRenderer_m2783951849(L_9, (MeshRenderer_t587009260 *)NULL, /*hidden argument*/NULL);
	}

IL_003e:
	{
		Surface_t4054413514 * L_10 = ___surface0;
		SpatialMappingBase_DestroySurface_m298508766(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnDestroy_m1995777563 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method)
{
	{
		SpatialMappingRenderer_set_occlusionMaterial_m1921952621(__this, (Material_t340375123 *)NULL, /*hidden argument*/NULL);
		SpatialMappingRenderer_set_visualMaterial_m3135258387(__this, (Material_t340375123 *)NULL, /*hidden argument*/NULL);
		SpatialMappingBase_OnDestroy_m3399831572(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnResetProperties()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnResetProperties_m2132724349 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method)
{
	{
		SpatialMappingBase_OnResetProperties_m3500339833(__this, /*hidden argument*/NULL);
		SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m1197102617(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::Reset()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingRenderer_Reset_m2382439028 (SpatialMappingRenderer_t1808097488 * __this, const RuntimeMethod* method)
{
	{
		SpatialMappingBase_Reset_m3515706896(__this, /*hidden argument*/NULL);
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
