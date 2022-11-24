#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<Niantic.ARDK.Utilities.Marker.MarkerMetadata>
struct Action_1_tE87A7548CA523908E824A6BBF45F5E03EA42E406;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs>
struct ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionDeinitializedArgs>
struct ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>
struct ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs>
struct ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>
struct ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs>
struct ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>
struct ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>
struct ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>
struct ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs>
struct ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>
struct ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>
struct ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs>
struct ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>
struct ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>
struct ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector3>
struct BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE;
// System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>
struct Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Color>
struct Dictionary_2_t02712D85A437174C466DE8AAC0A7E57F4A02FDDA;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,UnityEngine.Color>
struct Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B;
// System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,System.String>
struct Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97;
// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext>
struct Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9;
// System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,UnityEngine.Color>
struct Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F;
// System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,System.String>
struct Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2;
// System.Collections.Generic.HashSet`1<System.IO.Stream>
struct HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>
struct IEnumerable_1_tD38714F22216BDC12D7C9895C8569002285F3B98;
// System.Collections.Generic.IEnumerator`1<Niantic.ARDK.AR.Anchors.IARAnchor>
struct IEnumerator_1_tA324E38F4C68B7D6FDCFE1D53348CEC2E93EA16C;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEqualityComparer`1<Niantic.ARDK.Networking.IPeer>
struct IEqualityComparer_1_t3A8C3F963E36CD9AA749EAC5978030A2593297A9;
// System.Collections.Generic.IEqualityComparer`1<Niantic.ARDK.AR.Networking.PeerState>
struct IEqualityComparer_1_t2341522663C72B9EE468841C0D8FD50ED0E0FB87;
// System.Collections.Generic.IEqualityComparer`1<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState>
struct IEqualityComparer_1_t3159E5D5D0537167B5D3C2B7A4B788D2B9400A60;
// System.Collections.Generic.IList`1<Niantic.ARDK.AR.Anchors.IARAnchor>
struct IList_1_tB43D47F9B5277A14D90DA6E6FD9493E7A6ADF586;
// System.Collections.Generic.IList`1<Niantic.ARDK.AR.HitTest.IARHitTestResult>
struct IList_1_t056A32CE1B83338E94A9281AB0A0FF506E311C94;
// System.Collections.Generic.Dictionary`2/KeyCollection<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>
struct KeyCollection_t41B0A293481FD22C831D2399139561901CBDA06D;
// System.Collections.Generic.Dictionary`2/KeyCollection<Niantic.ARDK.AR.Networking.PeerState,UnityEngine.Color>
struct KeyCollection_t8A7534EC2B3D292104051326F99F587B14320DE6;
// System.Collections.Generic.Dictionary`2/KeyCollection<Niantic.ARDK.AR.Networking.PeerState,System.String>
struct KeyCollection_t98E3C8C67E931B168B16E3622AF966627624EF85;
// System.Collections.Generic.Dictionary`2/KeyCollection<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,UnityEngine.Color>
struct KeyCollection_tE3B74F0CAAD0EF32A074C2D5D0BED6A98854DF90;
// System.Collections.Generic.Dictionary`2/KeyCollection<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,System.String>
struct KeyCollection_tC29C6C2307EFD299DA0E67DEEF6084927C0C9855;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.Anchors.IARAnchor>
struct ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.HitTest.IARHitTestResult>
struct ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// System.Collections.Generic.Dictionary`2/ValueCollection<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>
struct ValueCollection_tD2ED1D6BC2DAE11D0D365D4CE6A9F2453930A16E;
// System.Collections.Generic.Dictionary`2/ValueCollection<Niantic.ARDK.AR.Networking.PeerState,UnityEngine.Color>
struct ValueCollection_t0DB6927D941DE1A0CAAE488B7AC1E68000C37657;
// System.Collections.Generic.Dictionary`2/ValueCollection<Niantic.ARDK.AR.Networking.PeerState,System.String>
struct ValueCollection_tF378BD8C18CAEBA2136DF04DE22B274D28D4A703;
// System.Collections.Generic.Dictionary`2/ValueCollection<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,UnityEngine.Color>
struct ValueCollection_t55AB0CB799AEDD0E9A14156831F2D9056B7D6A59;
// System.Collections.Generic.Dictionary`2/ValueCollection<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,System.String>
struct ValueCollection_t86A12B2D9B15179B07541283307D4565E565A180;
// System.Collections.Generic.Dictionary`2/Entry<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>[]
struct EntryU5BU5D_tB325410475458B1F15521BA2430479DF86B26868;
// System.Collections.Generic.Dictionary`2/Entry<Niantic.ARDK.AR.Networking.PeerState,UnityEngine.Color>[]
struct EntryU5BU5D_t332EE51C6A59179D783058FE49985CDFACD9910E;
// System.Collections.Generic.Dictionary`2/Entry<Niantic.ARDK.AR.Networking.PeerState,System.String>[]
struct EntryU5BU5D_t3B54A21F375D8F27CD451FBC2F7DE11E4EB1AA6F;
// System.Collections.Generic.Dictionary`2/Entry<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,UnityEngine.Color>[]
struct EntryU5BU5D_tA527FA9684808232B90CEDBFD018B8ABDDE802C6;
// System.Collections.Generic.Dictionary`2/Entry<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,System.String>[]
struct EntryU5BU5D_tE2E006F373AB98A936D5690119394F85DB578938;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Niantic.ARDKExamples.Common.Helpers.ARAnchorAttachment
struct ARAnchorAttachment_t35EA0933842F1CE4D0FA4511A3269B982FA8B85B;
// Niantic.ARDKExamples.Helpers.ARCursorRenderer
struct ARCursorRenderer_tA570D175748C1CF829C5834B58566ADD6010DDD6;
// Niantic.ARDKExamples.Helpers.ARHitTester
struct ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Niantic.ARDKExamples.Pong.BallBehaviour
struct BallBehaviour_t27961BAEAFF7E00DDBCDF3A3BEEA129B39935F0A;
// Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay
struct BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1;
// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Niantic.ARDKExamples.Configuration.ConfigHelper
struct ConfigHelper_tE36F8DCB3025DD56BDAEFD2405DA4680664469F3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// Niantic.ARDK.Extensions.FeaturePreloadManager
struct FeaturePreloadManager_t2D4AE1E9A5ACD242A294CC1041B72C711D8DC1FC;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Niantic.ARDKExamples.Pong.GameController
struct GameController_t3D8F63A63632C0B7E130B6477812C19954642A09;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E;
// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E;
// Niantic.ARDK.AR.Anchors.IARAnchor
struct IARAnchor_t66754F240328EA56C08215F9B99AE69E96A70440;
// Niantic.ARDK.AR.IARFrame
struct IARFrame_tCF4C31DB7FD454D960AF22DF95E39666B398A58B;
// Niantic.ARDK.AR.HitTest.IARHitTestResult
struct IARHitTestResult_t7C42BBC455DA5446916EED4B480FD4356DCC7215;
// Niantic.ARDK.AR.Networking.IARNetworking
struct IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D;
// Niantic.ARDK.AR.IARSession
struct IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8;
// Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration
struct IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Niantic.ARDK.Utilities.Marker.IMetadataSerializer
struct IMetadataSerializer_tBAAA8F6C39492D2F21936B720F516D79C97196D0;
// Niantic.ARDK.Networking.IMultipeerNetworking
struct IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F;
// Niantic.ARDK.Networking.IPeer
struct IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Niantic.ARDKExamples.MarkerSync.MarkerMappingManager
struct MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3;
// Niantic.ARDK.Utilities.Marker.MarkerMetadata
struct MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680;
// Niantic.ARDKExamples.MarkerSync.MarkerScanningManager
struct MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E;
// Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager
struct MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Niantic.ARDKExamples.Pong.MessagingManager
struct MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Niantic.ARDKExamples.Helpers.NetworkStatus
struct NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Niantic.ARDKExamples.Helpers.PeerPoseVisualizer
struct PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Niantic.ARDKExamples.Helpers.PlayerColor
struct PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Niantic.ARDKExamples.Helpers.ScrollingLog
struct ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Niantic.ARDKExamples.Helpers.SendDebugMessageHelper
struct SendDebugMessageHelper_tCC3AA20A92A6014A41FF87A06ECAED10462C3196;
// Niantic.ARDKExamples.Helpers.SessionIDField
struct SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E;
// Niantic.ARDKExamples.Helpers.SessionIDGenerator
struct SessionIDGenerator_tE061B3D4180AE28BC0B464F61BFA40FD6F8920C7;
// Niantic.ARDKExamples.Helpers.SessionStartGatekeeper
struct SessionStartGatekeeper_t952D9782379CF47F611D77EDDBAD6F0CACCD234D;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// Niantic.ARDKExamples.Helpers.SyncStateHelpText
struct SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0;
// Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer
struct SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269;
// Niantic.ARDKExamples.Helpers.SyncStateTrackingList
struct SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext
struct _TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext
struct _TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// Niantic.ARDK.Utilities.Marker.ZXingMarkerGenerator/MarkerGenerationResult
struct MarkerGenerationResult_t048FE5A946C2CC7D9DBE03878F3556A34A3494E0;

IL2CPP_EXTERN_C RuntimeClass* ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE87A7548CA523908E824A6BBF45F5E03EA42E406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorType_tCB38DE79343C43E4E1CB9517B17716354EDE7866_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkGlobalConfig_t3307B4653A987A5903FE7CB37B11BC0F03DA5DF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BasicMetadataSerializer_t2C6BAC9971BF1365EEAA079307709314F733A801_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARAnchor_t66754F240328EA56C08215F9B99AE69E96A70440_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARCamera_tADC495E9353B2B94AE1C1C8FF3611E1BA26D832C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARConfiguration_t63AD4587231BC6249D6ED8AB8BC140DCA79F6ABE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARFrame_tCF4C31DB7FD454D960AF22DF95E39666B398A58B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARHitTestResult_t7C42BBC455DA5446916EED4B480FD4356DCC7215_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t61CEAA077D2369FC0C739F2C2A898241408EF204_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t60FB2FF7ACAC822916320B47A053747037CE7C0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA324E38F4C68B7D6FDCFE1D53348CEC2E93EA16C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEquatable_1_tAB27EFCEEC8B73006079F75F9928B2D32C59F763_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerState_tA01351ACC4C28BF4BCAC07CA68A80381C0C446EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransportType_tEC575A6B09F6A3D419478D6C956F5A4BECEBDB07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03F01AA52D4B8DEE6D370163031323DF4A194C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral0ED788DF2380D6BF3C3AA3A3C852A8D05A2EB335;
IL2CPP_EXTERN_C String_t* _stringLiteral144BDA1C512143BF48F3A576C391B08B91E71B6D;
IL2CPP_EXTERN_C String_t* _stringLiteral1719D5928B4681DE0C9BB2119416E64A3A02E9C3;
IL2CPP_EXTERN_C String_t* _stringLiteral1B5CC13BBBDA566285009E3062D47DCA2DFCA8C9;
IL2CPP_EXTERN_C String_t* _stringLiteral1C33ED8ACBB677640232E0A387399AC60ACB2823;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323;
IL2CPP_EXTERN_C String_t* _stringLiteral1DFADAE9847FFE066EF2E3B11DFF7A26D8290083;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral25B7FDB1B17EAA279DB149A6E291F2F0454FD05B;
IL2CPP_EXTERN_C String_t* _stringLiteral261ACDC92E5606E2F08283A3F1C709B2EBB8AC94;
IL2CPP_EXTERN_C String_t* _stringLiteral29634F49BD2FA4DE7411DB7C343FD50F8A7BB714;
IL2CPP_EXTERN_C String_t* _stringLiteral319A979647C3945B6D648690195C31DD944C0238;
IL2CPP_EXTERN_C String_t* _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74;
IL2CPP_EXTERN_C String_t* _stringLiteral325AB5015D524BEC08CFDA626553B04ABA0F9E3B;
IL2CPP_EXTERN_C String_t* _stringLiteral35D6BEC6130D0969C746B2FF81B83C7EBDE7FAFD;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB45FCACC18BF78994EF2999C83120D1F63FF78;
IL2CPP_EXTERN_C String_t* _stringLiteral4115B817BABF08D4DE3F38D2F6EF08B9DF29A2DA;
IL2CPP_EXTERN_C String_t* _stringLiteral42F938A342C43051B45F7F9A926D0873F955F57B;
IL2CPP_EXTERN_C String_t* _stringLiteral4537C2C2CF0C54002B323BCE920F8D6E2CB11DB1;
IL2CPP_EXTERN_C String_t* _stringLiteral490D6738090D132EC81B149C5A99830BAE6234C9;
IL2CPP_EXTERN_C String_t* _stringLiteral4C2A173B480860EA830DDB08F3A05EEA242F94D8;
IL2CPP_EXTERN_C String_t* _stringLiteral53A9F49B7E11E91814DFD16C31B6DA90C74AAA9A;
IL2CPP_EXTERN_C String_t* _stringLiteral5684F3071933DB49B55A45583E7FE6BD607EF608;
IL2CPP_EXTERN_C String_t* _stringLiteral56C9CB5E98059CA91FFD6D40005E380317AD84FE;
IL2CPP_EXTERN_C String_t* _stringLiteral5EAB3542AA1E352D8F99B5BE745A63AD4B461B47;
IL2CPP_EXTERN_C String_t* _stringLiteral669F530C1559EDA978405057AF4C99A595A0CFF5;
IL2CPP_EXTERN_C String_t* _stringLiteral755AB96ECEBB113EA7AD9864F4466BB0358F3634;
IL2CPP_EXTERN_C String_t* _stringLiteral77FB105FFDC00D823DFDD96FA3179F4C6D2CCE5D;
IL2CPP_EXTERN_C String_t* _stringLiteral7B13C13D05D10897620C0D34BF444CD72DB19EF6;
IL2CPP_EXTERN_C String_t* _stringLiteral88903E9A51CB11E47CE333A9776E564FAD4F7DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral95F88BFA38BFC524EA0F5D26B11BEB67405611EE;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral9961C07DD002E8AE6267303EC5D75888DF462567;
IL2CPP_EXTERN_C String_t* _stringLiteral9F2796AFD3A7281DA951AEC335F09CD86B184C71;
IL2CPP_EXTERN_C String_t* _stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43;
IL2CPP_EXTERN_C String_t* _stringLiteralAADCBA6E9DD00D77369AF3DFD0B2536CE7836E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralAFA3595C376CB158D6E6CCDF879CE72A3D8F44C4;
IL2CPP_EXTERN_C String_t* _stringLiteralBC85761EAF69D5FC435FE2EF85D8F56E97550196;
IL2CPP_EXTERN_C String_t* _stringLiteralC24AEB9F54E9970F338BD30A2D95310CE8469FED;
IL2CPP_EXTERN_C String_t* _stringLiteralC39C1E6267CAC2CBEB6698B83C43EF17E1A4ABE1;
IL2CPP_EXTERN_C String_t* _stringLiteralC58CC3CEADC0A38646D98DA34EF503D5F8CEC135;
IL2CPP_EXTERN_C String_t* _stringLiteralCABCE693610BCC284BD0E64FA2988336566E3ED3;
IL2CPP_EXTERN_C String_t* _stringLiteralD476FE2A739519547D4B2E68BBA94B2240585B6E;
IL2CPP_EXTERN_C String_t* _stringLiteralD6417391D9B4AAD1F29906F50164D30472FF8E2E;
IL2CPP_EXTERN_C String_t* _stringLiteralD6E85A0F6970F8DFAF7516DBF8CB189A8279DC72;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A886899B8B17C1B72744C93F3C49693C53F403;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA76B7DD7BDCFDC0E39C0F6BFA23364ED36B0BA5;
IL2CPP_EXTERN_C String_t* _stringLiteralDD8AC4510AD9152261FE239651908BC72BBC9B47;
IL2CPP_EXTERN_C String_t* _stringLiteralE39BE21C437A58C94FDADCA408EB240947ED482D;
IL2CPP_EXTERN_C String_t* _stringLiteralEE78E15F7D17D1EEED5BD22C4FDBFB07DDCC813D;
IL2CPP_EXTERN_C String_t* _stringLiteralF05F87961343CBCD85A385B0D187C11C3F788AC9;
IL2CPP_EXTERN_C String_t* _stringLiteralFEC84A65F6EFA4337D1C5375745119D05D8535F9;
IL2CPP_EXTERN_C const RuntimeMethod* ARCursorRenderer__FrameUpdated_m37187EBEE1189D5D2D220EB28F93184558121E97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARCursorRenderer__OnSessionDeinitialized_m5A89DCE24A296DB4E37A6077596CDC76CF7E0850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARCursorRenderer__SessionInitialized_m6FEA44525B67C1BD158F8771353E1F14B7525BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARHitTester_OnAnyARSessionDidInitialize_m182FEB8AF45044254C30917EF135B90D49FFFA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARHitTester_OnSessionDeinitialized_m4495B281BD5C90ADD05BBA0E4BAF76AE2C3DB1F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mFCAB24EE80F348A99FE6AC6EF2BFD73953F03BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mF3303CEA45F41C7B8C656C2FFF78C17C38C0ED03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFA6AA78FA3FE3DEAAD16B7FAA1BF2C3A0CB0B348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m01F82648B3DECE1E62A17B97A8CD9551DD21146C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA7966CF5B0D3A1B49840681B8DD35F692C60B221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mC41C973E6E5FE7C23FB097D45F0C73373D593865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mBFE0C6B47348CBD2372EF814713F289CA527B4E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m00580A36D2665566EE3BCAE4B5A2C45B44A4C0D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5367B4E765FCD96CF95C26F7D57CAE0DF8B521B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6398CBE202D941F1CFFABE6D8B67E64AE62A4A47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m68CA8D52E972D997ABCD914E662D209CF3D6390D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m819A801B91A148F614C77F3E4F581D866B200638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m62EE67CA1745DC33D0939B76CF2304292B652F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6EDBF794FDA90ED3008549A0F6C72DA84615A21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9F695DD3B5A3450B2723A76ED53EEF1629BA22F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mABF93ED22D782CC4C6FD2CF852CA2885E1A1C110_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mBA3D2D3B4FD265B6F28401B318EE0EAD384BB5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC78D2074E48557A5D3BA1996F5F8DF98A80B6BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m8806B25243D00C26A0C3F6E6AC1BD1D91F9CEE85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA029D30C47CBBD66A13AB96CDA2ABA0731D8E27A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA562D157FF14878146E3ECEF1DF11F7383F0FAD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4CF658DC59B6FF64AC4F377562ECADC1A55CD020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBBE56CBC8530028C06050F2F7081AE7D0709745C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3FBB45A9D466C2F3DCB30B5122BF671B5A999591_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDC92C898FA2AF05EB4D723314738FEE79DB0EE26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m659498839F19E5F20B37BCDA6EA751EF74445788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1E764F119DDC62D8B86C24186CBA7A268E9D3092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m35DEE0ED5A4C6EA2F023040F235C76C450A20D92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m730305C78BA56FA3A3D5C465AC4930D1B9CAAAF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mBB19FEE8DC3EEC1E65B95C582AD1266813F107DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA63E5569B679BD015D3EEB541EE5D99158BF400E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m451B44D19BA4256832D8B46E419A6176263901A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarkerMappingManager_CreateSession_mE996F9BF24D5482C4E8E05451F1993C3B573F5E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarkerMappingManager_OnAnchorsShowBarcodeIfAble_m34B4BAAEE0476748364AF7187F3A5A27D8B3CCB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarkerMappingManager_OnConnectShowBarcodeIfAble_m88EC9C048D94B14F390BF0FE96CE963E75F01ABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarkerMappingManager_ToggleBarcodeDisplay_mA6E77EFE2CBB1D8DFC8FE3FAAA902128FA5FDAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarkerScanningManager_GotResult_m3648E0225D4E9EDDDFCA2EA2F2CB559960E377EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarkerScanningManager_ScanToJoinSession_m3ED388A85571800DD948A43C5F70FDC0B9B4DDBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarkerScanningManager_StartScanForMarkers_m06B89F27767F127B8D3A7598D5426FDC993A68B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarkerSyncSessionManager_AnchorsAdded_m35962FEEAC24259DB8A1D0F8F9795EB2F56D262D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarkerSyncSessionManager_BackToInitialization_mBE5297EA076EAA8755EF1B548BC319C477B14A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessagingManager_OnDidReceiveDataFromPeer_m4D466FF89BFB21D36FCA11CC9498D250DF767D5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkStatus_OnConnectionDidFailWithError_m8FEDC44584B76B67AA4D32DA948E10D3D16EB0E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkStatus_OnNetworkConnected_m3C7601D0A09EE10A4775CA4758B348D2BE4D5130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkStatus_OnNetworkDeinitialized_mA8899B6C5A13D1CD2D80034D7B9E70F502B248AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkStatus_OnNetworkDisconnected_m3B055430BA4109E3796FBBA839353E44FA834171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkStatus_OnNetworkingInitialized_mDC19EBCFCA51DA7812996A8F970C26ED120A74F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkStatus_OnPeerAdded_mFD4FD1EF70ECBD1DFC7FB6B5DDCC6CFAC213D33A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkStatus_OnPeerRemoved_m8EC1E7BE4654C88680B83164B18DB7F22C849411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisSyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269_mD4B075FDA35605597EA8AE6567C5E29B297AAD66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mE1084A9A28525FEA3D226B69D85184B4548C411A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PeerPoseVisualizer_OnAnyInitialized_m5B35B1E4A94E0D329C190538E7DB152EC78248DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PeerPoseVisualizer_OnDeinitialized_m5299F63E0A0D6852119DA99089299E602359B868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PeerPoseVisualizer_OnDidAddPeer_m70CE8CE575E5C7AA7B260EAD0A6E06896406FB39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PeerPoseVisualizer_OnDidRemovePeer_mAFF888981F39E38AC9822C90FC6802CA3EFEA924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PeerPoseVisualizer_OnPeerPoseReceived_m5F27735A506CAC94875FF5F62CD5A78A217DEEF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerColor_OnConnected_mF7F06E2CCC88FAEF3B6EEF7BECA3DC53299A2081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerColor_OnDeinitialized_mFDC613AFC78D64281F582C44D1921E06B4D2EF2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerColor_OnDisconnected_mBF07478A671BB0B264FD12A8F0CAFB8B7110DFA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerColor_OnNetworkInitialized_m9299C67222B2535E71F98B559667540340E163C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_mDA35F02F535B1D0AA77658176EECBFBAB97BF3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScrollingLog_AddLogEntry_m47CB2676F6528E7CC6A4DEB28D504D7265A4FE38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SendDebugMessageHelper_OnDeinitialized_m8DC002DED8D800BACABC12B33F71B8156F0CC4E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SendDebugMessageHelper_OnPeerDataReceived_mCA2AAEFE92787CADB5412DDD48ED60A05FC7618E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SendDebugMessageHelper__NetworkingInitialized_mC1AD8B7D6D12004E93446541361B6711AED9B529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SessionIDField_OnWillDeinitialize_mBCF9017A406E185553EEB8532FA142A9D767479A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SessionIDField__NetworkingInitialized_m8B670C968500E273A59D143FC867F751AE8A51AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateHelpText_OnAnyInitialized_m6A4CAD4964EDD49EF568EEA20F065A0442763988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateHelpText_OnDeinitialized_m1B0FEE1762B018F3CD517C0CD2D9171A14439823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateHelpText_OnPeerStateReceived_m237FF89629CD496EF6B87C6475AE90D0C361F20C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateTrackedPeer_OnAnyInitialized_mFF5726B7B441BAA7A5E9D7B0CA0CEE158E7197A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateTrackedPeer_OnDeinitialized_m84907F56C0B5059556D5A56BE8BFDBFA3235ABC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateTrackedPeer_OnPeerStateReceived_m5130A11309FB8D9A82636E4A07A846D0621E7C2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateTrackingList_OnAnyInitialized_m768210498B5B6F3C9358185F0DA1739FA8B8EA00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateTrackingList_OnDidAddPeer_mF6A55D9FE698FE858FFCE504D99ECCBB0F133731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateTrackingList_OnDidConnect_mA25A9E0C0FAE4F7788A793EBCDDC7885F99C2A4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateTrackingList_OnDidRemovePeer_mB3E11BAEF179E47DA4D3AB0489A4242E675BD243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateTrackingList_OnWillDeinitialize_mF2DC27918883E31E4462355689350839B979D256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncStateTrackingList_OnWillDisconnect_m6F0BC882425283A01557701D39DE622D1D253C00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TransportType_tEC575A6B09F6A3D419478D6C956F5A4BECEBDB07_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector3>
struct BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>
struct Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB325410475458B1F15521BA2430479DF86B26868* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t41B0A293481FD22C831D2399139561901CBDA06D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD2ED1D6BC2DAE11D0D365D4CE6A9F2453930A16E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,UnityEngine.Color>
struct Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t332EE51C6A59179D783058FE49985CDFACD9910E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t8A7534EC2B3D292104051326F99F587B14320DE6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0DB6927D941DE1A0CAAE488B7AC1E68000C37657* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,System.String>
struct Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3B54A21F375D8F27CD451FBC2F7DE11E4EB1AA6F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t98E3C8C67E931B168B16E3622AF966627624EF85* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF378BD8C18CAEBA2136DF04DE22B274D28D4A703* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,UnityEngine.Color>
struct Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA527FA9684808232B90CEDBFD018B8ABDDE802C6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE3B74F0CAAD0EF32A074C2D5D0BED6A98854DF90* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t55AB0CB799AEDD0E9A14156831F2D9056B7D6A59* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,System.String>
struct Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE2E006F373AB98A936D5690119394F85DB578938* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC29C6C2307EFD299DA0E67DEEF6084927C0C9855* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t86A12B2D9B15179B07541283307D4565E565A180* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.Anchors.IARAnchor>
struct ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.HitTest.IARHitTestResult>
struct ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};
struct Il2CppArrayBounds;

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer
struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_contexts
	Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9* ____contexts_2;
	// System.IO.Stream Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::<Stream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CStreamU3Ek__BackingField_4;
};

struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7_StaticFields
{
	// System.Object Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreamsLock
	RuntimeObject* ____runningStreamsLock_0;
	// System.Collections.Generic.HashSet`1<System.IO.Stream> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreams
	HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F* ____runningStreams_1;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E  : public RuntimeObject
{
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;
};

// Niantic.ARDK.Utilities.Marker.MarkerMetadata
struct MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680  : public RuntimeObject
{
	// Niantic.ARDK.Utilities.Marker.MarkerMetadata/MarkerSource Niantic.ARDK.Utilities.Marker.MarkerMetadata::<Source>k__BackingField
	int32_t ___U3CSourceU3Ek__BackingField_0;
	// System.String Niantic.ARDK.Utilities.Marker.MarkerMetadata::SessionIdentifier
	String_t* ___SessionIdentifier_1;
	// System.Byte[] Niantic.ARDK.Utilities.Marker.MarkerMetadata::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_2;
	// Niantic.ARDK.Utilities.Marker.IMetadataSerializer Niantic.ARDK.Utilities.Marker.MarkerMetadata::<Serializer>k__BackingField
	RuntimeObject* ___U3CSerializerU3Ek__BackingField_3;
};

// Niantic.ARDKExamples.MarkerSync.MarkerScanningManager
struct MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E  : public RuntimeObject
{
	// Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager Niantic.ARDKExamples.MarkerSync.MarkerScanningManager::_manager
	MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* ____manager_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Niantic.ARDKExamples.Pong.MessagingManager
struct MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2  : public RuntimeObject
{
	// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDKExamples.Pong.MessagingManager::_networking
	RuntimeObject* ____networking_0;
	// Niantic.ARDKExamples.Pong.GameController Niantic.ARDKExamples.Pong.MessagingManager::_controller
	GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* ____controller_1;
	// Niantic.ARDKExamples.Pong.BallBehaviour Niantic.ARDKExamples.Pong.MessagingManager::_ball
	BallBehaviour_t27961BAEAFF7E00DDBCDF3A3BEEA129B39935F0A* ____ball_2;
	// System.IO.MemoryStream Niantic.ARDKExamples.Pong.MessagingManager::_builderMemoryStream
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____builderMemoryStream_3;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Niantic.ARDK.Utilities.Marker.ZXingMarkerGenerator/MarkerGenerationResult
struct MarkerGenerationResult_t048FE5A946C2CC7D9DBE03878F3556A34A3494E0  : public RuntimeObject
{
	// UnityEngine.Texture2D Niantic.ARDK.Utilities.Marker.ZXingMarkerGenerator/MarkerGenerationResult::<Texture>k__BackingField
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CTextureU3Ek__BackingField_0;
	// UnityEngine.Color32[] Niantic.ARDK.Utilities.Marker.ZXingMarkerGenerator/MarkerGenerationResult::<RawPixels>k__BackingField
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___U3CRawPixelsU3Ek__BackingField_1;
	// System.String Niantic.ARDK.Utilities.Marker.ZXingMarkerGenerator/MarkerGenerationResult::<EncodedText>k__BackingField
	String_t* ___U3CEncodedTextU3Ek__BackingField_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
struct Enumerator_tBDE8A591E834C7B4748BA5ABD2CA972CF8AC5BC7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>
struct KeyValuePair_2_t2F01DDB2538FFD4A46ED65779F00DFC868C43A98 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs
struct ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63 
{
	union
	{
		struct
		{
		};
		uint8_t ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63__padding[1];
	};
};

// Niantic.ARDK.AR.ARSessionEventArgs.ARSessionDeinitializedArgs
struct ARSessionDeinitializedArgs_t3380997AC55EC746D573D7C6AE35691944859A3C 
{
	union
	{
		struct
		{
		};
		uint8_t ARSessionDeinitializedArgs_t3380997AC55EC746D573D7C6AE35691944859A3C__padding[1];
	};
};

// Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs
struct AnchorsArgs_t58711712713F460F8E05B14E958C48A51D111209 
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.Anchors.IARAnchor> Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs::<Anchors>k__BackingField
	ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E* ___U3CAnchorsU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs
struct AnchorsArgs_t58711712713F460F8E05B14E958C48A51D111209_marshaled_pinvoke
{
	ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E* ___U3CAnchorsU3Ek__BackingField_0;
};
// Native definition for COM marshalling of Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs
struct AnchorsArgs_t58711712713F460F8E05B14E958C48A51D111209_marshaled_com
{
	ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E* ___U3CAnchorsU3Ek__BackingField_0;
};

// Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs
struct AnyARNetworkingInitializedArgs_tE7DFF4BAAA921B3B4CB96D9996A255A660491BC5 
{
	// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs::<ARNetworking>k__BackingField
	RuntimeObject* ___U3CARNetworkingU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs
struct AnyARNetworkingInitializedArgs_tE7DFF4BAAA921B3B4CB96D9996A255A660491BC5_marshaled_pinvoke
{
	RuntimeObject* ___U3CARNetworkingU3Ek__BackingField_0;
};
// Native definition for COM marshalling of Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs
struct AnyARNetworkingInitializedArgs_tE7DFF4BAAA921B3B4CB96D9996A255A660491BC5_marshaled_com
{
	RuntimeObject* ___U3CARNetworkingU3Ek__BackingField_0;
};

// Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs
struct AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E 
{
	// Niantic.ARDK.AR.IARSession Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs::<Session>k__BackingField
	RuntimeObject* ___U3CSessionU3Ek__BackingField_0;
	// System.Boolean Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs::<_IsLocal>k__BackingField
	bool ___U3C_IsLocalU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs
struct AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E_marshaled_pinvoke
{
	RuntimeObject* ___U3CSessionU3Ek__BackingField_0;
	int32_t ___U3C_IsLocalU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs
struct AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E_marshaled_com
{
	RuntimeObject* ___U3CSessionU3Ek__BackingField_0;
	int32_t ___U3C_IsLocalU3Ek__BackingField_1;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs
struct AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 
{
	// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs::Networking
	RuntimeObject* ___Networking_0;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs
struct AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2_marshaled_pinvoke
{
	RuntimeObject* ___Networking_0;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs
struct AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2_marshaled_com
{
	RuntimeObject* ___Networking_0;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer::_context
	_TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE* ____context_5;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer::_context
	_TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208* ____context_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs
struct ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs::<Self>k__BackingField
	RuntimeObject* ___U3CSelfU3Ek__BackingField_0;
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs::<Host>k__BackingField
	RuntimeObject* ___U3CHostU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs
struct ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF_marshaled_pinvoke
{
	RuntimeObject* ___U3CSelfU3Ek__BackingField_0;
	RuntimeObject* ___U3CHostU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs
struct ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF_marshaled_com
{
	RuntimeObject* ___U3CSelfU3Ek__BackingField_0;
	RuntimeObject* ___U3CHostU3Ek__BackingField_1;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs
struct ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC 
{
	// System.UInt32 Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs::<ErrorCode>k__BackingField
	uint32_t ___U3CErrorCodeU3Ek__BackingField_0;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs
struct DeinitializedArgs_t9E20E228D8359F47DB613E62FF5ED0BC3548A24F 
{
	union
	{
		struct
		{
		};
		uint8_t DeinitializedArgs_t9E20E228D8359F47DB613E62FF5ED0BC3548A24F__padding[1];
	};
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs
struct DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 
{
	union
	{
		struct
		{
		};
		uint8_t DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462__padding[1];
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs
struct FrameUpdatedArgs_t66A5CACBFB0914FFD132D8A7FBEC68152BDBDBA0 
{
	// Niantic.ARDK.AR.IARFrame Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs::<Frame>k__BackingField
	RuntimeObject* ___U3CFrameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs
struct FrameUpdatedArgs_t66A5CACBFB0914FFD132D8A7FBEC68152BDBDBA0_marshaled_pinvoke
{
	RuntimeObject* ___U3CFrameU3Ek__BackingField_0;
};
// Native definition for COM marshalling of Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs
struct FrameUpdatedArgs_t66A5CACBFB0914FFD132D8A7FBEC68152BDBDBA0_marshaled_com
{
	RuntimeObject* ___U3CFrameU3Ek__BackingField_0;
};

// System.Guid
struct Guid_t 
{
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
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs
struct PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs::<Peer>k__BackingField
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs
struct PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43_marshaled_pinvoke
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs
struct PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43_marshaled_com
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs
struct PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::<Peer>k__BackingField
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	// System.UInt32 Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_1;
	// Niantic.ARDK.Networking.TransportType Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::<TransportType>k__BackingField
	uint8_t ___U3CTransportTypeU3Ek__BackingField_2;
	// System.Byte[] Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_3;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs
struct PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514_marshaled_pinvoke
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	uint32_t ___U3CTagU3Ek__BackingField_1;
	uint8_t ___U3CTransportTypeU3Ek__BackingField_2;
	Il2CppSafeArray/*NONE*/* ____data_3;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs
struct PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514_marshaled_com
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	uint32_t ___U3CTagU3Ek__BackingField_1;
	uint8_t ___U3CTransportTypeU3Ek__BackingField_2;
	Il2CppSafeArray/*NONE*/* ____data_3;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs
struct PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs::<Peer>k__BackingField
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs
struct PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF_marshaled_pinvoke
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs
struct PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF_marshaled_com
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};

// Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs
struct PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs::<Peer>k__BackingField
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	// Niantic.ARDK.AR.Networking.PeerState Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs
struct PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D_marshaled_pinvoke
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	int32_t ___U3CStateU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs
struct PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D_marshaled_com
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	int32_t ___U3CStateU3Ek__BackingField_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Vector3Serializer
struct Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D  : public BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE
{
};

struct Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Vector3Serializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Vector3Serializer::Instance
	Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D* ___Instance_1;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>
struct Enumerator_t510EC00766B9414A0E16250124C9A3B3AD48135E 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t2F01DDB2538FFD4A46ED65779F00DFC868C43A98 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Niantic.ARDKExamples.MarkerSync.MarkerMappingManager
struct MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3  : public RuntimeObject
{
	// Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::_manager
	MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* ____manager_0;
	// System.String Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::_sessionIdentifier
	String_t* ____sessionIdentifier_1;
	// System.Boolean Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::_foundPlane
	bool ____foundPlane_2;
	// System.Boolean Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::_generatedBarcode
	bool ____generatedBarcode_3;
};

struct MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_StaticFields
{
	// UnityEngine.Quaternion Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::_first
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____first_4;
	// UnityEngine.Quaternion Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::_mask
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____mask_5;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
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
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs
struct PeerPoseReceivedArgs_t3EFA40B68DEFDEABBD5132C9AC75A98E0B6AC083 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs::<Peer>k__BackingField
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs::<Pose>k__BackingField
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CPoseU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs
struct PeerPoseReceivedArgs_t3EFA40B68DEFDEABBD5132C9AC75A98E0B6AC083_marshaled_pinvoke
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CPoseU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs
struct PeerPoseReceivedArgs_t3EFA40B68DEFDEABBD5132C9AC75A98E0B6AC083_marshaled_com
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CPoseU3Ek__BackingField_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<Niantic.ARDK.Utilities.Marker.MarkerMetadata>
struct Action_1_tE87A7548CA523908E824A6BBF45F5E03EA42E406  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs>
struct ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionDeinitializedArgs>
struct ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>
struct ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs>
struct ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>
struct ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs>
struct ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>
struct ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>
struct ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>
struct ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs>
struct ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>
struct ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>
struct ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs>
struct ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>
struct ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>
struct ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Niantic.ARDKExamples.Common.Helpers.ARAnchorAttachment
struct ARAnchorAttachment_t35EA0933842F1CE4D0FA4511A3269B982FA8B85B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Niantic.ARDK.AR.Anchors.IARAnchor Niantic.ARDKExamples.Common.Helpers.ARAnchorAttachment::AttachedAnchor
	RuntimeObject* ___AttachedAnchor_4;
	// UnityEngine.Matrix4x4 Niantic.ARDKExamples.Common.Helpers.ARAnchorAttachment::Offset
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___Offset_5;
};

// Niantic.ARDKExamples.Helpers.ARCursorRenderer
struct ARCursorRenderer_tA570D175748C1CF829C5834B58566ADD6010DDD6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Niantic.ARDKExamples.Helpers.ARCursorRenderer::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_4;
	// UnityEngine.GameObject Niantic.ARDKExamples.Helpers.ARCursorRenderer::CursorObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CursorObject_5;
	// UnityEngine.GameObject Niantic.ARDKExamples.Helpers.ARCursorRenderer::_spawnedCursorObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____spawnedCursorObject_6;
	// Niantic.ARDK.AR.IARSession Niantic.ARDKExamples.Helpers.ARCursorRenderer::_session
	RuntimeObject* ____session_7;
};

// Niantic.ARDKExamples.Helpers.ARHitTester
struct ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Niantic.ARDKExamples.Helpers.ARHitTester::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_4;
	// Niantic.ARDK.AR.HitTest.ARHitTestResultType Niantic.ARDKExamples.Helpers.ARHitTester::HitTestType
	int32_t ___HitTestType_5;
	// UnityEngine.GameObject Niantic.ARDKExamples.Helpers.ARHitTester::PlacementObjectPf
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlacementObjectPf_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Niantic.ARDKExamples.Helpers.ARHitTester::_placedObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____placedObjects_7;
	// Niantic.ARDK.AR.IARSession Niantic.ARDKExamples.Helpers.ARHitTester::_session
	RuntimeObject* ____session_8;
};

// Niantic.ARDKExamples.Pong.BallBehaviour
struct BallBehaviour_t27961BAEAFF7E00DDBCDF3A3BEEA129B39935F0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Niantic.ARDKExamples.Pong.GameController Niantic.ARDKExamples.Pong.BallBehaviour::Controller
	GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* ___Controller_4;
	// UnityEngine.Vector3 Niantic.ARDKExamples.Pong.BallBehaviour::_pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____pos_5;
	// System.Single Niantic.ARDKExamples.Pong.BallBehaviour::_lrBound
	float ____lrBound_6;
	// System.Single Niantic.ARDKExamples.Pong.BallBehaviour::_fbBound
	float ____fbBound_7;
	// System.Single Niantic.ARDKExamples.Pong.BallBehaviour::_initialVelocity
	float ____initialVelocity_8;
	// UnityEngine.Vector3 Niantic.ARDKExamples.Pong.BallBehaviour::_velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____velocity_9;
	// UnityEngine.Vector3 Niantic.ARDKExamples.Pong.BallBehaviour::_initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialPosition_10;
	// System.Boolean Niantic.ARDKExamples.Pong.BallBehaviour::_isGameStarted
	bool ____isGameStarted_11;
	// System.Boolean Niantic.ARDKExamples.Pong.BallBehaviour::_isHost
	bool ____isHost_12;
	// Niantic.ARDKExamples.Pong.MessagingManager Niantic.ARDKExamples.Pong.BallBehaviour::_messagingManager
	MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* ____messagingManager_13;
};

// Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay
struct BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.RawImage Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::_barcodeImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ____barcodeImage_4;
	// UnityEngine.UI.RawImage Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::_borderImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ____borderImage_5;
	// UnityEngine.UI.RawImage Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::_backgroundImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ____backgroundImage_6;
	// ZXing.BarcodeFormat Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::_format
	int32_t ____format_7;
	// UnityEngine.Vector2 Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::<Center>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CCenterU3Ek__BackingField_8;
	// UnityEngine.Vector2[] Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::<Points>k__BackingField
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___U3CPointsU3Ek__BackingField_9;
	// System.Boolean Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::_generatedCode
	bool ____generatedCode_10;
	// System.Boolean Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::_isShowing
	bool ____isShowing_11;
};

// Niantic.ARDKExamples.Configuration.ConfigHelper
struct ConfigHelper_tE36F8DCB3025DD56BDAEFD2405DA4680664469F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Niantic.ARDKExamples.Configuration.ConfigHelper::_contextAwarenessUrl
	String_t* ____contextAwarenessUrl_4;
};

// Niantic.ARDKExamples.Pong.GameController
struct GameController_t3D8F63A63632C0B7E130B6477812C19954642A09  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Niantic.ARDKExamples.Pong.GameController::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_4;
	// Niantic.ARDK.Extensions.FeaturePreloadManager Niantic.ARDKExamples.Pong.GameController::preloadManager
	FeaturePreloadManager_t2D4AE1E9A5ACD242A294CC1041B72C711D8DC1FC* ___preloadManager_5;
	// UnityEngine.UI.Button Niantic.ARDKExamples.Pong.GameController::joinButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___joinButton_6;
	// UnityEngine.GameObject Niantic.ARDKExamples.Pong.GameController::startGameButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startGameButton_7;
	// UnityEngine.UI.Text Niantic.ARDKExamples.Pong.GameController::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_8;
	// UnityEngine.GameObject Niantic.ARDKExamples.Pong.GameController::playingFieldPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playingFieldPrefab_9;
	// UnityEngine.GameObject Niantic.ARDKExamples.Pong.GameController::ballPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ballPrefab_10;
	// UnityEngine.GameObject Niantic.ARDKExamples.Pong.GameController::playerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerPrefab_11;
	// UnityEngine.GameObject Niantic.ARDKExamples.Pong.GameController::_ball
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____ball_12;
	// UnityEngine.GameObject Niantic.ARDKExamples.Pong.GameController::_player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____player_13;
	// UnityEngine.GameObject Niantic.ARDKExamples.Pong.GameController::_playingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____playingField_14;
	// UnityEngine.GameObject Niantic.ARDKExamples.Pong.GameController::_opponent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____opponent_15;
	// System.Int32 Niantic.ARDKExamples.Pong.GameController::RedScore
	int32_t ___RedScore_16;
	// System.Int32 Niantic.ARDKExamples.Pong.GameController::BlueScore
	int32_t ___BlueScore_17;
	// UnityEngine.Vector3 Niantic.ARDKExamples.Pong.GameController::_location
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____location_18;
	// System.Boolean Niantic.ARDKExamples.Pong.GameController::_recentlyHit
	bool ____recentlyHit_19;
	// System.Int32 Niantic.ARDKExamples.Pong.GameController::_hitLockout
	int32_t ____hitLockout_20;
	// System.Boolean Niantic.ARDKExamples.Pong.GameController::_objectsSpawned
	bool ____objectsSpawned_21;
	// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDKExamples.Pong.GameController::_arNetworking
	RuntimeObject* ____arNetworking_22;
	// Niantic.ARDKExamples.Pong.BallBehaviour Niantic.ARDKExamples.Pong.GameController::_ballBehaviour
	BallBehaviour_t27961BAEAFF7E00DDBCDF3A3BEEA129B39935F0A* ____ballBehaviour_23;
	// Niantic.ARDKExamples.Pong.MessagingManager Niantic.ARDKExamples.Pong.GameController::_messagingManager
	MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* ____messagingManager_24;
	// Niantic.ARDK.Networking.IPeer Niantic.ARDKExamples.Pong.GameController::_host
	RuntimeObject* ____host_25;
	// Niantic.ARDK.Networking.IPeer Niantic.ARDKExamples.Pong.GameController::_self
	RuntimeObject* ____self_26;
	// System.Boolean Niantic.ARDKExamples.Pong.GameController::_isHost
	bool ____isHost_27;
	// System.Boolean Niantic.ARDKExamples.Pong.GameController::_isGameStarted
	bool ____isGameStarted_28;
	// System.Boolean Niantic.ARDKExamples.Pong.GameController::_isSynced
	bool ____isSynced_29;
};

// Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager
struct MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::_barcodeDisplay
	BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* ____barcodeDisplay_4;
	// UnityEngine.GameObject Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::_startupUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____startupUI_5;
	// UnityEngine.UI.Button Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::_createButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____createButton_6;
	// UnityEngine.UI.Button Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::_scanButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____scanButton_7;
	// UnityEngine.UI.Button Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::_resetButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____resetButton_8;
	// UnityEngine.UI.Text Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::_scanPlaneReminder
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____scanPlaneReminder_9;
	// Niantic.ARDKExamples.MarkerSync.MarkerMappingManager Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::_mapper
	MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* ____mapper_10;
	// Niantic.ARDKExamples.MarkerSync.MarkerScanningManager Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::_scanner
	MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* ____scanner_11;
	// Niantic.ARDK.AR.IARSession Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::<ARSession>k__BackingField
	RuntimeObject* ___U3CARSessionU3Ek__BackingField_12;
	// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::<ARNetworking>k__BackingField
	RuntimeObject* ___U3CARNetworkingU3Ek__BackingField_13;
	// System.Action Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::UpdateTick
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdateTick_14;
};

// Niantic.ARDKExamples.Helpers.NetworkStatus
struct NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image Niantic.ARDKExamples.Helpers.NetworkStatus::ConnectedIndicator
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ConnectedIndicator_4;
	// UnityEngine.UI.Text Niantic.ARDKExamples.Helpers.NetworkStatus::ConnectedIndicatorText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ConnectedIndicatorText_5;
	// System.Int32 Niantic.ARDKExamples.Helpers.NetworkStatus::PeerIdLimit
	int32_t ___PeerIdLimit_6;
	// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDKExamples.Helpers.NetworkStatus::_networking
	RuntimeObject* ____networking_7;
	// System.UInt32 Niantic.ARDKExamples.Helpers.NetworkStatus::_lastNetworkError
	uint32_t ____lastNetworkError_8;
	// System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,UnityEngine.Color> Niantic.ARDKExamples.Helpers.NetworkStatus::_indicatorColors
	Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F* ____indicatorColors_9;
	// System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,System.String> Niantic.ARDKExamples.Helpers.NetworkStatus::_indicatorMessages
	Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* ____indicatorMessages_10;
};

// Niantic.ARDKExamples.Helpers.PeerPoseVisualizer
struct PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::_peerIndicatorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____peerIndicatorPrefab_4;
	// UnityEngine.UI.Text Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::_togglePoseText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____togglePoseText_5;
	// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::_arNetworking
	RuntimeObject* ____arNetworking_6;
	// System.Boolean Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::_isPoseBroadcastingEnabled
	bool ____isPoseBroadcastingEnabled_7;
	// System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject> Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::_peerGameObjects
	Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* ____peerGameObjects_8;
};

// Niantic.ARDKExamples.Helpers.PlayerColor
struct PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image Niantic.ARDKExamples.Helpers.PlayerColor::ColorIndicator
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ColorIndicator_4;
	// UnityEngine.Color Niantic.ARDKExamples.Helpers.PlayerColor::_color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____color_6;
	// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDKExamples.Helpers.PlayerColor::_networking
	RuntimeObject* ____networking_7;
};

struct PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_StaticFields
{
	// UnityEngine.Color Niantic.ARDKExamples.Helpers.PlayerColor::ColorDefault
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ColorDefault_5;
};

// Niantic.ARDKExamples.Helpers.ScrollingLog
struct ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Niantic.ARDKExamples.Helpers.ScrollingLog::LogEntryFontSize
	int32_t ___LogEntryFontSize_4;
	// System.Int32 Niantic.ARDKExamples.Helpers.ScrollingLog::MaxLogCount
	int32_t ___MaxLogCount_5;
	// UnityEngine.UI.VerticalLayoutGroup Niantic.ARDKExamples.Helpers.ScrollingLog::LogHistory
	VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* ___LogHistory_6;
	// UnityEngine.UI.Text Niantic.ARDKExamples.Helpers.ScrollingLog::LogEntryPrefab
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LogEntryPrefab_7;
	// System.Collections.Generic.List`1<UnityEngine.UI.Text> Niantic.ARDKExamples.Helpers.ScrollingLog::_logEntries
	List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* ____logEntries_8;
};

struct ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_StaticFields
{
	// Niantic.ARDKExamples.Helpers.ScrollingLog Niantic.ARDKExamples.Helpers.ScrollingLog::_instance
	ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0* ____instance_9;
};

// Niantic.ARDKExamples.Helpers.SendDebugMessageHelper
struct SendDebugMessageHelper_tCC3AA20A92A6014A41FF87A06ECAED10462C3196  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDKExamples.Helpers.SendDebugMessageHelper::_networking
	RuntimeObject* ____networking_5;
};

// Niantic.ARDKExamples.Helpers.SessionIDGenerator
struct SessionIDGenerator_tE061B3D4180AE28BC0B464F61BFA40FD6F8920C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button Niantic.ARDKExamples.Helpers.SessionIDGenerator::generateButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___generateButton_4;
	// Niantic.ARDKExamples.Helpers.SessionIDField Niantic.ARDKExamples.Helpers.SessionIDGenerator::idField
	SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* ___idField_5;
};

// Niantic.ARDKExamples.Helpers.SessionStartGatekeeper
struct SessionStartGatekeeper_t952D9782379CF47F611D77EDDBAD6F0CACCD234D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField Niantic.ARDKExamples.Helpers.SessionStartGatekeeper::idField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___idField_4;
	// UnityEngine.UI.Button Niantic.ARDKExamples.Helpers.SessionStartGatekeeper::startButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___startButton_5;
};

// Niantic.ARDKExamples.Helpers.SyncStateHelpText
struct SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Niantic.ARDKExamples.Helpers.SyncStateHelpText::_helpText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____helpText_4;
	// UnityEngine.UI.Image Niantic.ARDKExamples.Helpers.SyncStateHelpText::_backdrop
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____backdrop_5;
	// System.Boolean Niantic.ARDKExamples.Helpers.SyncStateHelpText::_usingQR
	bool ____usingQR_6;
	// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDKExamples.Helpers.SyncStateHelpText::_arNetworking
	RuntimeObject* ____arNetworking_7;
	// System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,System.String> Niantic.ARDKExamples.Helpers.SyncStateHelpText::_hostHelpText
	Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* ____hostHelpText_9;
	// System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,System.String> Niantic.ARDKExamples.Helpers.SyncStateHelpText::_clientTextOverride
	Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* ____clientTextOverride_10;
	// System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,System.String> Niantic.ARDKExamples.Helpers.SyncStateHelpText::_qrHostHelpTextOverride
	Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* ____qrHostHelpTextOverride_11;
	// System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,System.String> Niantic.ARDKExamples.Helpers.SyncStateHelpText::_qrClientHelpTextOverride
	Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* ____qrClientHelpTextOverride_12;
};

// Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer
struct SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::_connectedIndicator
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____connectedIndicator_4;
	// UnityEngine.UI.Text Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::_connectedIndicatorText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____connectedIndicatorText_5;
	// System.Int32 Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::_peerIdLimit
	int32_t ____peerIdLimit_6;
	// Niantic.ARDK.Networking.IPeer Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::_trackedPeer
	RuntimeObject* ____trackedPeer_7;
	// System.Boolean Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::_isSelf
	bool ____isSelf_8;
	// System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,UnityEngine.Color> Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::_indicatorColors
	Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* ____indicatorColors_9;
	// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::_arNetworking
	RuntimeObject* ____arNetworking_10;
};

// Niantic.ARDKExamples.Helpers.SyncStateTrackingList
struct SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.VerticalLayoutGroup Niantic.ARDKExamples.Helpers.SyncStateTrackingList::_peerTrackers
	VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* ____peerTrackers_4;
	// Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer Niantic.ARDKExamples.Helpers.SyncStateTrackingList::_peerTrackerPrefab
	SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* ____peerTrackerPrefab_5;
	// System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject> Niantic.ARDKExamples.Helpers.SyncStateTrackingList::_peerTrackerDict
	Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* ____peerTrackerDict_6;
	// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDKExamples.Helpers.SyncStateTrackingList::_arNetworking
	RuntimeObject* ____arNetworking_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleWidth
	bool ___m_ChildScaleWidth_17;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleHeight
	bool ___m_ChildScaleHeight_18;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ReverseArrangement
	bool ___m_ReverseArrangement_19;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// Niantic.ARDKExamples.Helpers.SessionIDField
struct SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E  : public InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140
{
	// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDKExamples.Helpers.SessionIDField::_networking
	RuntimeObject* ____networking_76;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m3BB4030170487D79DE001F30AC4B138AC3601A47_gshared (ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector3>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_mF3303CEA45F41C7B8C656C2FFF78C17C38C0ED03_gshared (BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item1, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector3>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BaseItemSerializer_1_Deserialize_mFCAB24EE80F348A99FE6AC6EF2BFD73953F03BB1_gshared (BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m30121D13E385306162443AAA2316CB0C55F14CCA_gshared (ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E_gshared (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507_gshared (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionDeinitializedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m415EC7077DBE8CFB79ECD09F210F1F5012B40959_gshared (ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE_gshared (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64_gshared (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1_gshared (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034_gshared (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_mDE16F0ADC31F58EA85D854D2E7333491E8BF5C55_gshared (ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0_gshared (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Color>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Dictionary_2_get_Item_m0A790298366643E0EF45A36D27E6ABC1955C3DF0_gshared (Dictionary_2_t02712D85A437174C466DE8AAC0A7E57F4A02FDDA* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m504750EDD1E892E04F507E93D04DABE88540A2C2_gshared (Dictionary_2_t02712D85A437174C466DE8AAC0A7E57F4A02FDDA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Color>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m99CB69B0EFEB92DD82BC26FEFAB1547D07E3B18C_gshared (Dictionary_2_t02712D85A437174C466DE8AAC0A7E57F4A02FDDA* __this, int32_t ___key0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_mCDF11A2B25962AC5C0AF90655A8656E0F1B866C9_gshared (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m001EE51831C81CE4C6BACD6668380FA4BEB6572A_gshared (ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m617E4CAEC2E02F493168C36E8386888F234D52E6_gshared (ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336_gshared (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m159785A12ADB6402C70685F334C688D7B77119C1_gshared (ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m3BB4030170487D79DE001F30AC4B138AC3601A47 (ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m3BB4030170487D79DE001F30AC4B138AC3601A47_gshared)(__this, ___object0, ___method1, method);
}
// System.Byte[] Niantic.ARDKExamples.Pong.MessagingManager::SerializeVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessagingManager_SerializeVector3_m6FBDD30E7305A3CCD6EC78D761C8756860B37209 (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Byte[] Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::CopyData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PeerDataReceivedArgs_CopyData_mD5E32ECFC23052C9667E55A0EBB17FC4F1951A5B (PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514* __this, const RuntimeMethod* method) ;
// System.UInt32 Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t PeerDataReceivedArgs_get_Tag_m40BCD818739E964C1B6D0BC363D44A77155E9962_inline (PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Niantic.ARDKExamples.Pong.MessagingManager::DeserializeVector3(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MessagingManager_DeserializeVector3_mA28002A6AA72C632698CD3FEC170E65FDD9308EA (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Pong.BallBehaviour::Hit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallBehaviour_Hit_mB4A900F5BC7C1DCB718807652872298A753D17EA (BallBehaviour_t27961BAEAFF7E00DDBCDF3A3BEEA129B39935F0A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Pong.GameController::SetBallLocation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SetBallLocation_mDD74E03D1B0228DCFDB0AC147FEC8E13943459B8 (GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Pong.GameController::InstantiateObjects(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_InstantiateObjects_mE73F0BA43284DC093DB4541B1E8CAE7CD93977F1 (GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3 (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector3>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_mF3303CEA45F41C7B8C656C2FFF78C17C38C0ED03 (BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))BaseItemSerializer_1_Serialize_mF3303CEA45F41C7B8C656C2FFF78C17C38C0ED03_gshared)(__this, ___serializer0, ___item1, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryDeserializer__ctor_mDD79DF6C7453224BEE20972579E565AA72533DEF (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector3>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BaseItemSerializer_1_Deserialize_mFCAB24EE80F348A99FE6AC6EF2BFD73953F03BB1 (BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_mFCAB24EE80F348A99FE6AC6EF2BFD73953F03BB1_gshared)(__this, ___deserializer0, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsGyroscope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsGyroscope_m98477EC99D88396F076A93EF5C28A6129DC4E211 (const RuntimeMethod* method) ;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gyroscope::set_updateInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gyroscope_set_updateInterval_m477CB8AF6D656813C14467CCB62EDC3BF1383925 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, float ___value0, const RuntimeMethod* method) ;
// Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::get_BarcodeDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* MarkerSyncSessionManager_get_BarcodeDisplay_m0AAD96722DCF888357FC59A3C91F285D15CE62DD_inline (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarcodeDisplay_Hide_mE295501A1922DF4E29425730042E35D48E331458 (BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* __this, bool ___force0, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.IARSession Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::get_ARSession()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m30121D13E385306162443AAA2316CB0C55F14CCA (ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m30121D13E385306162443AAA2316CB0C55F14CCA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::InitializeARSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_InitializeARSession_m354B48BF2593D413CA359FAB225BD0C4AF4D650C (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::InitializeARNetworking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_InitializeARNetworking_m284A2142FD607037F7D4B7C63AB7479CFF549725 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::RunARSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_RunARSession_mC15853C0A8EB90FEDACF83793FFFC942C01CCF06 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::get_ARNetworking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E_gshared)(__this, ___object0, ___method1, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::SetupBarcode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMappingManager_SetupBarcode_mB779AFCC327297C086C0823908D0BB9D62C5CC3C (MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.Anchors.IARAnchor> Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs::get_Anchors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E* AnchorsArgs_get_Anchors_m670480D11A18849B6706476AB843002E4A503177_inline (AnchorsArgs_t58711712713F460F8E05B14E958C48A51D111209* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.Anchors.IARAnchor>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mDA35F02F535B1D0AA77658176EECBFBAB97BF3ED (ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E*, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared)(__this, method);
}
// System.Void Niantic.ARDK.Utilities.Marker.MarkerMetadata::.ctor(System.String,Niantic.ARDK.Utilities.Marker.MarkerMetadata/MarkerSource,System.Byte[],Niantic.ARDK.Utilities.Marker.IMetadataSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMetadata__ctor_m2CD5F920B087158EC8A7A886BB1DF993227155FA (MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* __this, String_t* ___sessionIdentifier0, int32_t ___source1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data2, RuntimeObject* ___serializer3, const RuntimeMethod* method) ;
// Niantic.ARDK.Utilities.Marker.ZXingMarkerGenerator/MarkerGenerationResult Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::GenerateBarcode(Niantic.ARDK.Utilities.Marker.MarkerMetadata,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkerGenerationResult_t048FE5A946C2CC7D9DBE03878F3556A34A3494E0* BarcodeDisplay_GenerateBarcode_m14A1896CBBF33F290A88F659DC574EFBEA5AA294 (BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* __this, MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* ___info0, bool ___showAfterGenerating1, const RuntimeMethod* method) ;
// System.String Niantic.ARDK.Utilities.Marker.ZXingMarkerGenerator/MarkerGenerationResult::get_EncodedText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MarkerGenerationResult_get_EncodedText_mF4C5D06956999DDACEFB3822062E3995D7139D21_inline (MarkerGenerationResult_t048FE5A946C2CC7D9DBE03878F3556A34A3494E0* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// Niantic.ARDK.Utilities.Marker.MarkerMetadata Niantic.ARDK.Utilities.Marker.BasicMetadataSerializer::StaticDeserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* BasicMetadataSerializer_StaticDeserialize_mA095E73E0805733237431B7576E24EE67B1964FA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::get_Center()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BarcodeDisplay_get_Center_m668EDEEF2DA8367FCF26B24AD68C2B89A3B93AC1_inline (BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::get_Points()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* BarcodeDisplay_get_Points_m1BEFCDAFE68CB4B20B9868B8E6DB2D35E0BA2301_inline (BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] Niantic.ARDK.Utilities.Marker.ZXingMarkerGenerator::GetRealWorldPointPositions(UnityEngine.Vector2,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ZXingMarkerGenerator_GetRealWorldPointPositions_mB28EBE137F717D210296FBB72578BDA90C84FCDF (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::ReadGyroscopeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MarkerMappingManager_ReadGyroscopeRotation_m9582F49D06EDD5A97AAE68E72E170CECE67BFFA6 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay::Show(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarcodeDisplay_Show_m27B34D0E48BF5338CA94F615D7F62D31FE2ECBE6 (BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* __this, bool ___force0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Gyroscope::get_attitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void System.Action`1<Niantic.ARDK.Utilities.Marker.MarkerMetadata>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m61E4CA3A239EFADDB76E89ABA90AC37F82875EE0 (Action_1_tE87A7548CA523908E824A6BBF45F5E03EA42E406* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE87A7548CA523908E824A6BBF45F5E03EA42E406*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::.ctor(Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMappingManager__ctor_mE6B6A5835C7943CD2C462279495D9C9F2FDD36C3 (MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* __this, MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* ___manager0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerScanningManager::.ctor(Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerScanningManager__ctor_m2C29F4DC0DADC7F70D97A15F8C033F3B1D36B81F (MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* __this, MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* ___manager0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMappingManager_Reset_mE9A3BB11ED0601668FB0A634E22BA6209B3B3773 (MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerScanningManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerScanningManager_Reset_m02C7669BC741C898BE62E04AB2D35FDC32E4C703 (MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::ResetSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_ResetSessions_m0C66A07D86703A00D2C4C9CDDD3641DAC6881096 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::set_ARSession(Niantic.ARDK.AR.IARSession)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_set_ARSession_m6C985BD7774D91290A17531658940AB3CC68395B_inline (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::set_ARNetworking(Niantic.ARDK.AR.Networking.IARNetworking)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_set_ARNetworking_m3B0F41304BAB944A571A1CE3F0DADE7725303C00_inline (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration Niantic.ARDK.AR.Configuration.ARWorldTrackingConfigurationFactory::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARWorldTrackingConfigurationFactory_Create_m3ACFE8B7DEE0D1C1F58DF1900C6B893175E5B8FF (const RuntimeMethod* method) ;
// Niantic.ARDK.AR.IARSession Niantic.ARDK.AR.ARSessionFactory::Create(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSessionFactory_Create_m24CC99F4E7C634039365DF1558EE2708C925A559 (Guid_t ___stageIdentifier0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDK.AR.Networking.ARNetworkingFactory::Create(Niantic.ARDK.AR.IARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARNetworkingFactory_Create_m005B4BB83090342DAF90BEB8A2C68FD7AAECF2AA (RuntimeObject* ___session0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Niantic.ARDK.Configuration.ArdkGlobalConfig::SetContextAwarenessUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArdkGlobalConfig_SetContextAwarenessUrl_mC7F999C21C17160ACBC5E279092BD70B9B7029A3 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507 (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.AR.ARSessionFactory::add_SessionInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionFactory_add_SessionInitialized_m718A16A7689C0CA6B674979A1419F6456A3C016D (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* ___value0, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.IARSession Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs::get_Session()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnyARSessionInitializedArgs_get_Session_mE6A718E2634C4094FC47FEA581B0C40F19E19487_inline (AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionDeinitializedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m415EC7077DBE8CFB79ECD09F210F1F5012B40959 (ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m415EC7077DBE8CFB79ECD09F210F1F5012B40959_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDKExamples.Helpers.ARHitTester::ClearObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHitTester_ClearObjects_m3E7637DC36BC1658EF31D34FF85BB1B7E2654CE2 (ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.AR.ARSessionFactory::remove_SessionInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionFactory_remove_SessionInitialized_m9EAA2283AA72DBD23DA9ED4B7DD7C4325ED42740 (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 Niantic.ARDK.Utilities.Input.Legacy.PlatformAgnosticInput::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformAgnosticInput_get_touchCount_m7B5705756A3948A905D86BA45AE1D8D557AD7FA3 (const RuntimeMethod* method) ;
// UnityEngine.Touch Niantic.ARDK.Utilities.Input.Legacy.PlatformAgnosticInput::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 PlatformAgnosticInput_GetTouch_m67C8FA8D9C111F706AF6AEE6F18EC88841B84E3F (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.ARHitTester::TouchBegan(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHitTester_TouchBegan_m4F2DB451323C990CC1C5582AA0D42C52E6FC8FA7 (ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.HitTest.IARHitTestResult>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA (ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.HitTest.IARHitTestResult>::get_Item(System.Int32)
inline RuntimeObject* ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32 (ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 Niantic.ARDK.Utilities.MatrixUtils::ToPosition(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MatrixUtils_ToPosition_mD2843F95E2F6F40B53CED436EE9C3517F6D910E5 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String UnityEngine.Vector3::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::StopListeningToNetworking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_StopListeningToNetworking_m232D1A06AAD39F10CDD2F7B1EF1023D5CF902FAB (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::UpdateIndicator(Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_UpdateIndicator_mC9E3379AC77E1009EEDF945E3F63104E2A5BF2CE (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, int32_t ___state0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64 (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1 (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034 (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_mDE16F0ADC31F58EA85D854D2E7333491E8BF5C55 (ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_mDE16F0ADC31F58EA85D854D2E7333491E8BF5C55_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0 (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Networking.MultipeerNetworkingFactory::add_NetworkingInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipeerNetworkingFactory_add_NetworkingInitialized_mFBF83360EBD8C80EFF3451CF0F6509E311F88712 (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Networking.MultipeerNetworkingFactory::remove_NetworkingInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipeerNetworkingFactory_remove_NetworkingInitialized_m24FCD65FCD7A20E4CF71CBA6292917ACEBE73F06 (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::ListenToNetworking(Niantic.ARDK.Networking.IMultipeerNetworking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_ListenToNetworking_m4B49E1A96EBF34B269A7DF04733A8392F148D82E (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, RuntimeObject* ___networking0, const RuntimeMethod* method) ;
// System.Boolean Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs::get_IsHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectedArgs_get_IsHost_mA2DF2037DBF198DE7B431749F764F04D3900E16E (ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs::get_Self()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectedArgs_get_Self_m19392C6C88B37599DB1F5C621DFC859FADB5E413_inline (ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_m9F695DD3B5A3450B2723A76ED53EEF1629BA22F0 (Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___key0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs::get_Host()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectedArgs_get_Host_m4EAEECDB6477203479B2C4836522486E7CAE4DF7_inline (ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs::get_Peer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerAddedArgs_get_Peer_mF04D06FAC3F681FA7E4EEA53D4727E1D4A20ACAC_inline (PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs::get_Peer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerRemovedArgs_get_Peer_mCC879C96B5FE8067214B3CBCA0271F75B2C9F5C1_inline (PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF* __this, const RuntimeMethod* method) ;
// System.UInt32 Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConnectionFailedArgs_get_ErrorCode_m4D026D356ACA27B5048F3416EBBF5C7B12A791DC_inline (ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC* __this, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154 (uint32_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,UnityEngine.Color>::get_Item(TKey)
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Dictionary_2_get_Item_m62EE67CA1745DC33D0939B76CF2304292B652F15 (Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m0A790298366643E0EF45A36D27E6ABC1955C3DF0_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,UnityEngine.Color>::.ctor()
inline void Dictionary_2__ctor_m68CA8D52E972D997ABCD914E662D209CF3D6390D (Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F*, const RuntimeMethod*))Dictionary_2__ctor_m504750EDD1E892E04F507E93D04DABE88540A2C2_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,UnityEngine.Color>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0 (Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F* __this, int32_t ___key0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F*, int32_t, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Dictionary_2_Add_m99CB69B0EFEB92DD82BC26FEFAB1547D07E3B18C_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,System.String>::.ctor()
inline void Dictionary_2__ctor_m819A801B91A148F614C77F3E4F581D866B200638 (Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899 (Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* __this, int32_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2*, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_mCDF11A2B25962AC5C0AF90655A8656E0F1B866C9 (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_mCDF11A2B25962AC5C0AF90655A8656E0F1B866C9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.AR.Networking.ARNetworkingFactory::add_ARNetworkingInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARNetworkingFactory_add_ARNetworkingInitialized_mE5A4F323DAA5E9D2954D5C204357310F7F91BC53 (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.AR.Networking.ARNetworkingFactory::remove_ARNetworkingInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARNetworkingFactory_remove_ARNetworkingInitialized_m7C049CAA572A9A75E6C9E9E28E42B54730B2D6AF (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* ___value0, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs::get_ARNetworking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnyARNetworkingInitializedArgs_get_ARNetworking_mA3D197FB19EA656CD4D79A0E9AAFB299FDFFC135_inline (AnyARNetworkingInitializedArgs_tE7DFF4BAAA921B3B4CB96D9996A255A660491BC5* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m001EE51831C81CE4C6BACD6668380FA4BEB6572A (ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m001EE51831C81CE4C6BACD6668380FA4BEB6572A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m617E4CAEC2E02F493168C36E8386888F234D52E6 (ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m617E4CAEC2E02F493168C36E8386888F234D52E6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mC78D2074E48557A5D3BA1996F5F8DF98A80B6BC4 (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* __this, RuntimeObject* ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624*, RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>::get_Item(TKey)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Dictionary_2_get_Item_mABF93ED22D782CC4C6FD2CF852CA2885E1A1C110 (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>::Remove(TKey)
inline bool Dictionary_2_Remove_mBFE0C6B47348CBD2372EF814713F289CA527B4E4 (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// Niantic.ARDK.Networking.IPeer Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs::get_Peer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerPoseReceivedArgs_get_Peer_m60556CB1C66274B6DDD1695158D1BC4FF6B3A38B_inline (PeerPoseReceivedArgs_t3EFA40B68DEFDEABBD5132C9AC75A98E0B6AC083* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs::get_Pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 PeerPoseReceivedArgs_get_Pose_mC23DE4C703C3971420E753D9CBCD62E9AE9DA355_inline (PeerPoseReceivedArgs_t3EFA40B68DEFDEABBD5132C9AC75A98E0B6AC083* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Niantic.ARDK.Utilities.MatrixUtils::ToRotation(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MatrixUtils_ToRotation_m5FBB81927C6D824ADCE1F44E5C26A058B00FBAE6 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m00580A36D2665566EE3BCAE4B5A2C45B44A4C0D5 (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, int32_t ___Seed0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_set_Color_m3FA93459EF85B83C0DF6316A1321C2B4F6CAA2BC (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::StopListeningToNetworking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_StopListeningToNetworking_mAF72980D21CA5E8161AA8EF679A05B3B27343EA5 (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::ListenToNetworking(Niantic.ARDK.Networking.IMultipeerNetworking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_ListenToNetworking_mCF8DCDC080C1C0A421183718E11837447AA3EE31 (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, RuntimeObject* ___networking0, const RuntimeMethod* method) ;
// UnityEngine.Color Niantic.ARDKExamples.Helpers.PlayerColor::ColorFromGuid(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PlayerColor_ColorFromGuid_m6A196FE083FD81090AFDC74963F6284C06E28A4C (Guid_t ___id0, const RuntimeMethod* method) ;
// System.Int32 Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::get_DataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerDataReceivedArgs_get_DataLength_mF50EAEEC2C803ACE89FEA4E88EE0F71FD0D47317 (PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::get_Peer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerDataReceivedArgs_get_Peer_m21DB039DBB081D1E4C57ED6AFC8186B425DE8695_inline (PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.Networking.TransportType Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::get_TransportType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PeerDataReceivedArgs_get_TransportType_mE0AA4B1250C7F03911FE172AA85F0AAA88E8BC54_inline (PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.SessionIDField::OnWillDeinitialize(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionIDField_OnWillDeinitialize_mBCF9017A406E185553EEB8532FA142A9D767479A (SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* __this, DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_OnDestroy_m551000531722FAD0D2DEB4CA9A76EF25A7067EAA (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField__ctor_m06B9629E3C878D578A8B43C1A8835B526629D6E5 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String Niantic.ARDKExamples.Helpers.SessionIDGenerator::GenerateRandomText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionIDGenerator_GenerateRandomText_mFD36C60A68E2A414E8A1F89569C55DD74808D89A (SessionIDGenerator_tE061B3D4180AE28BC0B464F61BFA40FD6F8920C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::get_onEndEdit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText_Hide_mF82488DC8410B056CD622C099FA45A57093B9C08 (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::OnDeinitialized(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText_OnDeinitialized_m1B0FEE1762B018F3CD517C0CD2D9171A14439823 (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63 ___args0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336 (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336_gshared)(__this, ___object0, ___method1, method);
}
// Niantic.ARDK.Networking.IPeer Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs::get_Peer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerStateReceivedArgs_get_Peer_mE8CD905A84120698BDEB7B43E4410AA1050C0008_inline (PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.Networking.PeerState Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline (PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mA7966CF5B0D3A1B49840681B8DD35F692C60B221 (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_m6EDBF794FDA90ED3008549A0F6C72DA84615A21C (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___key0, method);
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText_Show_m317FC8393D5F433E07F844A49618D763A6C3013B (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,System.String>::.ctor()
inline void Dictionary_2__ctor_m5367B4E765FCD96CF95C26F7D57CAE0DF8B521B1 (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3 (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* __this, int32_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97*, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::OnDeinitialized(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_OnDeinitialized_m84907F56C0B5059556D5A56BE8BFDBFA3235ABC6 (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63 ___args0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::UpdateIndicatorText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_UpdateIndicatorText_m63662786E478219738221D1BC2EB901202464F0E (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, String_t* ___newText0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::UpdateIndicator(Niantic.ARDK.AR.Networking.PeerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_UpdateIndicator_m8B1469DBC3403E94E34058DFBF1F56C8304F4AB5 (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, int32_t ___newState0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,UnityEngine.Color>::get_Item(TKey)
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Dictionary_2_get_Item_mBA3D2D3B4FD265B6F28401B318EE0EAD384BB5FC (Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m0A790298366643E0EF45A36D27E6ABC1955C3DF0_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,UnityEngine.Color>::.ctor()
inline void Dictionary_2__ctor_m6398CBE202D941F1CFFABE6D8B67E64AE62A4A47 (Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B*, const RuntimeMethod*))Dictionary_2__ctor_m504750EDD1E892E04F507E93D04DABE88540A2C2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDK.AR.Networking.PeerState,UnityEngine.Color>::Add(TKey,TValue)
inline void Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA (Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* __this, int32_t ___key0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B*, int32_t, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Dictionary_2_Add_m99CB69B0EFEB92DD82BC26FEFAB1547D07E3B18C_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::OnWillDeinitialize(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_OnWillDeinitialize_mF2DC27918883E31E4462355689350839B979D256 (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, DeinitializedArgs_t9E20E228D8359F47DB613E62FF5ED0BC3548A24F ___args0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::CreateTracker(Niantic.ARDK.Networking.IPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_CreateTracker_m29053123D87BE7DB6DD7337397F2863F42B4044B (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, RuntimeObject* ___peer0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::ClearTrackers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_ClearTrackers_m957F11D0E73F939031FA7635B508F27F140AD446 (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* Object_Instantiate_TisSyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269_mD4B075FDA35605597EA8AE6567C5E29B297AAD66 (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* (*) (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::SetupToTrackPeer(Niantic.ARDK.Networking.IPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_SetupToTrackPeer_mD02166AC443483E3F707B4EDA0143F46E994E004 (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, RuntimeObject* ___peer0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFA6AA78FA3FE3DEAAD16B7FAA1BF2C3A0CB0B348 (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* __this, RuntimeObject* ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624*, RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t510EC00766B9414A0E16250124C9A3B3AD48135E Dictionary_2_GetEnumerator_mC41C973E6E5FE7C23FB097D45F0C73373D593865 (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t510EC00766B9414A0E16250124C9A3B3AD48135E (*) (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_mA029D30C47CBBD66A13AB96CDA2ABA0731D8E27A (Enumerator_t510EC00766B9414A0E16250124C9A3B3AD48135E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t510EC00766B9414A0E16250124C9A3B3AD48135E*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>::get_Current()
inline KeyValuePair_2_t2F01DDB2538FFD4A46ED65779F00DFC868C43A98 Enumerator_get_Current_mDC92C898FA2AF05EB4D723314738FEE79DB0EE26_inline (Enumerator_t510EC00766B9414A0E16250124C9A3B3AD48135E* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t2F01DDB2538FFD4A46ED65779F00DFC868C43A98 (*) (Enumerator_t510EC00766B9414A0E16250124C9A3B3AD48135E*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>::get_Value()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* KeyValuePair_2_get_Value_m659498839F19E5F20B37BCDA6EA751EF74445788_inline (KeyValuePair_2_t2F01DDB2538FFD4A46ED65779F00DFC868C43A98* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (KeyValuePair_2_t2F01DDB2538FFD4A46ED65779F00DFC868C43A98*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m4CF658DC59B6FF64AC4F377562ECADC1A55CD020 (Enumerator_t510EC00766B9414A0E16250124C9A3B3AD48135E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t510EC00766B9414A0E16250124C9A3B3AD48135E*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.IPeer,UnityEngine.GameObject>::Clear()
inline void Dictionary_2_Clear_m01F82648B3DECE1E62A17B97A8CD9551DD21146C (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_spacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.UI.Text>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mE1084A9A28525FEA3D226B69D85184B4548C411A (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Add(T)
inline void List_1_Add_m1E764F119DDC62D8B86C24186CBA7A268E9D3092_inline (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48*, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Count()
inline int32_t List_1_get_Count_m451B44D19BA4256832D8B46E419A6176263901A4_inline (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// TSource System.Linq.Enumerable::First<UnityEngine.UI.Text>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Enumerable_First_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m8806B25243D00C26A0C3F6E6AC1BD1D91F9CEE85 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mBB19FEE8DC3EEC1E65B95C582AD1266813F107DA (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetEnumerator()
inline Enumerator_tBDE8A591E834C7B4748BA5ABD2CA972CF8AC5BC7 List_1_GetEnumerator_m730305C78BA56FA3A3D5C465AC4930D1B9CAAAF1 (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBDE8A591E834C7B4748BA5ABD2CA972CF8AC5BC7 (*) (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::Dispose()
inline void Enumerator_Dispose_mA562D157FF14878146E3ECEF1DF11F7383F0FAD8 (Enumerator_tBDE8A591E834C7B4748BA5ABD2CA972CF8AC5BC7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBDE8A591E834C7B4748BA5ABD2CA972CF8AC5BC7*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::get_Current()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Enumerator_get_Current_m3FBB45A9D466C2F3DCB30B5122BF671B5A999591_inline (Enumerator_tBDE8A591E834C7B4748BA5ABD2CA972CF8AC5BC7* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Enumerator_tBDE8A591E834C7B4748BA5ABD2CA972CF8AC5BC7*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::MoveNext()
inline bool Enumerator_MoveNext_mBBE56CBC8530028C06050F2F7081AE7D0709745C (Enumerator_tBDE8A591E834C7B4748BA5ABD2CA972CF8AC5BC7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBDE8A591E834C7B4748BA5ABD2CA972CF8AC5BC7*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Clear()
inline void List_1_Clear_m35DEE0ED5A4C6EA2F023040F235C76C450A20D92_inline (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor()
inline void List_1__ctor_mA63E5569B679BD015D3EEB541EE5D99158BF400E (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m159785A12ADB6402C70685F334C688D7B77119C1 (ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m159785A12ADB6402C70685F334C688D7B77119C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDKExamples.Helpers.ARCursorRenderer::DestroySpawnedCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursorRenderer_DestroySpawnedCursor_m910B4247D9215C7492A333C872FDA07E8DC8750F (ARCursorRenderer_tA570D175748C1CF829C5834B58566ADD6010DDD6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.IARFrame Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs::get_Frame()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FrameUpdatedArgs_get_Frame_m18B39C4A874326A2970667E28C8B8699595FA4DB_inline (FrameUpdatedArgs_t66A5CACBFB0914FFD132D8A7FBEC68152BDBDBA0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDKExamples.Pong.MessagingManager::InitializeMessagingManager(Niantic.ARDK.Networking.IMultipeerNetworking,Niantic.ARDKExamples.Pong.GameController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingManager_InitializeMessagingManager_mE7E6C2CB2B3A3E28ACFF6720926CD4E721715993 (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, RuntimeObject* ___networking0, GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* ___controller1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessagingManager_OnDidReceiveDataFromPeer_m4D466FF89BFB21D36FCA11CC9498D250DF767D5A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _networking = networking;
		RuntimeObject* L_0 = ___networking0;
		__this->____networking_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_0), (void*)L_0);
		// _controller = controller;
		GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* L_1 = ___controller1;
		__this->____controller_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controller_1), (void*)L_1);
		// _networking.PeerDataReceived += OnDidReceiveDataFromPeer;
		RuntimeObject* L_2 = __this->____networking_0;
		ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* L_3 = (ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m3BB4030170487D79DE001F30AC4B138AC3601A47(L_3, __this, (intptr_t)((void*)MessagingManager_OnDidReceiveDataFromPeer_m4D466FF89BFB21D36FCA11CC9498D250DF767D5A_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* >::Invoke(22 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PeerDataReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Pong.MessagingManager::SetBallReference(Niantic.ARDKExamples.Pong.BallBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingManager_SetBallReference_mFC74169E2813AD45076FD7D65512D608268F6CEC (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, BallBehaviour_t27961BAEAFF7E00DDBCDF3A3BEEA129B39935F0A* ___ball0, const RuntimeMethod* method) 
{
	{
		// _ball = ball;
		BallBehaviour_t27961BAEAFF7E00DDBCDF3A3BEEA129B39935F0A* L_0 = ___ball0;
		__this->____ball_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ball_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Pong.MessagingManager::BallHitByPlayer(Niantic.ARDK.Networking.IPeer,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingManager_BallHitByPlayer_m0DF89E966A069C974A96D6ED99C8D915F65D895E (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, RuntimeObject* ___host0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _networking.SendDataToPeer
		// (
		//   (uint)_MessageType.BallHitMessage,
		//   SerializeVector3(direction),
		//   host,
		//   TransportType.UnreliableUnordered
		// );
		RuntimeObject* L_0 = __this->____networking_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___direction1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = MessagingManager_SerializeVector3_m6FBDD30E7305A3CCD6EC78D761C8756860B37209(__this, L_1, NULL);
		RuntimeObject* L_3 = ___host0;
		NullCheck(L_0);
		InterfaceActionInvoker5< uint32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, uint8_t, bool >::Invoke(7 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::SendDataToPeer(System.UInt32,System.Byte[],Niantic.ARDK.Networking.IPeer,Niantic.ARDK.Networking.TransportType,System.Boolean) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_0, 1, L_2, L_3, 1, (bool)0);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Pong.MessagingManager::GoalScored(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingManager_GoalScored_mEEAE4FAC558CAFFF5BD15922CC72C6139FFB1854 (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, String_t* ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// var message = new byte[1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		// if (color == "red")
		String_t* L_1 = ___color0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// message[0] = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)0);
		goto IL_001e;
	}

IL_001a:
	{
		// message[0] = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
	}

IL_001e:
	{
		// _networking.BroadcastData
		// (
		//   (uint)_MessageType.GoalScoredMessage,
		//   message,
		//   TransportType.ReliableUnordered
		// );
		RuntimeObject* L_5 = __this->____networking_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker4< uint32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uint8_t, bool >::Invoke(9 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::BroadcastData(System.UInt32,System.Byte[],Niantic.ARDK.Networking.TransportType,System.Boolean) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_5, 2, L_6, 3, (bool)0);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Pong.MessagingManager::BroadcastBallPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingManager_BroadcastBallPosition_mE740073D5911CB893E9C464E3FB66BD774A44BA9 (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _networking.BroadcastData
		// (
		//   (uint)_MessageType.BallPositionMessage,
		//   SerializeVector3(position),
		//   TransportType.UnreliableUnordered
		// );
		RuntimeObject* L_0 = __this->____networking_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = MessagingManager_SerializeVector3_m6FBDD30E7305A3CCD6EC78D761C8756860B37209(__this, L_1, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker4< uint32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uint8_t, bool >::Invoke(9 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::BroadcastData(System.UInt32,System.Byte[],Niantic.ARDK.Networking.TransportType,System.Boolean) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_0, 3, L_2, 1, (bool)0);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Pong.MessagingManager::SpawnGameObjects(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingManager_SpawnGameObjects_mD5E8935CC7D19CD70BB924FEB9032A5CC27E9389 (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _networking.BroadcastData
		// (
		//   (uint)_MessageType.SpawnGameObjectsMessage,
		//   SerializeVector3(position),
		//   TransportType.ReliableUnordered
		// );
		RuntimeObject* L_0 = __this->____networking_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = MessagingManager_SerializeVector3_m6FBDD30E7305A3CCD6EC78D761C8756860B37209(__this, L_1, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker4< uint32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uint8_t, bool >::Invoke(9 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::BroadcastData(System.UInt32,System.Byte[],Niantic.ARDK.Networking.TransportType,System.Boolean) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_0, 4, L_2, 3, (bool)0);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Pong.MessagingManager::OnDidReceiveDataFromPeer(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingManager_OnDidReceiveDataFromPeer_m4D466FF89BFB21D36FCA11CC9498D250DF767D5A (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB45FCACC18BF78994EF2999C83120D1F63FF78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53A9F49B7E11E91814DFD16C31B6DA90C74AAA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFA3595C376CB158D6E6CCDF879CE72A3D8F44C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC85761EAF69D5FC435FE2EF85D8F56E97550196);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// var data = args.CopyData();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = PeerDataReceivedArgs_CopyData_mD5E32ECFC23052C9667E55A0EBB17FC4F1951A5B((&___args0), NULL);
		V_0 = L_0;
		// switch ((_MessageType)args.Tag)
		uint32_t L_1;
		L_1 = PeerDataReceivedArgs_get_Tag_m40BCD818739E964C1B6D0BC363D44A77155E9962_inline((&___args0), NULL);
		V_1 = L_1;
		uint32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_00bc;
			}
			case 3:
			{
				goto IL_00cf;
			}
		}
	}
	{
		goto IL_00ec;
	}

IL_002d:
	{
		// _ball.Hit(DeserializeVector3(data));
		BallBehaviour_t27961BAEAFF7E00DDBCDF3A3BEEA129B39935F0A* L_3 = __this->____ball_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = MessagingManager_DeserializeVector3_mA28002A6AA72C632698CD3FEC170E65FDD9308EA(__this, L_4, NULL);
		NullCheck(L_3);
		BallBehaviour_Hit_mB4A900F5BC7C1DCB718807652872298A753D17EA(L_3, L_5, NULL);
		// break;
		return;
	}

IL_0040:
	{
		// if (data[0] == 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		// Debug.Log("Point scored for team blue");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral53A9F49B7E11E91814DFD16C31B6DA90C74AAA9A, NULL);
		// _controller.BlueScore += 1;
		GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* L_9 = __this->____controller_1;
		GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->___BlueScore_17;
		NullCheck(L_10);
		L_10->___BlueScore_17 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		goto IL_0081;
	}

IL_0064:
	{
		// Debug.Log("Point scored for team red");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBC85761EAF69D5FC435FE2EF85D8F56E97550196, NULL);
		// _controller.RedScore += 1;
		GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* L_12 = __this->____controller_1;
		GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14 = L_13->___RedScore_16;
		NullCheck(L_13);
		L_13->___RedScore_16 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0081:
	{
		// _controller.scoreText.text =
		//   string.Format
		//   (
		//     "Score: {0} - {1}",
		//     _controller.RedScore,
		//     _controller.BlueScore
		//   );
		GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* L_15 = __this->____controller_1;
		NullCheck(L_15);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = L_15->___scoreText_8;
		GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* L_17 = __this->____controller_1;
		NullCheck(L_17);
		int32_t L_18 = L_17->___RedScore_16;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* L_21 = __this->____controller_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->___BlueScore_17;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAFA3595C376CB158D6E6CCDF879CE72A3D8F44C4, L_20, L_24, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_25);
		// break;
		return;
	}

IL_00bc:
	{
		// _controller.SetBallLocation(DeserializeVector3(data));
		GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* L_26 = __this->____controller_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = MessagingManager_DeserializeVector3_mA28002A6AA72C632698CD3FEC170E65FDD9308EA(__this, L_27, NULL);
		NullCheck(L_26);
		GameController_SetBallLocation_mDD74E03D1B0228DCFDB0AC147FEC8E13943459B8(L_26, L_28, NULL);
		// break;
		return;
	}

IL_00cf:
	{
		// Debug.Log("Creating game objects");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3DB45FCACC18BF78994EF2999C83120D1F63FF78, NULL);
		// _controller.InstantiateObjects(DeserializeVector3(data));
		GameController_t3D8F63A63632C0B7E130B6477812C19954642A09* L_29 = __this->____controller_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = MessagingManager_DeserializeVector3_mA28002A6AA72C632698CD3FEC170E65FDD9308EA(__this, L_30, NULL);
		NullCheck(L_29);
		GameController_InstantiateObjects_mE73F0BA43284DC093DB4541B1E8CAE7CD93977F1(L_29, L_31, NULL);
		// break;
		return;
	}

IL_00ec:
	{
		// throw new ArgumentException("Received unknown tag from message");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_32 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_32);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C33ED8ACBB677640232E0A387399AC60ACB2823)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessagingManager_OnDidReceiveDataFromPeer_m4D466FF89BFB21D36FCA11CC9498D250DF767D5A_RuntimeMethod_var)));
	}
}
// System.Void Niantic.ARDKExamples.Pong.MessagingManager::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingManager_Destroy_mEFCD9D7ECBB462C75B4F636B8F8DA23D31FCC372 (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessagingManager_OnDidReceiveDataFromPeer_m4D466FF89BFB21D36FCA11CC9498D250DF767D5A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _networking.PeerDataReceived -= OnDidReceiveDataFromPeer;
		RuntimeObject* L_0 = __this->____networking_0;
		ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* L_1 = (ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArdkEventHandler_1__ctor_m3BB4030170487D79DE001F30AC4B138AC3601A47(L_1, __this, (intptr_t)((void*)MessagingManager_OnDidReceiveDataFromPeer_m4D466FF89BFB21D36FCA11CC9498D250DF767D5A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* >::Invoke(23 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_PeerDataReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Byte[] Niantic.ARDKExamples.Pong.MessagingManager::SerializeVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessagingManager_SerializeVector3_m6FBDD30E7305A3CCD6EC78D761C8756860B37209 (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mF3303CEA45F41C7B8C656C2FFF78C17C38C0ED03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_0 = NULL;
	{
		// _builderMemoryStream.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->____builderMemoryStream_3;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_0, ((int64_t)0));
		// _builderMemoryStream.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = __this->____builderMemoryStream_3;
		NullCheck(L_1);
		VirtualActionInvoker1< int64_t >::Invoke(32 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_1, ((int64_t)0));
		// using (var binarySerializer = new BinarySerializer(_builderMemoryStream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = __this->____builderMemoryStream_3;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_3 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_3, L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_4 = V_0;
					if (!L_4)
					{
						goto IL_003d;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Vector3Serializer.Instance.Serialize(binarySerializer, vector);
			il2cpp_codegen_runtime_class_init_inline(Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D_il2cpp_TypeInfo_var);
			Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D* L_6 = ((Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D_il2cpp_TypeInfo_var))->___Instance_1;
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_7 = V_0;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
			NullCheck(L_6);
			BaseItemSerializer_1_Serialize_mF3303CEA45F41C7B8C656C2FFF78C17C38C0ED03(L_6, L_7, L_8, BaseItemSerializer_1_Serialize_mF3303CEA45F41C7B8C656C2FFF78C17C38C0ED03_RuntimeMethod_var);
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return _builderMemoryStream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = __this->____builderMemoryStream_3;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_9);
		return L_10;
	}
}
// UnityEngine.Vector3 Niantic.ARDKExamples.Pong.MessagingManager::DeserializeVector3(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MessagingManager_DeserializeVector3_mA28002A6AA72C632698CD3FEC170E65FDD9308EA (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mFCAB24EE80F348A99FE6AC6EF2BFD73953F03BB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// using(var readingStream = new MemoryStream(data))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002f;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var binaryDeserializer = new BinaryDeserializer(readingStream))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
				BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_5 = (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*)il2cpp_codegen_object_new(BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				BinaryDeserializer__ctor_mDD79DF6C7453224BEE20972579E565AA72533DEF(L_5, L_4, NULL);
				V_1 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_001c_1:
					{// begin finally (depth: 2)
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_6 = V_1;
							if (!L_6)
							{
								goto IL_0025_1;
							}
						}
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_7 = V_1;
							NullCheck(L_7);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
						}

IL_0025_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// return Vector3Serializer.Instance.Deserialize(binaryDeserializer);
					il2cpp_codegen_runtime_class_init_inline(Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D_il2cpp_TypeInfo_var);
					Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D* L_8 = ((Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Serializer_t5836FE3C9E8F4F901CD7F2624346F034FC8DE47D_il2cpp_TypeInfo_var))->___Instance_1;
					BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_9 = V_1;
					NullCheck(L_8);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
					L_10 = BaseItemSerializer_1_Deserialize_mFCAB24EE80F348A99FE6AC6EF2BFD73953F03BB1(L_8, L_9, BaseItemSerializer_1_Deserialize_mFCAB24EE80F348A99FE6AC6EF2BFD73953F03BB1_RuntimeMethod_var);
					V_2 = L_10;
					goto IL_0030;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		return L_11;
	}
}
// System.Void Niantic.ARDKExamples.Pong.MessagingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingManager__ctor_m645B8EEC02EAE079C207B1F2AA8198FF5ED9B5C6 (MessagingManager_t417FF9C693F0E701203C38315D303249C913D3B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly MemoryStream _builderMemoryStream = new MemoryStream(24);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_0, ((int32_t)24), NULL);
		__this->____builderMemoryStream_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____builderMemoryStream_3), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::.ctor(Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMappingManager__ctor_mE6B6A5835C7943CD2C462279495D9C9F2FDD36C3 (MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* __this, MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* ___manager0, const RuntimeMethod* method) 
{
	{
		// public MarkerMappingManager(MarkerSyncSessionManager manager)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _manager = manager;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_0 = ___manager0;
		__this->____manager_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____manager_0), (void*)L_0);
		// if (SystemInfo.supportsGyroscope)
		bool L_1;
		L_1 = SystemInfo_get_supportsGyroscope_m98477EC99D88396F076A93EF5C28A6129DC4E211(NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// Input.gyro.enabled = true;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_2;
		L_2 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_2);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_2, (bool)1, NULL);
		// Input.gyro.updateInterval = 0.0167f;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_3;
		L_3 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_3);
		Gyroscope_set_updateInterval_m477CB8AF6D656813C14467CCB62EDC3BF1383925(L_3, (0.0166999996f), NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMappingManager_Reset_mE9A3BB11ED0601668FB0A634E22BA6209B3B3773 (MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_OnAnchorsShowBarcodeIfAble_m34B4BAAEE0476748364AF7187F3A5A27D8B3CCB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_ToggleBarcodeDisplay_mA6E77EFE2CBB1D8DFC8FE3FAAA902128FA5FDAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _manager.BarcodeDisplay.Hide();
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_0 = __this->____manager_0;
		NullCheck(L_0);
		BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* L_1;
		L_1 = MarkerSyncSessionManager_get_BarcodeDisplay_m0AAD96722DCF888357FC59A3C91F285D15CE62DD_inline(L_0, NULL);
		NullCheck(L_1);
		BarcodeDisplay_Hide_mE295501A1922DF4E29425730042E35D48E331458(L_1, (bool)0, NULL);
		// if (_manager.ARSession != null)
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_2 = __this->____manager_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// _manager.ARSession.AnchorsAdded -= OnAnchorsShowBarcodeIfAble;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_4 = __this->____manager_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(L_4, NULL);
		ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* L_6 = (ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9*)il2cpp_codegen_object_new(ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ArdkEventHandler_1__ctor_m30121D13E385306162443AAA2316CB0C55F14CCA(L_6, __this, (intptr_t)((void*)MarkerMappingManager_OnAnchorsShowBarcodeIfAble_m34B4BAAEE0476748364AF7187F3A5A27D8B3CCB0_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* >::Invoke(28 /* System.Void Niantic.ARDK.AR.IARSession::remove_AnchorsAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_003a:
	{
		// _manager.UpdateTick -= ToggleBarcodeDisplay;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_7 = __this->____manager_0;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_8 = L_7;
		NullCheck(L_8);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = L_8->___UpdateTick_14;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, __this, (intptr_t)((void*)MarkerMappingManager_ToggleBarcodeDisplay_mA6E77EFE2CBB1D8DFC8FE3FAAA902128FA5FDAAB_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_9, L_10, NULL);
		NullCheck(L_8);
		L_8->___UpdateTick_14 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_11, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___UpdateTick_14), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_11, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::CreateSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMappingManager_CreateSession_mE996F9BF24D5482C4E8E05451F1993C3B573F5E2 (MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_OnAnchorsShowBarcodeIfAble_m34B4BAAEE0476748364AF7187F3A5A27D8B3CCB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_OnConnectShowBarcodeIfAble_m88EC9C048D94B14F390BF0FE96CE963E75F01ABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4115B817BABF08D4DE3F38D2F6EF08B9DF29A2DA);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_manager.ARSession != null)
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_0 = __this->____manager_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// _manager.InitializeARSession();
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_2 = __this->____manager_0;
		NullCheck(L_2);
		MarkerSyncSessionManager_InitializeARSession_m354B48BF2593D413CA359FAB225BD0C4AF4D650C(L_2, NULL);
		// _manager.InitializeARNetworking();
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_3 = __this->____manager_0;
		NullCheck(L_3);
		MarkerSyncSessionManager_InitializeARNetworking_m284A2142FD607037F7D4B7C63AB7479CFF549725(L_3, NULL);
		// _manager.ARSession.AnchorsAdded += OnAnchorsShowBarcodeIfAble;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_4 = __this->____manager_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(L_4, NULL);
		ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* L_6 = (ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9*)il2cpp_codegen_object_new(ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ArdkEventHandler_1__ctor_m30121D13E385306162443AAA2316CB0C55F14CCA(L_6, __this, (intptr_t)((void*)MarkerMappingManager_OnAnchorsShowBarcodeIfAble_m34B4BAAEE0476748364AF7187F3A5A27D8B3CCB0_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* >::Invoke(27 /* System.Void Niantic.ARDK.AR.IARSession::add_AnchorsAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_5, L_6);
		// _manager.RunARSession();
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_7 = __this->____manager_0;
		NullCheck(L_7);
		MarkerSyncSessionManager_RunARSession_mC15853C0A8EB90FEDACF83793FFFC942C01CCF06(L_7, NULL);
		// _manager.ARNetworking.Networking.Connected += OnConnectShowBarcodeIfAble;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_8 = __this->____manager_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_9);
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_11 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_11, __this, (intptr_t)((void*)MarkerMappingManager_OnConnectShowBarcodeIfAble_m88EC9C048D94B14F390BF0FE96CE963E75F01ABA_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(16 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_10, L_11);
		// _sessionIdentifier = Guid.NewGuid().ToString();
		Guid_t L_12;
		L_12 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_12;
		String_t* L_13;
		L_13 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->____sessionIdentifier_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sessionIdentifier_1), (void*)L_13);
		// Debug.Log("SessionIdentifier: " + _sessionIdentifier);
		String_t* L_14 = __this->____sessionIdentifier_1;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4115B817BABF08D4DE3F38D2F6EF08B9DF29A2DA, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// _manager.ARNetworking.Networking.Join(Encoding.UTF8.GetBytes(_sessionIdentifier));
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_16 = __this->____manager_0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(L_16, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_17);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_19;
		L_19 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_20 = __this->____sessionIdentifier_1;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_19, L_20);
		NullCheck(L_18);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t >::Invoke(12 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::Join(System.Byte[],System.Byte[],System.Int64) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_18, L_21, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0));
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::OnConnectShowBarcodeIfAble(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMappingManager_OnConnectShowBarcodeIfAble_m88EC9C048D94B14F390BF0FE96CE963E75F01ABA (MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* __this, ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_OnConnectShowBarcodeIfAble_m88EC9C048D94B14F390BF0FE96CE963E75F01ABA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _manager.ARNetworking.Networking.Connected -= OnConnectShowBarcodeIfAble;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_0 = __this->____manager_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_1);
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_3 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_3, __this, (intptr_t)((void*)MarkerMappingManager_OnConnectShowBarcodeIfAble_m88EC9C048D94B14F390BF0FE96CE963E75F01ABA_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(17 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_2, L_3);
		// if (_foundPlane)
		bool L_4 = __this->____foundPlane_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// SetupBarcode();
		MarkerMappingManager_SetupBarcode_mB779AFCC327297C086C0823908D0BB9D62C5CC3C(__this, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::OnAnchorsShowBarcodeIfAble(Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMappingManager_OnAnchorsShowBarcodeIfAble_m34B4BAAEE0476748364AF7187F3A5A27D8B3CCB0 (MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* __this, AnchorsArgs_t58711712713F460F8E05B14E958C48A51D111209 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARAnchor_t66754F240328EA56C08215F9B99AE69E96A70440_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA324E38F4C68B7D6FDCFE1D53348CEC2E93EA16C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_OnAnchorsShowBarcodeIfAble_m34B4BAAEE0476748364AF7187F3A5A27D8B3CCB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_mDA35F02F535B1D0AA77658176EECBFBAB97BF3ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// foreach (var anchor in args.Anchors)
		ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E* L_0;
		L_0 = AnchorsArgs_get_Anchors_m670480D11A18849B6706476AB843002E4A503177_inline((&___args0), NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ReadOnlyCollection_1_GetEnumerator_mDA35F02F535B1D0AA77658176EECBFBAB97BF3ED(L_0, ReadOnlyCollection_1_GetEnumerator_mDA35F02F535B1D0AA77658176EECBFBAB97BF3ED_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0067:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0070;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0070:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005d_1;
			}

IL_000f_1:
			{
				// foreach (var anchor in args.Anchors)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Niantic.ARDK.AR.Anchors.IARAnchor>::get_Current() */, IEnumerator_1_tA324E38F4C68B7D6FDCFE1D53348CEC2E93EA16C_il2cpp_TypeInfo_var, L_4);
				// if (anchor.AnchorType == AnchorType.Plane)
				NullCheck(L_5);
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* Niantic.ARDK.AR.Anchors.AnchorType Niantic.ARDK.AR.Anchors.IARAnchor::get_AnchorType() */, IARAnchor_t66754F240328EA56C08215F9B99AE69E96A70440_il2cpp_TypeInfo_var, L_5);
				if ((!(((uint32_t)L_6) == ((uint32_t)1))))
				{
					goto IL_005d_1;
				}
			}
			{
				// _foundPlane = true;
				__this->____foundPlane_2 = (bool)1;
				// _manager.ARSession.AnchorsAdded -= OnAnchorsShowBarcodeIfAble;
				MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_7 = __this->____manager_0;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(L_7, NULL);
				ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* L_9 = (ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9*)il2cpp_codegen_object_new(ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				ArdkEventHandler_1__ctor_m30121D13E385306162443AAA2316CB0C55F14CCA(L_9, __this, (intptr_t)((void*)MarkerMappingManager_OnAnchorsShowBarcodeIfAble_m34B4BAAEE0476748364AF7187F3A5A27D8B3CCB0_RuntimeMethod_var), NULL);
				NullCheck(L_8);
				InterfaceActionInvoker1< ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* >::Invoke(28 /* System.Void Niantic.ARDK.AR.IARSession::remove_AnchorsAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_8, L_9);
				// if (_manager.ARNetworking.Networking.IsConnected)
				MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_10 = __this->____manager_0;
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(L_10, NULL);
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_11);
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_12);
				if (!L_13)
				{
					goto IL_005d_1;
				}
			}
			{
				// SetupBarcode();
				MarkerMappingManager_SetupBarcode_mB779AFCC327297C086C0823908D0BB9D62C5CC3C(__this, NULL);
			}

IL_005d_1:
			{
				// foreach (var anchor in args.Anchors)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::SetupBarcode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMappingManager_SetupBarcode_mB779AFCC327297C086C0823908D0BB9D62C5CC3C (MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicMetadataSerializer_t2C6BAC9971BF1365EEAA079307709314F733A801_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_ToggleBarcodeDisplay_mA6E77EFE2CBB1D8DFC8FE3FAAA902128FA5FDAAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral144BDA1C512143BF48F3A576C391B08B91E71B6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FB105FFDC00D823DFDD96FA3179F4C6D2CCE5D);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* V_1 = NULL;
	MarkerGenerationResult_t048FE5A946C2CC7D9DBE03878F3556A34A3494E0* V_2 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_3 = NULL;
	MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// var userData = Encoding.UTF8.GetBytes("Hello world.");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral77FB105FFDC00D823DFDD96FA3179F4C6D2CCE5D);
		V_0 = L_1;
		// var embeddedInfo =
		//   new MarkerMetadata
		//   (
		//     _sessionIdentifier,
		//     MarkerMetadata.MarkerSource.Device,
		//     userData
		//   );
		String_t* L_2 = __this->____sessionIdentifier_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* L_4 = (MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680*)il2cpp_codegen_object_new(MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MarkerMetadata__ctor_m2CD5F920B087158EC8A7A886BB1DF993227155FA(L_4, L_2, 0, L_3, (RuntimeObject*)NULL, NULL);
		V_1 = L_4;
		// var generationResult = _manager.BarcodeDisplay.GenerateBarcode(embeddedInfo, true);
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_5 = __this->____manager_0;
		NullCheck(L_5);
		BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* L_6;
		L_6 = MarkerSyncSessionManager_get_BarcodeDisplay_m0AAD96722DCF888357FC59A3C91F285D15CE62DD_inline(L_5, NULL);
		MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* L_7 = V_1;
		NullCheck(L_6);
		MarkerGenerationResult_t048FE5A946C2CC7D9DBE03878F3556A34A3494E0* L_8;
		L_8 = BarcodeDisplay_GenerateBarcode_m14A1896CBBF33F290A88F659DC574EFBEA5AA294(L_6, L_7, (bool)1, NULL);
		V_2 = L_8;
		// _generatedBarcode = true;
		__this->____generatedBarcode_3 = (bool)1;
		// Debug.Log("Generated barcode with embedded data: " +
		//           BasicMetadataSerializer.StaticDeserialize(Convert.FromBase64String(generationResult.EncodedText)));
		MarkerGenerationResult_t048FE5A946C2CC7D9DBE03878F3556A34A3494E0* L_9 = V_2;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = MarkerGenerationResult_get_EncodedText_mF4C5D06956999DDACEFB3822062E3995D7139D21_inline(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(BasicMetadataSerializer_t2C6BAC9971BF1365EEAA079307709314F733A801_il2cpp_TypeInfo_var);
		MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* L_12;
		L_12 = BasicMetadataSerializer_StaticDeserialize_mA095E73E0805733237431B7576E24EE67B1964FA(L_11, NULL);
		MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* L_13 = L_12;
		G_B1_0 = L_13;
		G_B1_1 = _stringLiteral144BDA1C512143BF48F3A576C391B08B91E71B6D;
		if (L_13)
		{
			G_B2_0 = L_13;
			G_B2_1 = _stringLiteral144BDA1C512143BF48F3A576C391B08B91E71B6D;
			goto IL_0055;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_005a;
	}

IL_0055:
	{
		NullCheck(G_B2_0);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_14;
		G_B3_1 = G_B2_1;
	}

IL_005a:
	{
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// var realWorldPoints =
		//   ZXingMarkerGenerator.GetRealWorldPointPositions
		//   (
		//     _manager.BarcodeDisplay.Center,
		//     _manager.BarcodeDisplay.Points
		//   );
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_16 = __this->____manager_0;
		NullCheck(L_16);
		BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* L_17;
		L_17 = MarkerSyncSessionManager_get_BarcodeDisplay_m0AAD96722DCF888357FC59A3C91F285D15CE62DD_inline(L_16, NULL);
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = BarcodeDisplay_get_Center_m668EDEEF2DA8367FCF26B24AD68C2B89A3B93AC1_inline(L_17, NULL);
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_19 = __this->____manager_0;
		NullCheck(L_19);
		BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* L_20;
		L_20 = MarkerSyncSessionManager_get_BarcodeDisplay_m0AAD96722DCF888357FC59A3C91F285D15CE62DD_inline(L_19, NULL);
		NullCheck(L_20);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21;
		L_21 = BarcodeDisplay_get_Points_m1BEFCDAFE68CB4B20B9868B8E6DB2D35E0BA2301_inline(L_20, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22;
		L_22 = ZXingMarkerGenerator_GetRealWorldPointPositions_mB28EBE137F717D210296FBB72578BDA90C84FCDF(L_18, L_21, NULL);
		V_3 = L_22;
		// _manager.ARNetworking.InitializeForMarkerScanning(realWorldPoints);
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_23 = __this->____manager_0;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(L_23, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_3;
		NullCheck(L_24);
		InterfaceActionInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* >::Invoke(8 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::InitializeForMarkerScanning(UnityEngine.Vector3[]) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_24, L_25);
		// if (SystemInfo.supportsGyroscope)
		bool L_26;
		L_26 = SystemInfo_get_supportsGyroscope_m98477EC99D88396F076A93EF5C28A6129DC4E211(NULL);
		if (!L_26)
		{
			goto IL_00c9;
		}
	}
	{
		// _manager.UpdateTick += ToggleBarcodeDisplay;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_27 = __this->____manager_0;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_28 = L_27;
		NullCheck(L_28);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_29 = L_28->___UpdateTick_14;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_30 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_30, __this, (intptr_t)((void*)MarkerMappingManager_ToggleBarcodeDisplay_mA6E77EFE2CBB1D8DFC8FE3FAAA902128FA5FDAAB_RuntimeMethod_var), NULL);
		Delegate_t* L_31;
		L_31 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_29, L_30, NULL);
		NullCheck(L_28);
		L_28->___UpdateTick_14 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_31, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___UpdateTick_14), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_31, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::ToggleBarcodeDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMappingManager_ToggleBarcodeDisplay_mA6E77EFE2CBB1D8DFC8FE3FAAA902128FA5FDAAB (MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!_generatedBarcode)
		bool L_0 = __this->____generatedBarcode_3;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var pitch = ReadGyroscopeRotation().eulerAngles.x;
		il2cpp_codegen_runtime_class_init_inline(MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = MarkerMappingManager_ReadGyroscopeRotation_m9582F49D06EDD5A97AAE68E72E170CECE67BFFA6(NULL);
		V_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_3 = L_2.___x_2;
		V_0 = L_3;
		// if (pitch >= 75f && pitch <= 90f)
		float L_4 = V_0;
		if ((!(((float)L_4) >= ((float)(75.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		float L_5 = V_0;
		if ((!(((float)L_5) <= ((float)(90.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// _manager.BarcodeDisplay.Show();
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_6 = __this->____manager_0;
		NullCheck(L_6);
		BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* L_7;
		L_7 = MarkerSyncSessionManager_get_BarcodeDisplay_m0AAD96722DCF888357FC59A3C91F285D15CE62DD_inline(L_6, NULL);
		NullCheck(L_7);
		BarcodeDisplay_Show_m27B34D0E48BF5338CA94F615D7F62D31FE2ECBE6(L_7, (bool)0, NULL);
		return;
	}

IL_003e:
	{
		// _manager.BarcodeDisplay.Hide();
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_8 = __this->____manager_0;
		NullCheck(L_8);
		BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* L_9;
		L_9 = MarkerSyncSessionManager_get_BarcodeDisplay_m0AAD96722DCF888357FC59A3C91F285D15CE62DD_inline(L_8, NULL);
		NullCheck(L_9);
		BarcodeDisplay_Hide_mE295501A1922DF4E29425730042E35D48E331458(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::ReadGyroscopeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MarkerMappingManager_ReadGyroscopeRotation_m9582F49D06EDD5A97AAE68E72E170CECE67BFFA6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _first * Input.gyro.attitude * _mask;
		il2cpp_codegen_runtime_class_init_inline(MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_StaticFields*)il2cpp_codegen_static_fields_for(MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var))->____first_4;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_1;
		L_1 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_0, L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ((MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_StaticFields*)il2cpp_codegen_static_fields_for(MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var))->____mask_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerMappingManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerMappingManager__cctor_mDC981AD38D6258D3669004396E8C12486FD7D544 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Quaternion _first = new Quaternion(0.5f, 0.5f, -0.5f, 0.5f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_0), (0.5f), (0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		((MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_StaticFields*)il2cpp_codegen_static_fields_for(MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var))->____first_4 = L_0;
		// private static readonly Quaternion _mask = new Quaternion(0, 0, 1, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_1), (0.0f), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		((MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_StaticFields*)il2cpp_codegen_static_fields_for(MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var))->____mask_5 = L_1;
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
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerScanningManager::.ctor(Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerScanningManager__ctor_m2C29F4DC0DADC7F70D97A15F8C033F3B1D36B81F (MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* __this, MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* ___manager0, const RuntimeMethod* method) 
{
	{
		// public MarkerScanningManager(MarkerSyncSessionManager manager)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _manager = manager;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_0 = ___manager0;
		__this->____manager_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____manager_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerScanningManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerScanningManager_Reset_m02C7669BC741C898BE62E04AB2D35FDC32E4C703 (MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerScanningManager_StartScanForMarkers_m06B89F27767F127B8D3A7598D5426FDC993A68B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_manager.ARSession != null)
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_0 = __this->____manager_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// _manager.ARSession.AnchorsAdded -= StartScanForMarkers;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_2 = __this->____manager_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(L_2, NULL);
		ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* L_4 = (ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9*)il2cpp_codegen_object_new(ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m30121D13E385306162443AAA2316CB0C55F14CCA(L_4, __this, (intptr_t)((void*)MarkerScanningManager_StartScanForMarkers_m06B89F27767F127B8D3A7598D5426FDC993A68B0_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* >::Invoke(28 /* System.Void Niantic.ARDK.AR.IARSession::remove_AnchorsAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerScanningManager::ScanToJoinSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerScanningManager_ScanToJoinSession_m3ED388A85571800DD948A43C5F70FDC0B9B4DDBE (MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerScanningManager_StartScanForMarkers_m06B89F27767F127B8D3A7598D5426FDC993A68B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE39BE21C437A58C94FDADCA408EB240947ED482D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_manager.ARSession != null) { return; }
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_0 = __this->____manager_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (_manager.ARSession != null) { return; }
		return;
	}

IL_000e:
	{
		// Debug.Log("Running scanner session.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE39BE21C437A58C94FDADCA408EB240947ED482D, NULL);
		// _manager.InitializeARSession();
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_2 = __this->____manager_0;
		NullCheck(L_2);
		MarkerSyncSessionManager_InitializeARSession_m354B48BF2593D413CA359FAB225BD0C4AF4D650C(L_2, NULL);
		// _manager.ARSession.AnchorsAdded += StartScanForMarkers;
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_3 = __this->____manager_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(L_3, NULL);
		ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* L_5 = (ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9*)il2cpp_codegen_object_new(ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArdkEventHandler_1__ctor_m30121D13E385306162443AAA2316CB0C55F14CCA(L_5, __this, (intptr_t)((void*)MarkerScanningManager_StartScanForMarkers_m06B89F27767F127B8D3A7598D5426FDC993A68B0_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* >::Invoke(27 /* System.Void Niantic.ARDK.AR.IARSession::add_AnchorsAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_4, L_5);
		// _manager.RunARSession();
		MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_6 = __this->____manager_0;
		NullCheck(L_6);
		MarkerSyncSessionManager_RunARSession_mC15853C0A8EB90FEDACF83793FFFC942C01CCF06(L_6, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerScanningManager::StartScanForMarkers(Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerScanningManager_StartScanForMarkers_m06B89F27767F127B8D3A7598D5426FDC993A68B0 (MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* __this, AnchorsArgs_t58711712713F460F8E05B14E958C48A51D111209 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE87A7548CA523908E824A6BBF45F5E03EA42E406_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARAnchor_t66754F240328EA56C08215F9B99AE69E96A70440_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA324E38F4C68B7D6FDCFE1D53348CEC2E93EA16C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerScanningManager_GotResult_m3648E0225D4E9EDDDFCA2EA2F2CB559960E377EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerScanningManager_StartScanForMarkers_m06B89F27767F127B8D3A7598D5426FDC993A68B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_mDA35F02F535B1D0AA77658176EECBFBAB97BF3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56C9CB5E98059CA91FFD6D40005E380317AD84FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA76B7DD7BDCFDC0E39C0F6BFA23364ED36B0BA5);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// foreach (var anchor in args.Anchors)
		ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E* L_0;
		L_0 = AnchorsArgs_get_Anchors_m670480D11A18849B6706476AB843002E4A503177_inline((&___args0), NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ReadOnlyCollection_1_GetEnumerator_mDA35F02F535B1D0AA77658176EECBFBAB97BF3ED(L_0, ReadOnlyCollection_1_GetEnumerator_mDA35F02F535B1D0AA77658176EECBFBAB97BF3ED_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_008e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_008e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007b_1;
			}

IL_000f_1:
			{
				// foreach (var anchor in args.Anchors)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Niantic.ARDK.AR.Anchors.IARAnchor>::get_Current() */, IEnumerator_1_tA324E38F4C68B7D6FDCFE1D53348CEC2E93EA16C_il2cpp_TypeInfo_var, L_4);
				// if (anchor.AnchorType != AnchorType.Plane)
				NullCheck(L_5);
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* Niantic.ARDK.AR.Anchors.AnchorType Niantic.ARDK.AR.Anchors.IARAnchor::get_AnchorType() */, IARAnchor_t66754F240328EA56C08215F9B99AE69E96A70440_il2cpp_TypeInfo_var, L_5);
				if ((((int32_t)L_6) == ((int32_t)1)))
				{
					goto IL_0029_1;
				}
			}
			{
				// Debug.Log("Found an anchor but not a plane");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDA76B7DD7BDCFDC0E39C0F6BFA23364ED36B0BA5, NULL);
				// continue;
				goto IL_007b_1;
			}

IL_0029_1:
			{
				// _manager.ARSession.AnchorsAdded -= StartScanForMarkers;
				MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_7 = __this->____manager_0;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(L_7, NULL);
				ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* L_9 = (ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9*)il2cpp_codegen_object_new(ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				ArdkEventHandler_1__ctor_m30121D13E385306162443AAA2316CB0C55F14CCA(L_9, __this, (intptr_t)((void*)MarkerScanningManager_StartScanForMarkers_m06B89F27767F127B8D3A7598D5426FDC993A68B0_RuntimeMethod_var), NULL);
				NullCheck(L_8);
				InterfaceActionInvoker1< ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* >::Invoke(28 /* System.Void Niantic.ARDK.AR.IARSession::remove_AnchorsAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_8, L_9);
				// _manager.InitializeARNetworking();
				MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_10 = __this->____manager_0;
				NullCheck(L_10);
				MarkerSyncSessionManager_InitializeARNetworking_m284A2142FD607037F7D4B7C63AB7479CFF549725(L_10, NULL);
				// Debug.Log("Starting scan");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral56C9CB5E98059CA91FFD6D40005E380317AD84FE, NULL);
				// _manager.ARNetworking.ScanForMarker
				// (
				//   MarkerScanOption.ScanToJoin | MarkerScanOption.ScanToSync,
				//   GotResult
				// );
				MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* L_11 = __this->____manager_0;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(L_11, NULL);
				Action_1_tE87A7548CA523908E824A6BBF45F5E03EA42E406* L_13 = (Action_1_tE87A7548CA523908E824A6BBF45F5E03EA42E406*)il2cpp_codegen_object_new(Action_1_tE87A7548CA523908E824A6BBF45F5E03EA42E406_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				Action_1__ctor_m61E4CA3A239EFADDB76E89ABA90AC37F82875EE0(L_13, __this, (intptr_t)((void*)MarkerScanningManager_GotResult_m3648E0225D4E9EDDDFCA2EA2F2CB559960E377EC_RuntimeMethod_var), NULL);
				NullCheck(L_12);
				InterfaceActionInvoker4< int32_t, Action_1_tE87A7548CA523908E824A6BBF45F5E03EA42E406*, RuntimeObject*, RuntimeObject* >::Invoke(9 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::ScanForMarker(Niantic.ARDK.AR.Networking.MarkerScanOption,System.Action`1<Niantic.ARDK.Utilities.Marker.MarkerMetadata>,Niantic.ARDK.Utilities.Marker.IMarkerScanner,Niantic.ARDK.Utilities.Marker.IMetadataSerializer) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_12, 3, L_13, (RuntimeObject*)NULL, (RuntimeObject*)NULL);
				// return;
				goto IL_008f;
			}

IL_007b_1:
			{
				// foreach (var anchor in args.Anchors)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_008f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerScanningManager::GotResult(Niantic.ARDK.Utilities.Marker.MarkerMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerScanningManager_GotResult_m3648E0225D4E9EDDDFCA2EA2F2CB559960E377EC (MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* __this, MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* ___metadata0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D6BEC6130D0969C746B2FF81B83C7EBDE7FAFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral490D6738090D132EC81B149C5A99830BAE6234C9);
		s_Il2CppMethodInitialized = true;
	}
	MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log("Got metadata: " + metadata);
		MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* L_0 = ___metadata0;
		MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteral490D6738090D132EC81B149C5A99830BAE6234C9;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteral490D6738090D132EC81B149C5A99830BAE6234C9;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0012:
	{
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log("Got message: " + Encoding.UTF8.GetString(metadata.Data));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		MarkerMetadata_tDA5E00DFEE07D62295EEFFDF32838EA91FF93680* L_5 = ___metadata0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5->___Data_2;
		NullCheck(L_4);
		String_t* L_7;
		L_7 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_4, L_6);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral35D6BEC6130D0969C746B2FF81B83C7EBDE7FAFD, L_7, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// }
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
// Niantic.ARDK.AR.IARSession Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::get_ARSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	{
		// public IARSession ARSession { get; private set; }
		RuntimeObject* L_0 = __this->___U3CARSessionU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::set_ARSession(Niantic.ARDK.AR.IARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_set_ARSession_m6C985BD7774D91290A17531658940AB3CC68395B (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IARSession ARSession { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CARSessionU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CARSessionU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::get_ARNetworking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	{
		// public IARNetworking ARNetworking { get; private set; }
		RuntimeObject* L_0 = __this->___U3CARNetworkingU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::set_ARNetworking(Niantic.ARDK.AR.Networking.IARNetworking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_set_ARNetworking_m3B0F41304BAB944A571A1CE3F0DADE7725303C00 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IARNetworking ARNetworking { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CARNetworkingU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CARNetworkingU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// Niantic.ARDK.Extensions.MarkerSync.BarcodeDisplay Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::get_BarcodeDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* MarkerSyncSessionManager_get_BarcodeDisplay_m0AAD96722DCF888357FC59A3C91F285D15CE62DD (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	{
		// get { return _barcodeDisplay; }
		BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* L_0 = __this->____barcodeDisplay_4;
		return L_0;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_Awake_m7861DC46ADD2DDE0A292C8087D5C613F3A8A9983 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_CreateSession_mE996F9BF24D5482C4E8E05451F1993C3B573F5E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerScanningManager_ScanToJoinSession_m3ED388A85571800DD948A43C5F70FDC0B9B4DDBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerSyncSessionManager_BackToInitialization_mBE5297EA076EAA8755EF1B548BC319C477B14A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _scanPlaneReminder.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____scanPlaneReminder_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// _mapper = new MarkerMappingManager(this);
		MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* L_2 = (MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3*)il2cpp_codegen_object_new(MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MarkerMappingManager__ctor_mE6B6A5835C7943CD2C462279495D9C9F2FDD36C3(L_2, __this, NULL);
		__this->____mapper_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mapper_10), (void*)L_2);
		// _scanner = new MarkerScanningManager(this);
		MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* L_3 = (MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E*)il2cpp_codegen_object_new(MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MarkerScanningManager__ctor_m2C29F4DC0DADC7F70D97A15F8C033F3B1D36B81F(L_3, __this, NULL);
		__this->____scanner_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scanner_11), (void*)L_3);
		// _createButton.onClick.AddListener(_mapper.CreateSession);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->____createButton_6;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* L_6 = __this->____mapper_10;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, L_6, (intptr_t)((void*)MarkerMappingManager_CreateSession_mE996F9BF24D5482C4E8E05451F1993C3B573F5E2_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_7, NULL);
		// _scanButton.onClick.AddListener(_scanner.ScanToJoinSession);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->____scanButton_7;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_8, NULL);
		MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* L_10 = __this->____scanner_11;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, L_10, (intptr_t)((void*)MarkerScanningManager_ScanToJoinSession_m3ED388A85571800DD948A43C5F70FDC0B9B4DDBE_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_9, L_11, NULL);
		// _resetButton.onClick.AddListener(BackToInitialization);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->____resetButton_8;
		NullCheck(L_12);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_13;
		L_13 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)MarkerSyncSessionManager_BackToInitialization_mBE5297EA076EAA8755EF1B548BC319C477B14A08_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_OnDestroy_m068B7FA6C74A08DA3A68F2E2E6C619EDA8B415FE (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	{
		// _mapper.Reset();
		MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* L_0 = __this->____mapper_10;
		NullCheck(L_0);
		MarkerMappingManager_Reset_mE9A3BB11ED0601668FB0A634E22BA6209B3B3773(L_0, NULL);
		// _scanner.Reset();
		MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* L_1 = __this->____scanner_11;
		NullCheck(L_1);
		MarkerScanningManager_Reset_m02C7669BC741C898BE62E04AB2D35FDC32E4C703(L_1, NULL);
		// ResetSessions();
		MarkerSyncSessionManager_ResetSessions_m0C66A07D86703A00D2C4C9CDDD3641DAC6881096(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::BackToInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_BackToInitialization_mBE5297EA076EAA8755EF1B548BC319C477B14A08 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	{
		// ResetSessions();
		MarkerSyncSessionManager_ResetSessions_m0C66A07D86703A00D2C4C9CDDD3641DAC6881096(__this, NULL);
		// _startupUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____startupUI_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// _mapper.Reset();
		MarkerMappingManager_t620970C1422A5665B031372706B73BAEE6E9BDC3* L_1 = __this->____mapper_10;
		NullCheck(L_1);
		MarkerMappingManager_Reset_mE9A3BB11ED0601668FB0A634E22BA6209B3B3773(L_1, NULL);
		// _scanner.Reset();
		MarkerScanningManager_tED12C4CE05E0C3D02DF62AF5B65A594643AE829E* L_2 = __this->____scanner_11;
		NullCheck(L_2);
		MarkerScanningManager_Reset_m02C7669BC741C898BE62E04AB2D35FDC32E4C703(L_2, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::ResetSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_ResetSessions_m0C66A07D86703A00D2C4C9CDDD3641DAC6881096 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARSession != null)
		RuntimeObject* L_0;
		L_0 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// ARSession.Dispose();
		RuntimeObject* L_1;
		L_1 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(__this, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
		// ARSession = null;
		MarkerSyncSessionManager_set_ARSession_m6C985BD7774D91290A17531658940AB3CC68395B_inline(__this, (RuntimeObject*)NULL, NULL);
	}

IL_001a:
	{
		// if (ARNetworking != null)
		RuntimeObject* L_2;
		L_2 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0073;
		}
	}
	{
		// if (ARNetworking.Networking != null)
		RuntimeObject* L_3;
		L_3 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		// if (ARNetworking.Networking.IsConnected)
		RuntimeObject* L_5;
		L_5 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// ARNetworking.Networking.Leave();
		RuntimeObject* L_8;
		L_8 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(13 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::Leave() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_9);
	}

IL_0051:
	{
		// ARNetworking.Networking.Dispose();
		RuntimeObject* L_10;
		L_10 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
	}

IL_0061:
	{
		// ARNetworking.Dispose();
		RuntimeObject* L_12;
		L_12 = MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline(__this, NULL);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
		// ARNetworking = null;
		MarkerSyncSessionManager_set_ARNetworking_m3B0F41304BAB944A571A1CE3F0DADE7725303C00_inline(__this, (RuntimeObject*)NULL, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::RunARSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_RunARSession_mC15853C0A8EB90FEDACF83793FFFC942C01CCF06 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARConfiguration_t63AD4587231BC6249D6ED8AB8BC140DCA79F6ABE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerSyncSessionManager_AnchorsAdded_m35962FEEAC24259DB8A1D0F8F9795EB2F56D262D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25B7FDB1B17EAA279DB149A6E291F2F0454FD05B);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (ARSession == null)
		RuntimeObject* L_0;
		L_0 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("Need to create an ARSession before running it.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral25B7FDB1B17EAA279DB149A6E291F2F0454FD05B, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// var configuration = ARWorldTrackingConfigurationFactory.Create();
		RuntimeObject* L_1;
		L_1 = ARWorldTrackingConfigurationFactory_Create_m3ACFE8B7DEE0D1C1F58DF1900C6B893175E5B8FF(NULL);
		V_0 = L_1;
		// configuration.WorldAlignment = WorldAlignment.Gravity;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Niantic.ARDK.AR.Configuration.IARConfiguration::set_WorldAlignment(Niantic.ARDK.AR.Configuration.WorldAlignment) */, IARConfiguration_t63AD4587231BC6249D6ED8AB8BC140DCA79F6ABE_il2cpp_TypeInfo_var, L_2, 0);
		// configuration.IsLightEstimationEnabled = true;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Niantic.ARDK.AR.Configuration.IARConfiguration::set_IsLightEstimationEnabled(System.Boolean) */, IARConfiguration_t63AD4587231BC6249D6ED8AB8BC140DCA79F6ABE_il2cpp_TypeInfo_var, L_3, (bool)1);
		// configuration.IsAutoFocusEnabled = true;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(5 /* System.Void Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration::set_IsAutoFocusEnabled(System.Boolean) */, IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var, L_4, (bool)1);
		// configuration.PlaneDetection = PlaneDetection.Horizontal;
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration::set_PlaneDetection(Niantic.ARDK.AR.Configuration.PlaneDetection) */, IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var, L_5, 1);
		// configuration.IsSharedExperienceEnabled = true;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration::set_IsSharedExperienceEnabled(System.Boolean) */, IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var, L_6, (bool)1);
		// ARSession.Run(configuration);
		RuntimeObject* L_7;
		L_7 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(__this, NULL);
		RuntimeObject* L_8 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker2< RuntimeObject*, int32_t >::Invoke(11 /* System.Void Niantic.ARDK.AR.IARSession::Run(Niantic.ARDK.AR.Configuration.IARConfiguration,Niantic.ARDK.AR.ARSessionRunOptions) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_7, L_8, 0);
		// ARSession.AnchorsAdded += AnchorsAdded;
		RuntimeObject* L_9;
		L_9 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(__this, NULL);
		ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* L_10 = (ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9*)il2cpp_codegen_object_new(ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ArdkEventHandler_1__ctor_m30121D13E385306162443AAA2316CB0C55F14CCA(L_10, __this, (intptr_t)((void*)MarkerSyncSessionManager_AnchorsAdded_m35962FEEAC24259DB8A1D0F8F9795EB2F56D262D_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* >::Invoke(27 /* System.Void Niantic.ARDK.AR.IARSession::add_AnchorsAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_9, L_10);
		// _scanPlaneReminder.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->____scanPlaneReminder_9;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::AnchorsAdded(Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_AnchorsAdded_m35962FEEAC24259DB8A1D0F8F9795EB2F56D262D (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, AnchorsArgs_t58711712713F460F8E05B14E958C48A51D111209 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerSyncSessionManager_AnchorsAdded_m35962FEEAC24259DB8A1D0F8F9795EB2F56D262D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSession.AnchorsAdded -= AnchorsAdded;
		RuntimeObject* L_0;
		L_0 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(__this, NULL);
		ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* L_1 = (ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9*)il2cpp_codegen_object_new(ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArdkEventHandler_1__ctor_m30121D13E385306162443AAA2316CB0C55F14CCA(L_1, __this, (intptr_t)((void*)MarkerSyncSessionManager_AnchorsAdded_m35962FEEAC24259DB8A1D0F8F9795EB2F56D262D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< ArdkEventHandler_1_t49750CE4D6E7118DC43F3E338BFC789BDB443CB9* >::Invoke(28 /* System.Void Niantic.ARDK.AR.IARSession::remove_AnchorsAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnchorsArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_0, L_1);
		// _scanPlaneReminder.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____scanPlaneReminder_9;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::InitializeARSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_InitializeARSession_m354B48BF2593D413CA359FAB225BD0C4AF4D650C (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F2796AFD3A7281DA951AEC335F09CD86B184C71);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _startupUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____startupUI_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// ARSession = ARSessionFactory.Create();
		il2cpp_codegen_initobj((&V_0), sizeof(Guid_t));
		Guid_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = ARSessionFactory_Create_m24CC99F4E7C634039365DF1558EE2708C925A559(L_1, NULL);
		MarkerSyncSessionManager_set_ARSession_m6C985BD7774D91290A17531658940AB3CC68395B_inline(__this, L_2, NULL);
		// if (ARSession == null)
		RuntimeObject* L_3;
		L_3 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(__this, NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.LogError("Failed to initialize ARSession.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9F2796AFD3A7281DA951AEC335F09CD86B184C71, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::InitializeARNetworking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_InitializeARNetworking_m284A2142FD607037F7D4B7C63AB7479CFF549725 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARNetworking = ARNetworkingFactory.Create(ARSession);
		RuntimeObject* L_0;
		L_0 = MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = ARNetworkingFactory_Create_m005B4BB83090342DAF90BEB8A2C68FD7AAECF2AA(L_0, NULL);
		MarkerSyncSessionManager_set_ARNetworking_m3B0F41304BAB944A571A1CE3F0DADE7725303C00_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_Update_mDBE8AEBCCB2B4D2C4571482B061D985C75C777F8 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// UpdateTick?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___UpdateTick_14;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.MarkerSync.MarkerSyncSessionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSyncSessionManager__ctor_m9B56B6D71C8473794609F8196B49814A6FFA4305 (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Niantic.ARDKExamples.Configuration.ConfigHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigHelper_Awake_m6AE798E7603A2084A000A754F447C36F475D132C (ConfigHelper_tE36F8DCB3025DD56BDAEFD2405DA4680664469F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkGlobalConfig_t3307B4653A987A5903FE7CB37B11BC0F03DA5DF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9961C07DD002E8AE6267303EC5D75888DF462567);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.IsNullOrEmpty(_contextAwarenessUrl))
		String_t* L_0 = __this->____contextAwarenessUrl_4;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		// if (ArdkGlobalConfig.SetContextAwarenessUrl(_contextAwarenessUrl))
		String_t* L_2 = __this->____contextAwarenessUrl_4;
		il2cpp_codegen_runtime_class_init_inline(ArdkGlobalConfig_t3307B4653A987A5903FE7CB37B11BC0F03DA5DF8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ArdkGlobalConfig_SetContextAwarenessUrl_mC7F999C21C17160ACBC5E279092BD70B9B7029A3(L_2, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.Log("Set the Context Awareness URL to: " + _contextAwarenessUrl);
		String_t* L_4 = __this->____contextAwarenessUrl_4;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9961C07DD002E8AE6267303EC5D75888DF462567, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Configuration.ConfigHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigHelper__ctor_m31BB809F0B3D182A6945A8D3CB785C3831733982 (ConfigHelper_tE36F8DCB3025DD56BDAEFD2405DA4680664469F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _contextAwarenessUrl = "";
		__this->____contextAwarenessUrl_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____contextAwarenessUrl_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Niantic.ARDKExamples.Helpers.ARHitTester::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHitTester_Start_mF613D853801C9790793F005D996C2AAC1DFDFA36 (ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARHitTester_OnAnyARSessionDidInitialize_m182FEB8AF45044254C30917EF135B90D49FFFA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSessionFactory.SessionInitialized += OnAnyARSessionDidInitialize;
		ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* L_0 = (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*)il2cpp_codegen_object_new(ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507(L_0, __this, (intptr_t)((void*)ARHitTester_OnAnyARSessionDidInitialize_m182FEB8AF45044254C30917EF135B90D49FFFA4C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		ARSessionFactory_add_SessionInitialized_m718A16A7689C0CA6B674979A1419F6456A3C016D(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARHitTester::OnAnyARSessionDidInitialize(Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHitTester_OnAnyARSessionDidInitialize_m182FEB8AF45044254C30917EF135B90D49FFFA4C (ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40* __this, AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARHitTester_OnSessionDeinitialized_m4495B281BD5C90ADD05BBA0E4BAF76AE2C3DB1F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _session = args.Session;
		RuntimeObject* L_0;
		L_0 = AnyARSessionInitializedArgs_get_Session_mE6A718E2634C4094FC47FEA581B0C40F19E19487_inline((&___args0), NULL);
		__this->____session_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____session_8), (void*)L_0);
		// _session.Deinitialized += OnSessionDeinitialized;
		RuntimeObject* L_1 = __this->____session_8;
		ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3* L_2 = (ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3*)il2cpp_codegen_object_new(ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArdkEventHandler_1__ctor_m415EC7077DBE8CFB79ECD09F210F1F5012B40959(L_2, __this, (intptr_t)((void*)ARHitTester_OnSessionDeinitialized_m4495B281BD5C90ADD05BBA0E4BAF76AE2C3DB1F4_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3* >::Invoke(17 /* System.Void Niantic.ARDK.AR.IARSession::add_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionDeinitializedArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARHitTester::OnSessionDeinitialized(Niantic.ARDK.AR.ARSessionEventArgs.ARSessionDeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHitTester_OnSessionDeinitialized_m4495B281BD5C90ADD05BBA0E4BAF76AE2C3DB1F4 (ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40* __this, ARSessionDeinitializedArgs_t3380997AC55EC746D573D7C6AE35691944859A3C ___args0, const RuntimeMethod* method) 
{
	{
		// ClearObjects();
		ARHitTester_ClearObjects_m3E7637DC36BC1658EF31D34FF85BB1B7E2654CE2(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARHitTester::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHitTester_OnDestroy_m89838D23212529A6074224849669ED28377F9515 (ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARHitTester_OnAnyARSessionDidInitialize_m182FEB8AF45044254C30917EF135B90D49FFFA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSessionFactory.SessionInitialized -= OnAnyARSessionDidInitialize;
		ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* L_0 = (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*)il2cpp_codegen_object_new(ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507(L_0, __this, (intptr_t)((void*)ARHitTester_OnAnyARSessionDidInitialize_m182FEB8AF45044254C30917EF135B90D49FFFA4C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		ARSessionFactory_remove_SessionInitialized_m9EAA2283AA72DBD23DA9ED4B7DD7C4325ED42740(L_0, NULL);
		// _session = null;
		__this->____session_8 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____session_8), (void*)(RuntimeObject*)NULL);
		// ClearObjects();
		ARHitTester_ClearObjects_m3E7637DC36BC1658EF31D34FF85BB1B7E2654CE2(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARHitTester::ClearObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHitTester_ClearObjects_m3E7637DC36BC1658EF31D34FF85BB1B7E2654CE2 (ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var placedObject in _placedObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____placedObjects_7;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var placedObject in _placedObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(placedObject);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var placedObject in _placedObjects)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// _placedObjects.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->____placedObjects_7;
		NullCheck(L_4);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_4, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARHitTester::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHitTester_Update_m1EEFEE2912F9874B71A435A7FA6A4679BC4FF4FF (ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_session == null)
		RuntimeObject* L_0 = __this->____session_8;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (PlatformAgnosticInput.touchCount <= 0)
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = PlatformAgnosticInput_get_touchCount_m7B5705756A3948A905D86BA45AE1D8D557AD7FA3(NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// var touch = PlatformAgnosticInput.GetTouch(0);
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = PlatformAgnosticInput_GetTouch_m67C8FA8D9C111F706AF6AEE6F18EC88841B84E3F(0, NULL);
		V_0 = L_2;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		// TouchBegan(touch);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4 = V_0;
		ARHitTester_TouchBegan_m4F2DB451323C990CC1C5582AA0D42C52E6FC8FA7(__this, L_4, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARHitTester::TouchBegan(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHitTester_TouchBegan_m4F2DB451323C990CC1C5582AA0D42C52E6FC8FA7 (ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorType_tCB38DE79343C43E4E1CB9517B17716354EDE7866_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARAnchor_t66754F240328EA56C08215F9B99AE69E96A70440_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARFrame_tCF4C31DB7FD454D960AF22DF95E39666B398A58B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARHitTestResult_t7C42BBC455DA5446916EED4B480FD4356DCC7215_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral319A979647C3945B6D648690195C31DD944C0238);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE78E15F7D17D1EEED5BD22C4FDBFB07DDCC813D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B6_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	String_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_3 = NULL;
	String_t* G_B7_4 = NULL;
	{
		// var currentFrame = _session.CurrentFrame;
		RuntimeObject* L_0 = __this->____session_8;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Niantic.ARDK.AR.IARFrame Niantic.ARDK.AR.IARSession::get_CurrentFrame() */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// if (currentFrame == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// var results = currentFrame.HitTest
		// (
		//   Camera.pixelWidth,
		//   Camera.pixelHeight,
		//   touch.position,
		//   HitTestType
		// );
		RuntimeObject* L_3 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___Camera_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_4, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___Camera_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___touch0), NULL);
		int32_t L_9 = __this->___HitTestType_5;
		NullCheck(L_3);
		ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* L_10;
		L_10 = InterfaceFuncInvoker4< ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1*, int32_t, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(15 /* System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.HitTest.IARHitTestResult> Niantic.ARDK.AR.IARFrame::HitTest(System.Int32,System.Int32,UnityEngine.Vector2,Niantic.ARDK.AR.HitTest.ARHitTestResultType) */, IARFrame_tCF4C31DB7FD454D960AF22DF95E39666B398A58B_il2cpp_TypeInfo_var, L_3, L_5, L_7, L_8, L_9);
		V_1 = L_10;
		// int count = results.Count;
		ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA(L_11, ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA_RuntimeMethod_var);
		V_2 = L_12;
		// Debug.Log("Hit test results: " + count);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral319A979647C3945B6D648690195C31DD944C0238, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// if (count <= 0)
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// return;
		return;
	}

IL_005c:
	{
		// var result = results[0];
		ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* L_16 = V_1;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32(L_16, 0, ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32_RuntimeMethod_var);
		// var hitPosition = result.WorldTransform.ToPosition();
		RuntimeObject* L_18 = L_17;
		NullCheck(L_18);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19;
		L_19 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(4 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.HitTest.IARHitTestResult::get_WorldTransform() */, IARHitTestResult_t7C42BBC455DA5446916EED4B480FD4356DCC7215_il2cpp_TypeInfo_var, L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = MatrixUtils_ToPosition_mD2843F95E2F6F40B53CED436EE9C3517F6D910E5(L_19, NULL);
		V_3 = L_20;
		// _placedObjects.Add(Instantiate(PlacementObjectPf, hitPosition, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_21 = __this->____placedObjects_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___PlacementObjectPf_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_22, L_23, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_21);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_21, L_25, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// var anchor = result.Anchor;
		NullCheck(L_18);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Niantic.ARDK.AR.Anchors.IARAnchor Niantic.ARDK.AR.HitTest.IARHitTestResult::get_Anchor() */, IARHitTestResult_t7C42BBC455DA5446916EED4B480FD4356DCC7215_il2cpp_TypeInfo_var, L_18);
		V_4 = L_26;
		// Debug.LogFormat
		// (
		//   "Spawning cube at {0} (anchor: {1})",
		//   hitPosition.ToString("F4"),
		//   anchor == null
		//     ? "none"
		//     : anchor.AnchorType + " " + anchor.Identifier
		// );
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_27;
		String_t* L_29;
		L_29 = Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1((&V_3), _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_28;
		RuntimeObject* L_31 = V_4;
		G_B5_0 = 1;
		G_B5_1 = L_30;
		G_B5_2 = L_30;
		G_B5_3 = _stringLiteralEE78E15F7D17D1EEED5BD22C4FDBFB07DDCC813D;
		if (!L_31)
		{
			G_B6_0 = 1;
			G_B6_1 = L_30;
			G_B6_2 = L_30;
			G_B6_3 = _stringLiteralEE78E15F7D17D1EEED5BD22C4FDBFB07DDCC813D;
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_32 = V_4;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* Niantic.ARDK.AR.Anchors.AnchorType Niantic.ARDK.AR.Anchors.IARAnchor::get_AnchorType() */, IARAnchor_t66754F240328EA56C08215F9B99AE69E96A70440_il2cpp_TypeInfo_var, L_32);
		V_5 = L_33;
		Il2CppFakeBox<int32_t> L_34(AnchorType_tCB38DE79343C43E4E1CB9517B17716354EDE7866_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_35;
		L_35 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_34), NULL);
		RuntimeObject* L_36 = V_4;
		NullCheck(L_36);
		Guid_t L_37;
		L_37 = InterfaceFuncInvoker0< Guid_t >::Invoke(1 /* System.Guid Niantic.ARDK.AR.Anchors.IARAnchor::get_Identifier() */, IARAnchor_t66754F240328EA56C08215F9B99AE69E96A70440_il2cpp_TypeInfo_var, L_36);
		V_6 = L_37;
		String_t* L_38;
		L_38 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_6), NULL);
		String_t* L_39;
		L_39 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_35, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_38, NULL);
		G_B7_0 = L_39;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_00ef;
	}

IL_00ea:
	{
		G_B7_0 = _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_00ef:
	{
		NullCheck(G_B7_2);
		ArrayElementTypeCheck (G_B7_2, G_B7_0);
		(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (RuntimeObject*)G_B7_0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(G_B7_4, G_B7_3, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARHitTester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHitTester__ctor_mEF5B8275F210C35EBA815508FD9C39F29AF28BC1 (ARHitTester_tC61A021111AF763EEBA69C43F9F2B18337877A40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ARHitTestResultType HitTestType = ARHitTestResultType.ExistingPlane;
		__this->___HitTestType_5 = ((int32_t)16);
		// private List<GameObject> _placedObjects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____placedObjects_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____placedObjects_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::ListenToNetworking(Niantic.ARDK.Networking.IMultipeerNetworking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_ListenToNetworking_m4B49E1A96EBF34B269A7DF04733A8392F148D82E (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, RuntimeObject* ___networking0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnConnectionDidFailWithError_m8FEDC44584B76B67AA4D32DA948E10D3D16EB0E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnNetworkConnected_m3C7601D0A09EE10A4775CA4758B348D2BE4D5130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnNetworkDeinitialized_mA8899B6C5A13D1CD2D80034D7B9E70F502B248AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnNetworkDisconnected_m3B055430BA4109E3796FBBA839353E44FA834171_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnPeerAdded_mFD4FD1EF70ECBD1DFC7FB6B5DDCC6CFAC213D33A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnPeerRemoved_m8EC1E7BE4654C88680B83164B18DB7F22C849411_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopListeningToNetworking();
		NetworkStatus_StopListeningToNetworking_m232D1A06AAD39F10CDD2F7B1EF1023D5CF902FAB(__this, NULL);
		// UpdateIndicator(NetworkState.Initialized);
		NetworkStatus_UpdateIndicator_mC9E3379AC77E1009EEDF945E3F63104E2A5BF2CE(__this, 1, (String_t*)NULL, NULL);
		// _networking = networking;
		RuntimeObject* L_0 = ___networking0;
		__this->____networking_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_7), (void*)L_0);
		// _networking.Connected += OnNetworkConnected;
		RuntimeObject* L_1 = __this->____networking_7;
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_2 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_2, __this, (intptr_t)((void*)NetworkStatus_OnNetworkConnected_m3C7601D0A09EE10A4775CA4758B348D2BE4D5130_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(16 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1, L_2);
		// _networking.ConnectionFailed += OnConnectionDidFailWithError;
		RuntimeObject* L_3 = __this->____networking_7;
		ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_4 = (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)il2cpp_codegen_object_new(ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE(L_4, __this, (intptr_t)((void*)NetworkStatus_OnConnectionDidFailWithError_m8FEDC44584B76B67AA4D32DA948E10D3D16EB0E5_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* >::Invoke(18 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_ConnectionFailed(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_3, L_4);
		// _networking.PeerAdded += OnPeerAdded;
		RuntimeObject* L_5 = __this->____networking_7;
		ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* L_6 = (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0*)il2cpp_codegen_object_new(ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64(L_6, __this, (intptr_t)((void*)NetworkStatus_OnPeerAdded_mFD4FD1EF70ECBD1DFC7FB6B5DDCC6CFAC213D33A_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* >::Invoke(24 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PeerAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_5, L_6);
		// _networking.PeerRemoved += OnPeerRemoved;
		RuntimeObject* L_7 = __this->____networking_7;
		ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* L_8 = (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1(L_8, __this, (intptr_t)((void*)NetworkStatus_OnPeerRemoved_m8EC1E7BE4654C88680B83164B18DB7F22C849411_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* >::Invoke(26 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PeerRemoved(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_7, L_8);
		// _networking.Disconnected += OnNetworkDisconnected;
		RuntimeObject* L_9 = __this->____networking_7;
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_10 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_10, __this, (intptr_t)((void*)NetworkStatus_OnNetworkDisconnected_m3B055430BA4109E3796FBBA839353E44FA834171_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(20 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_9, L_10);
		// _networking.Deinitialized += OnNetworkDeinitialized;
		RuntimeObject* L_11 = __this->____networking_7;
		ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* L_12 = (ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF*)il2cpp_codegen_object_new(ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ArdkEventHandler_1__ctor_mDE16F0ADC31F58EA85D854D2E7333491E8BF5C55(L_12, __this, (intptr_t)((void*)NetworkStatus_OnNetworkDeinitialized_mA8899B6C5A13D1CD2D80034D7B9E70F502B248AA_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* >::Invoke(30 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_11, L_12);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::StopListeningToNetworking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_StopListeningToNetworking_m232D1A06AAD39F10CDD2F7B1EF1023D5CF902FAB (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnConnectionDidFailWithError_m8FEDC44584B76B67AA4D32DA948E10D3D16EB0E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnNetworkConnected_m3C7601D0A09EE10A4775CA4758B348D2BE4D5130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnNetworkDeinitialized_mA8899B6C5A13D1CD2D80034D7B9E70F502B248AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnNetworkDisconnected_m3B055430BA4109E3796FBBA839353E44FA834171_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnPeerAdded_mFD4FD1EF70ECBD1DFC7FB6B5DDCC6CFAC213D33A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnPeerRemoved_m8EC1E7BE4654C88680B83164B18DB7F22C849411_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_networking == null)
		RuntimeObject* L_0 = __this->____networking_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _networking.Connected -= OnNetworkConnected;
		RuntimeObject* L_1 = __this->____networking_7;
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_2 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_2, __this, (intptr_t)((void*)NetworkStatus_OnNetworkConnected_m3C7601D0A09EE10A4775CA4758B348D2BE4D5130_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(17 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1, L_2);
		// _networking.ConnectionFailed -= OnConnectionDidFailWithError;
		RuntimeObject* L_3 = __this->____networking_7;
		ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_4 = (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)il2cpp_codegen_object_new(ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE(L_4, __this, (intptr_t)((void*)NetworkStatus_OnConnectionDidFailWithError_m8FEDC44584B76B67AA4D32DA948E10D3D16EB0E5_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* >::Invoke(19 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_ConnectionFailed(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_3, L_4);
		// _networking.PeerAdded -= OnPeerAdded;
		RuntimeObject* L_5 = __this->____networking_7;
		ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* L_6 = (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0*)il2cpp_codegen_object_new(ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64(L_6, __this, (intptr_t)((void*)NetworkStatus_OnPeerAdded_mFD4FD1EF70ECBD1DFC7FB6B5DDCC6CFAC213D33A_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* >::Invoke(25 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_PeerAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_5, L_6);
		// _networking.PeerRemoved -= OnPeerRemoved;
		RuntimeObject* L_7 = __this->____networking_7;
		ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* L_8 = (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1(L_8, __this, (intptr_t)((void*)NetworkStatus_OnPeerRemoved_m8EC1E7BE4654C88680B83164B18DB7F22C849411_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* >::Invoke(27 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_PeerRemoved(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_7, L_8);
		// _networking.Disconnected -= OnNetworkDisconnected;
		RuntimeObject* L_9 = __this->____networking_7;
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_10 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_10, __this, (intptr_t)((void*)NetworkStatus_OnNetworkDisconnected_m3B055430BA4109E3796FBBA839353E44FA834171_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(21 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_9, L_10);
		// _networking.Deinitialized -= OnNetworkDeinitialized;
		RuntimeObject* L_11 = __this->____networking_7;
		ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* L_12 = (ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF*)il2cpp_codegen_object_new(ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ArdkEventHandler_1__ctor_mDE16F0ADC31F58EA85D854D2E7333491E8BF5C55(L_12, __this, (intptr_t)((void*)NetworkStatus_OnNetworkDeinitialized_mA8899B6C5A13D1CD2D80034D7B9E70F502B248AA_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* >::Invoke(31 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_11, L_12);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_Awake_mD531EAA1307D01915B9362A7CCA94ACF522DE14E (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, const RuntimeMethod* method) 
{
	{
		// UpdateIndicator(NetworkState.Uninitialized);
		NetworkStatus_UpdateIndicator_mC9E3379AC77E1009EEDF945E3F63104E2A5BF2CE(__this, 0, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_Start_mE11E7480ACA3611BA47FB702FB5610E1D4AF29AF (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnNetworkingInitialized_mDC19EBCFCA51DA7812996A8F970C26ED120A74F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_networking == null)
		RuntimeObject* L_0 = __this->____networking_7;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// MultipeerNetworkingFactory.NetworkingInitialized += OnNetworkingInitialized;
		ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* L_1 = (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*)il2cpp_codegen_object_new(ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0(L_1, __this, (intptr_t)((void*)NetworkStatus_OnNetworkingInitialized_mDC19EBCFCA51DA7812996A8F970C26ED120A74F1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		MultipeerNetworkingFactory_add_NetworkingInitialized_mFBF83360EBD8C80EFF3451CF0F6509E311F88712(L_1, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_OnDestroy_m94893B6345532357376A7758786A409E528487CD (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatus_OnNetworkingInitialized_mDC19EBCFCA51DA7812996A8F970C26ED120A74F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MultipeerNetworkingFactory.NetworkingInitialized -= OnNetworkingInitialized;
		ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* L_0 = (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*)il2cpp_codegen_object_new(ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0(L_0, __this, (intptr_t)((void*)NetworkStatus_OnNetworkingInitialized_mDC19EBCFCA51DA7812996A8F970C26ED120A74F1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		MultipeerNetworkingFactory_remove_NetworkingInitialized_m24FCD65FCD7A20E4CF71CBA6292917ACEBE73F06(L_0, NULL);
		// StopListeningToNetworking();
		NetworkStatus_StopListeningToNetworking_m232D1A06AAD39F10CDD2F7B1EF1023D5CF902FAB(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::OnNetworkingInitialized(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_OnNetworkingInitialized_mDC19EBCFCA51DA7812996A8F970C26ED120A74F1 (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29634F49BD2FA4DE7411DB7C343FD50F8A7BB714);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_networking != null)
		RuntimeObject* L_0 = __this->____networking_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Debug.Log("Network session initialized");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral29634F49BD2FA4DE7411DB7C343FD50F8A7BB714, NULL);
		// ListenToNetworking(args.Networking);
		AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 L_1 = ___args0;
		RuntimeObject* L_2 = L_1.___Networking_0;
		NetworkStatus_ListenToNetworking_m4B49E1A96EBF34B269A7DF04733A8392F148D82E(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::OnNetworkConnected(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_OnNetworkConnected_m3C7601D0A09EE10A4775CA4758B348D2BE4D5130 (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9F695DD3B5A3450B2723A76ED53EEF1629BA22F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5684F3071933DB49B55A45583E7FE6BD607EF608);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAB3542AA1E352D8F99B5BE745A63AD4B461B47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		// var state = args.IsHost ? NetworkState.ConnectedAsHost : NetworkState.ConnectedAsPeer;
		bool L_0;
		L_0 = ConnectedArgs_get_IsHost_mA2DF2037DBF198DE7B431749F764F04D3900E16E((&___args0), NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 3;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		// var self = args.Self;
		RuntimeObject* L_1;
		L_1 = ConnectedArgs_get_Self_m19392C6C88B37599DB1F5C621DFC859FADB5E413_inline((&___args0), NULL);
		V_1 = L_1;
		// var msg = string.Format("{0}\n{1}", _indicatorMessages[state], self.ToString(PeerIdLimit));
		Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* L_2 = __this->____indicatorMessages_10;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Dictionary_2_get_Item_m9F695DD3B5A3450B2723A76ED53EEF1629BA22F0(L_2, L_3, Dictionary_2_get_Item_m9F695DD3B5A3450B2723A76ED53EEF1629BA22F0_RuntimeMethod_var);
		RuntimeObject* L_5 = V_1;
		int32_t L_6 = __this->___PeerIdLimit_6;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Niantic.ARDK.Networking.IPeer::ToString(System.Int32) */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_5, L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43, L_4, L_7, NULL);
		V_2 = L_8;
		// UpdateIndicator(state, msg);
		int32_t L_9 = V_0;
		String_t* L_10 = V_2;
		NetworkStatus_UpdateIndicator_mC9E3379AC77E1009EEDF945E3F63104E2A5BF2CE(__this, L_9, L_10, NULL);
		// Debug.Log(_indicatorMessages[state]);
		Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* L_11 = __this->____indicatorMessages_10;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = Dictionary_2_get_Item_m9F695DD3B5A3450B2723A76ED53EEF1629BA22F0(L_11, L_12, Dictionary_2_get_Item_m9F695DD3B5A3450B2723A76ED53EEF1629BA22F0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// Debug.Log(string.Format("\tSelf ID: {0}", self.Identifier));
		RuntimeObject* L_14 = V_1;
		NullCheck(L_14);
		Guid_t L_15;
		L_15 = InterfaceFuncInvoker0< Guid_t >::Invoke(0 /* System.Guid Niantic.ARDK.Networking.IPeer::get_Identifier() */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_14);
		Guid_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Guid_t_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5EAB3542AA1E352D8F99B5BE745A63AD4B461B47, L_17, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
		// Debug.Log(string.Format("\tHost ID: {0}", args.Host.Identifier));
		RuntimeObject* L_19;
		L_19 = ConnectedArgs_get_Host_m4EAEECDB6477203479B2C4836522486E7CAE4DF7_inline((&___args0), NULL);
		NullCheck(L_19);
		Guid_t L_20;
		L_20 = InterfaceFuncInvoker0< Guid_t >::Invoke(0 /* System.Guid Niantic.ARDK.Networking.IPeer::get_Identifier() */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_19);
		Guid_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Guid_t_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5684F3071933DB49B55A45583E7FE6BD607EF608, L_22, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_23, NULL);
		// _lastNetworkError = 0;
		__this->____lastNetworkError_8 = 0;
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::OnNetworkDisconnected(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_OnNetworkDisconnected_m3B055430BA4109E3796FBBA839353E44FA834171 (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral325AB5015D524BEC08CFDA626553B04ABA0F9E3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateIndicator(NetworkState.Initialized);
		NetworkStatus_UpdateIndicator_mC9E3379AC77E1009EEDF945E3F63104E2A5BF2CE(__this, 1, (String_t*)NULL, NULL);
		// Debug.Log("Disconnected from network");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral325AB5015D524BEC08CFDA626553B04ABA0F9E3B, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::OnNetworkDeinitialized(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_OnNetworkDeinitialized_mA8899B6C5A13D1CD2D80034D7B9E70F502B248AA (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, DeinitializedArgs_t9E20E228D8359F47DB613E62FF5ED0BC3548A24F ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6E85A0F6970F8DFAF7516DBF8CB189A8279DC72);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateIndicator(NetworkState.Uninitialized);
		NetworkStatus_UpdateIndicator_mC9E3379AC77E1009EEDF945E3F63104E2A5BF2CE(__this, 0, (String_t*)NULL, NULL);
		// Debug.Log("Network session was deinitialized");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD6E85A0F6970F8DFAF7516DBF8CB189A8279DC72, NULL);
		// StopListeningToNetworking();
		NetworkStatus_StopListeningToNetworking_m232D1A06AAD39F10CDD2F7B1EF1023D5CF902FAB(__this, NULL);
		// _networking = null;
		__this->____networking_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_7), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::OnPeerAdded(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_OnPeerAdded_mFD4FD1EF70ECBD1DFC7FB6B5DDCC6CFAC213D33A (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05F87961343CBCD85A385B0D187C11C3F788AC9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Added: " + args.Peer.ToString(PeerIdLimit));
		RuntimeObject* L_0;
		L_0 = PeerAddedArgs_get_Peer_mF04D06FAC3F681FA7E4EEA53D4727E1D4A20ACAC_inline((&___args0), NULL);
		int32_t L_1 = __this->___PeerIdLimit_6;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Niantic.ARDK.Networking.IPeer::ToString(System.Int32) */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_0, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF05F87961343CBCD85A385B0D187C11C3F788AC9, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::OnPeerRemoved(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_OnPeerRemoved_m8EC1E7BE4654C88680B83164B18DB7F22C849411 (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42F938A342C43051B45F7F9A926D0873F955F57B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Removed: " + args.Peer.ToString(PeerIdLimit));
		RuntimeObject* L_0;
		L_0 = PeerRemovedArgs_get_Peer_mCC879C96B5FE8067214B3CBCA0271F75B2C9F5C1_inline((&___args0), NULL);
		int32_t L_1 = __this->___PeerIdLimit_6;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Niantic.ARDK.Networking.IPeer::ToString(System.Int32) */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_0, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral42F938A342C43051B45F7F9A926D0873F955F57B, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::OnConnectionDidFailWithError(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_OnConnectionDidFailWithError_m8FEDC44584B76B67AA4D32DA948E10D3D16EB0E5 (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC58CC3CEADC0A38646D98DA34EF503D5F8CEC135);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// var errorCode = args.ErrorCode;
		uint32_t L_0;
		L_0 = ConnectionFailedArgs_get_ErrorCode_m4D026D356ACA27B5048F3416EBBF5C7B12A791DC_inline((&___args0), NULL);
		V_0 = L_0;
		// if (_lastNetworkError == errorCode)
		uint32_t L_1 = __this->____lastNetworkError_8;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// var msg = "Connection Failed: " + errorCode;
		String_t* L_3;
		L_3 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC58CC3CEADC0A38646D98DA34EF503D5F8CEC135, L_3, NULL);
		V_1 = L_4;
		// UpdateIndicator(NetworkState.FailedToConnect, msg);
		String_t* L_5 = V_1;
		NetworkStatus_UpdateIndicator_mC9E3379AC77E1009EEDF945E3F63104E2A5BF2CE(__this, 4, L_5, NULL);
		// Debug.Log(msg);
		String_t* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// _lastNetworkError = errorCode;
		uint32_t L_7 = V_0;
		__this->____lastNetworkError_8 = L_7;
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::UpdateIndicator(Niantic.ARDKExamples.Helpers.NetworkStatus/NetworkState,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus_UpdateIndicator_mC9E3379AC77E1009EEDF945E3F63104E2A5BF2CE (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, int32_t ___state0, String_t* ___text1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m62EE67CA1745DC33D0939B76CF2304292B652F15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9F695DD3B5A3450B2723A76ED53EEF1629BA22F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_1 = NULL;
	{
		// if (ConnectedIndicator != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___ConnectedIndicator_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// ConnectedIndicator.color = _indicatorColors[state];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___ConnectedIndicator_4;
		Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F* L_3 = __this->____indicatorColors_9;
		int32_t L_4 = ___state0;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Dictionary_2_get_Item_m62EE67CA1745DC33D0939B76CF2304292B652F15(L_3, L_4, Dictionary_2_get_Item_m62EE67CA1745DC33D0939B76CF2304292B652F15_RuntimeMethod_var);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_5);
	}

IL_0025:
	{
		// if (ConnectedIndicatorText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___ConnectedIndicatorText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// ConnectedIndicatorText.text = string.IsNullOrEmpty(text) ? _indicatorMessages[state] : text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___ConnectedIndicatorText_5;
		String_t* L_9 = ___text1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		G_B4_0 = L_8;
		if (L_10)
		{
			G_B5_0 = L_8;
			goto IL_0044;
		}
	}
	{
		String_t* L_11 = ___text1;
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		goto IL_0050;
	}

IL_0044:
	{
		Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* L_12 = __this->____indicatorMessages_10;
		int32_t L_13 = ___state0;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = Dictionary_2_get_Item_m9F695DD3B5A3450B2723A76ED53EEF1629BA22F0(L_12, L_13, Dictionary_2_get_Item_m9F695DD3B5A3450B2723A76ED53EEF1629BA22F0_RuntimeMethod_var);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
	}

IL_0050:
	{
		NullCheck(G_B6_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B6_1, G_B6_0);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.NetworkStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatus__ctor_mF55A69A26AF80444F923184D8C1E4ADCAA238EAE (NetworkStatus_tCD3E70AAC81520EC1894E188BFA9C12576DFAEB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m68CA8D52E972D997ABCD914E662D209CF3D6390D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m819A801B91A148F614C77F3E4F581D866B200638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03F01AA52D4B8DEE6D370163031323DF4A194C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B5CC13BBBDA566285009E3062D47DCA2DFCA8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4537C2C2CF0C54002B323BCE920F8D6E2CB11DB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C2A173B480860EA830DDB08F3A05EEA242F94D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC39C1E6267CAC2CBEB6698B83C43EF17E1A4ABE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int PeerIdLimit = 6;
		__this->___PeerIdLimit_6 = 6;
		// private Dictionary<NetworkState, Color> _indicatorColors =
		//   new Dictionary<NetworkState, Color>()
		//   {
		//     { NetworkState.Uninitialized, Color.white },
		//     { NetworkState.Initialized, Color.yellow },
		//     { NetworkState.ConnectedAsHost, Color.magenta },
		//     { NetworkState.ConnectedAsPeer, Color.blue },
		//     { NetworkState.FailedToConnect, Color.red },
		//   };
		Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F* L_0 = (Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F*)il2cpp_codegen_object_new(Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m68CA8D52E972D997ABCD914E662D209CF3D6390D(L_0, Dictionary_2__ctor_m68CA8D52E972D997ABCD914E662D209CF3D6390D_RuntimeMethod_var);
		Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F* L_1 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0(L_1, 0, L_2, Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0_RuntimeMethod_var);
		Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F* L_3 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_3);
		Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0(L_3, 1, L_4, Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0_RuntimeMethod_var);
		Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F* L_5 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		NullCheck(L_5);
		Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0(L_5, 2, L_6, Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0_RuntimeMethod_var);
		Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F* L_7 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		NullCheck(L_7);
		Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0(L_7, 3, L_8, Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0_RuntimeMethod_var);
		Dictionary_2_t34D9607B964AF24F52B5ADA5DD792C041D90440F* L_9 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_9);
		Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0(L_9, 4, L_10, Dictionary_2_Add_mC2A7B7C3B58D49FBB800A00C7D136CF5063410A0_RuntimeMethod_var);
		__this->____indicatorColors_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____indicatorColors_9), (void*)L_9);
		// private Dictionary<NetworkState, string> _indicatorMessages =
		//   new Dictionary<NetworkState, string>()
		//   {
		//     { NetworkState.Uninitialized, "Not Initialized" },
		//     { NetworkState.Initialized, "Not Connected" },
		//     { NetworkState.ConnectedAsHost, "Connected as Host" },
		//     { NetworkState.ConnectedAsPeer, "Connected as Peer" },
		//     { NetworkState.FailedToConnect, "Failed to Connect" },
		//   };
		Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* L_11 = (Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2*)il2cpp_codegen_object_new(Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Dictionary_2__ctor_m819A801B91A148F614C77F3E4F581D866B200638(L_11, Dictionary_2__ctor_m819A801B91A148F614C77F3E4F581D866B200638_RuntimeMethod_var);
		Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* L_12 = L_11;
		NullCheck(L_12);
		Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899(L_12, 0, _stringLiteral4537C2C2CF0C54002B323BCE920F8D6E2CB11DB1, Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899_RuntimeMethod_var);
		Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* L_13 = L_12;
		NullCheck(L_13);
		Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899(L_13, 1, _stringLiteralC39C1E6267CAC2CBEB6698B83C43EF17E1A4ABE1, Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899_RuntimeMethod_var);
		Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899(L_14, 2, _stringLiteral4C2A173B480860EA830DDB08F3A05EEA242F94D8, Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899_RuntimeMethod_var);
		Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* L_15 = L_14;
		NullCheck(L_15);
		Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899(L_15, 3, _stringLiteral03F01AA52D4B8DEE6D370163031323DF4A194C9C, Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899_RuntimeMethod_var);
		Dictionary_2_t0522677063AA4D3E4037BE475D506288939659F2* L_16 = L_15;
		NullCheck(L_16);
		Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899(L_16, 4, _stringLiteral1B5CC13BBBDA566285009E3062D47DCA2DFCA8C9, Dictionary_2_Add_m48277585FB2DA76601BBF62F3F08A459FF61A899_RuntimeMethod_var);
		__this->____indicatorMessages_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____indicatorMessages_10), (void*)L_16);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::TogglePoseBroadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerPoseVisualizer_TogglePoseBroadcast_m723EE74FBF34EBFB7EFF51B83CA7BDB6FE16F47A (PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral669F530C1559EDA978405057AF4C99A595A0CFF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral755AB96ECEBB113EA7AD9864F4466BB0358F3634);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_arNetworking == null)
		RuntimeObject* L_0 = __this->____arNetworking_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _isPoseBroadcastingEnabled = !_isPoseBroadcastingEnabled;
		bool L_1 = __this->____isPoseBroadcastingEnabled_7;
		__this->____isPoseBroadcastingEnabled_7 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// if (_isPoseBroadcastingEnabled)
		bool L_2 = __this->____isPoseBroadcastingEnabled_7;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// _arNetworking.EnablePoseBroadcasting();
		RuntimeObject* L_3 = __this->____arNetworking_6;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::EnablePoseBroadcasting() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_3);
		// _togglePoseText.text = "Disable Pose Broadcasting";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____togglePoseText_5;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral669F530C1559EDA978405057AF4C99A595A0CFF5);
		return;
	}

IL_003c:
	{
		// _arNetworking.DisablePoseBroadcasting();
		RuntimeObject* L_5 = __this->____arNetworking_6;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::DisablePoseBroadcasting() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_5);
		// _togglePoseText.text = "Enable Pose Broadcasting";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->____togglePoseText_5;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral755AB96ECEBB113EA7AD9864F4466BB0358F3634);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::SetPoseLatency(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerPoseVisualizer_SetPoseLatency_mB8494C0B78952571AB986D7D19D509456357CF19 (PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C* __this, String_t* ___latencyStr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1719D5928B4681DE0C9BB2119416E64A3A02E9C3);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// if (_arNetworking == null)
		RuntimeObject* L_0 = __this->____arNetworking_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (long.TryParse(latencyStr, out latency))
		String_t* L_1 = ___latencyStr0;
		bool L_2;
		L_2 = Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2(L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// _arNetworking.SetTargetPoseLatency(latency);
		RuntimeObject* L_3 = __this->____arNetworking_6;
		int64_t L_4 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker1< int64_t >::Invoke(7 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::SetTargetPoseLatency(System.Int64) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_3, L_4);
		// Debug.Log("Set target pose latency to " + latency);
		String_t* L_5;
		L_5 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1719D5928B4681DE0C9BB2119416E64A3A02E9C3, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerPoseVisualizer_Awake_m6708E6EF1EFA26268E8ABD4B9C90705224417E69 (PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerPoseVisualizer_OnAnyInitialized_m5B35B1E4A94E0D329C190538E7DB152EC78248DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARNetworkingFactory.ARNetworkingInitialized += OnAnyInitialized;
		ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* L_0 = (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82*)il2cpp_codegen_object_new(ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_mCDF11A2B25962AC5C0AF90655A8656E0F1B866C9(L_0, __this, (intptr_t)((void*)PeerPoseVisualizer_OnAnyInitialized_m5B35B1E4A94E0D329C190538E7DB152EC78248DE_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		ARNetworkingFactory_add_ARNetworkingInitialized_mE5A4F323DAA5E9D2954D5C204357310F7F91BC53(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerPoseVisualizer_OnDestroy_m2A34F7EF83A3C485F6364D98844CCDF8EA188E57 (PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerPoseVisualizer_OnAnyInitialized_m5B35B1E4A94E0D329C190538E7DB152EC78248DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARNetworkingFactory.ARNetworkingInitialized -= OnAnyInitialized;
		ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* L_0 = (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82*)il2cpp_codegen_object_new(ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_mCDF11A2B25962AC5C0AF90655A8656E0F1B866C9(L_0, __this, (intptr_t)((void*)PeerPoseVisualizer_OnAnyInitialized_m5B35B1E4A94E0D329C190538E7DB152EC78248DE_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		ARNetworkingFactory_remove_ARNetworkingInitialized_m7C049CAA572A9A75E6C9E9E28E42B54730B2D6AF(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::OnAnyInitialized(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerPoseVisualizer_OnAnyInitialized_m5B35B1E4A94E0D329C190538E7DB152EC78248DE (PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C* __this, AnyARNetworkingInitializedArgs_tE7DFF4BAAA921B3B4CB96D9996A255A660491BC5 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerPoseVisualizer_OnDeinitialized_m5299F63E0A0D6852119DA99089299E602359B868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerPoseVisualizer_OnDidAddPeer_m70CE8CE575E5C7AA7B260EAD0A6E06896406FB39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerPoseVisualizer_OnDidRemovePeer_mAFF888981F39E38AC9822C90FC6802CA3EFEA924_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerPoseVisualizer_OnPeerPoseReceived_m5F27735A506CAC94875FF5F62CD5A78A217DEEF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_arNetworking != null)
		RuntimeObject* L_0 = __this->____arNetworking_6;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _arNetworking = args.ARNetworking;
		RuntimeObject* L_1;
		L_1 = AnyARNetworkingInitializedArgs_get_ARNetworking_mA3D197FB19EA656CD4D79A0E9AAFB299FDFFC135_inline((&___args0), NULL);
		__this->____arNetworking_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arNetworking_6), (void*)L_1);
		// _arNetworking.Deinitialized += OnDeinitialized;
		RuntimeObject* L_2 = __this->____arNetworking_6;
		ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* L_3 = (ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F*)il2cpp_codegen_object_new(ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m001EE51831C81CE4C6BACD6668380FA4BEB6572A(L_3, __this, (intptr_t)((void*)PeerPoseVisualizer_OnDeinitialized_m5299F63E0A0D6852119DA99089299E602359B868_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* >::Invoke(14 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::add_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_2, L_3);
		// _arNetworking.PeerPoseReceived += OnPeerPoseReceived;
		RuntimeObject* L_4 = __this->____arNetworking_6;
		ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927* L_5 = (ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927*)il2cpp_codegen_object_new(ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArdkEventHandler_1__ctor_m617E4CAEC2E02F493168C36E8386888F234D52E6(L_5, __this, (intptr_t)((void*)PeerPoseVisualizer_OnPeerPoseReceived_m5F27735A506CAC94875FF5F62CD5A78A217DEEF7_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927* >::Invoke(12 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::add_PeerPoseReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_4, L_5);
		// _arNetworking.Networking.PeerAdded += OnDidAddPeer;
		RuntimeObject* L_6 = __this->____arNetworking_6;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_6);
		ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* L_8 = (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0*)il2cpp_codegen_object_new(ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64(L_8, __this, (intptr_t)((void*)PeerPoseVisualizer_OnDidAddPeer_m70CE8CE575E5C7AA7B260EAD0A6E06896406FB39_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* >::Invoke(24 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PeerAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_7, L_8);
		// _arNetworking.Networking.PeerRemoved += OnDidRemovePeer;
		RuntimeObject* L_9 = __this->____arNetworking_6;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_9);
		ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* L_11 = (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1(L_11, __this, (intptr_t)((void*)PeerPoseVisualizer_OnDidRemovePeer_mAFF888981F39E38AC9822C90FC6802CA3EFEA924_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* >::Invoke(26 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PeerRemoved(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_10, L_11);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::OnDeinitialized(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerPoseVisualizer_OnDeinitialized_m5299F63E0A0D6852119DA99089299E602359B868 (PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C* __this, ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerPoseVisualizer_OnDeinitialized_m5299F63E0A0D6852119DA99089299E602359B868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerPoseVisualizer_OnDidAddPeer_m70CE8CE575E5C7AA7B260EAD0A6E06896406FB39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerPoseVisualizer_OnDidRemovePeer_mAFF888981F39E38AC9822C90FC6802CA3EFEA924_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerPoseVisualizer_OnPeerPoseReceived_m5F27735A506CAC94875FF5F62CD5A78A217DEEF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_arNetworking == null)
		RuntimeObject* L_0 = __this->____arNetworking_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _arNetworking.Deinitialized -= OnDeinitialized;
		RuntimeObject* L_1 = __this->____arNetworking_6;
		ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* L_2 = (ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F*)il2cpp_codegen_object_new(ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArdkEventHandler_1__ctor_m001EE51831C81CE4C6BACD6668380FA4BEB6572A(L_2, __this, (intptr_t)((void*)PeerPoseVisualizer_OnDeinitialized_m5299F63E0A0D6852119DA99089299E602359B868_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* >::Invoke(15 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::remove_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_1, L_2);
		// _arNetworking.PeerPoseReceived -= OnPeerPoseReceived;
		RuntimeObject* L_3 = __this->____arNetworking_6;
		ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927* L_4 = (ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927*)il2cpp_codegen_object_new(ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m617E4CAEC2E02F493168C36E8386888F234D52E6(L_4, __this, (intptr_t)((void*)PeerPoseVisualizer_OnPeerPoseReceived_m5F27735A506CAC94875FF5F62CD5A78A217DEEF7_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< ArdkEventHandler_1_tA7FCD1F57278261E95848EA2454F2528A0253927* >::Invoke(13 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::remove_PeerPoseReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_3, L_4);
		// _arNetworking.Networking.PeerAdded -= OnDidAddPeer;
		RuntimeObject* L_5 = __this->____arNetworking_6;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_5);
		ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* L_7 = (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0*)il2cpp_codegen_object_new(ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64(L_7, __this, (intptr_t)((void*)PeerPoseVisualizer_OnDidAddPeer_m70CE8CE575E5C7AA7B260EAD0A6E06896406FB39_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* >::Invoke(25 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_PeerAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_6, L_7);
		// _arNetworking.Networking.PeerRemoved -= OnDidRemovePeer;
		RuntimeObject* L_8 = __this->____arNetworking_6;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_8);
		ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* L_10 = (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1(L_10, __this, (intptr_t)((void*)PeerPoseVisualizer_OnDidRemovePeer_mAFF888981F39E38AC9822C90FC6802CA3EFEA924_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* >::Invoke(27 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_PeerRemoved(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_9, L_10);
		// _arNetworking = null;
		__this->____arNetworking_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arNetworking_6), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::OnDidAddPeer(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerPoseVisualizer_OnDidAddPeer_m70CE8CE575E5C7AA7B260EAD0A6E06896406FB39 (PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C* __this, PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC78D2074E48557A5D3BA1996F5F8DF98A80B6BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _peerGameObjects[args.Peer] =
		//   Instantiate
		//   (
		//     _peerIndicatorPrefab,
		//     new Vector3(99999, 99999, 99999),
		//     Quaternion.identity
		//   );
		Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* L_0 = __this->____peerGameObjects_8;
		RuntimeObject* L_1;
		L_1 = PeerAddedArgs_get_Peer_mF04D06FAC3F681FA7E4EEA53D4727E1D4A20ACAC_inline((&___args0), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____peerIndicatorPrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (99999.0f), (99999.0f), (99999.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_0);
		Dictionary_2_set_Item_mC78D2074E48557A5D3BA1996F5F8DF98A80B6BC4(L_0, L_1, L_5, Dictionary_2_set_Item_mC78D2074E48557A5D3BA1996F5F8DF98A80B6BC4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::OnDidRemovePeer(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerPoseVisualizer_OnDidRemovePeer_mAFF888981F39E38AC9822C90FC6802CA3EFEA924 (PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C* __this, PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mBFE0C6B47348CBD2372EF814713F289CA527B4E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mABF93ED22D782CC4C6FD2CF852CA2885E1A1C110_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var peer = args.Peer;
		RuntimeObject* L_0;
		L_0 = PeerRemovedArgs_get_Peer_mCC879C96B5FE8067214B3CBCA0271F75B2C9F5C1_inline((&___args0), NULL);
		V_0 = L_0;
		// Destroy(_peerGameObjects[peer]);
		Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* L_1 = __this->____peerGameObjects_8;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Dictionary_2_get_Item_mABF93ED22D782CC4C6FD2CF852CA2885E1A1C110(L_1, L_2, Dictionary_2_get_Item_mABF93ED22D782CC4C6FD2CF852CA2885E1A1C110_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// _peerGameObjects.Remove(peer);
		Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* L_4 = __this->____peerGameObjects_8;
		RuntimeObject* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_mBFE0C6B47348CBD2372EF814713F289CA527B4E4(L_4, L_5, Dictionary_2_Remove_mBFE0C6B47348CBD2372EF814713F289CA527B4E4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::OnPeerPoseReceived(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerPoseReceivedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerPoseVisualizer_OnPeerPoseReceived_m5F27735A506CAC94875FF5F62CD5A78A217DEEF7 (PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C* __this, PeerPoseReceivedArgs_t3EFA40B68DEFDEABBD5132C9AC75A98E0B6AC083 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mABF93ED22D782CC4C6FD2CF852CA2885E1A1C110_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var peerGameObject = _peerGameObjects[args.Peer];
		Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* L_0 = __this->____peerGameObjects_8;
		RuntimeObject* L_1;
		L_1 = PeerPoseReceivedArgs_get_Peer_m60556CB1C66274B6DDD1695158D1BC4FF6B3A38B_inline((&___args0), NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Dictionary_2_get_Item_mABF93ED22D782CC4C6FD2CF852CA2885E1A1C110(L_0, L_1, Dictionary_2_get_Item_mABF93ED22D782CC4C6FD2CF852CA2885E1A1C110_RuntimeMethod_var);
		// var pose = args.Pose;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = PeerPoseReceivedArgs_get_Pose_mC23DE4C703C3971420E753D9CBCD62E9AE9DA355_inline((&___args0), NULL);
		V_0 = L_3;
		// peerGameObject.transform.position = pose.ToPosition();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_2;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = MatrixUtils_ToPosition_mD2843F95E2F6F40B53CED436EE9C3517F6D910E5(L_6, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_7, NULL);
		// peerGameObject.transform.rotation = pose.ToRotation();
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = MatrixUtils_ToRotation_m5FBB81927C6D824ADCE1F44E5C26A058B00FBAE6(L_9, NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PeerPoseVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerPoseVisualizer__ctor_mC59A225E5C1463962CFC838C5D2B34E855C62D03 (PeerPoseVisualizer_tF3281FF99FDEA8E080DE06F1FD5C481C118C5A9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m00580A36D2665566EE3BCAE4B5A2C45B44A4C0D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _isPoseBroadcastingEnabled = true;
		__this->____isPoseBroadcastingEnabled_7 = (bool)1;
		// private Dictionary<IPeer, GameObject> _peerGameObjects =
		//   new Dictionary<IPeer, GameObject>();
		Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* L_0 = (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624*)il2cpp_codegen_object_new(Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m00580A36D2665566EE3BCAE4B5A2C45B44A4C0D5(L_0, Dictionary_2__ctor_m00580A36D2665566EE3BCAE4B5A2C45B44A4C0D5_RuntimeMethod_var);
		__this->____peerGameObjects_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____peerGameObjects_8), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Color Niantic.ARDKExamples.Helpers.PlayerColor::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PlayerColor_get_Color_m27C52491515013C418639F4BD2837074A8D657AC (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, const RuntimeMethod* method) 
{
	{
		// return _color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____color_6;
		return L_0;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_set_Color_m3FA93459EF85B83C0DF6316A1321C2B4F6CAA2BC (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _color = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->____color_6 = L_0;
		// if (ColorIndicator)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___ColorIndicator_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// ColorIndicator.color = value;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___ColorIndicator_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
	}

IL_0020:
	{
		// }
		return;
	}
}
// UnityEngine.Color Niantic.ARDKExamples.Helpers.PlayerColor::ColorFromGuid(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PlayerColor_ColorFromGuid_m6A196FE083FD81090AFDC74963F6284C06E28A4C (Guid_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	{
		// var colorGen = new Random(id.GetHashCode());
		int32_t L_0;
		L_0 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___id0), NULL);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E(L_1, L_0, NULL);
		V_0 = L_1;
		// return new Color
		// (
		//   (float)colorGen.NextDouble(),
		//   (float)colorGen.NextDouble(),
		//   (float)colorGen.NextDouble()
		// );
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = V_0;
		NullCheck(L_2);
		double L_3;
		L_3 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_2);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = V_0;
		NullCheck(L_4);
		double L_5;
		L_5 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_4);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_6 = V_0;
		NullCheck(L_6);
		double L_7;
		L_7 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_8), ((float)L_3), ((float)L_5), ((float)L_7), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_Awake_m003F49F393A71E4B831E0C4F35C84B96F5D0D69D (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Color = ColorDefault;
		il2cpp_codegen_runtime_class_init_inline(PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var))->___ColorDefault_5;
		PlayerColor_set_Color_m3FA93459EF85B83C0DF6316A1321C2B4F6CAA2BC(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_Start_m4BEE7B5A6AEF689C69E045BD2468A461A9F69BF6 (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_OnNetworkInitialized_m9299C67222B2535E71F98B559667540340E163C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_networking == null)
		RuntimeObject* L_0 = __this->____networking_7;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// MultipeerNetworkingFactory.NetworkingInitialized += OnNetworkInitialized;
		ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* L_1 = (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*)il2cpp_codegen_object_new(ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0(L_1, __this, (intptr_t)((void*)PlayerColor_OnNetworkInitialized_m9299C67222B2535E71F98B559667540340E163C9_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		MultipeerNetworkingFactory_add_NetworkingInitialized_mFBF83360EBD8C80EFF3451CF0F6509E311F88712(L_1, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_OnDestroy_m34A583CC4B2425A44CBB5E19376EA53BAB58F81D (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_OnNetworkInitialized_m9299C67222B2535E71F98B559667540340E163C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MultipeerNetworkingFactory.NetworkingInitialized -= OnNetworkInitialized;
		ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* L_0 = (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*)il2cpp_codegen_object_new(ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0(L_0, __this, (intptr_t)((void*)PlayerColor_OnNetworkInitialized_m9299C67222B2535E71F98B559667540340E163C9_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		MultipeerNetworkingFactory_remove_NetworkingInitialized_m24FCD65FCD7A20E4CF71CBA6292917ACEBE73F06(L_0, NULL);
		// StopListeningToNetworking();
		PlayerColor_StopListeningToNetworking_mAF72980D21CA5E8161AA8EF679A05B3B27343EA5(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::OnNetworkInitialized(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_OnNetworkInitialized_m9299C67222B2535E71F98B559667540340E163C9 (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 ___args0, const RuntimeMethod* method) 
{
	{
		// if (_networking != null)
		RuntimeObject* L_0 = __this->____networking_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// ListenToNetworking(args.Networking);
		AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 L_1 = ___args0;
		RuntimeObject* L_2 = L_1.___Networking_0;
		PlayerColor_ListenToNetworking_mCF8DCDC080C1C0A421183718E11837447AA3EE31(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::OnConnected(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_OnConnected_mF7F06E2CCC88FAEF3B6EEF7BECA3DC53299A2081 (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Color = ColorFromGuid(args.Self.Identifier);
		RuntimeObject* L_0;
		L_0 = ConnectedArgs_get_Self_m19392C6C88B37599DB1F5C621DFC859FADB5E413_inline((&___args0), NULL);
		NullCheck(L_0);
		Guid_t L_1;
		L_1 = InterfaceFuncInvoker0< Guid_t >::Invoke(0 /* System.Guid Niantic.ARDK.Networking.IPeer::get_Identifier() */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_0);
		il2cpp_codegen_runtime_class_init_inline(PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = PlayerColor_ColorFromGuid_m6A196FE083FD81090AFDC74963F6284C06E28A4C(L_1, NULL);
		PlayerColor_set_Color_m3FA93459EF85B83C0DF6316A1321C2B4F6CAA2BC(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::OnDisconnected(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_OnDisconnected_mBF07478A671BB0B264FD12A8F0CAFB8B7110DFA1 (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Color = ColorDefault;
		il2cpp_codegen_runtime_class_init_inline(PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var))->___ColorDefault_5;
		PlayerColor_set_Color_m3FA93459EF85B83C0DF6316A1321C2B4F6CAA2BC(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::OnDeinitialized(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_OnDeinitialized_mFDC613AFC78D64281F582C44D1921E06B4D2EF2B (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, DeinitializedArgs_t9E20E228D8359F47DB613E62FF5ED0BC3548A24F ___args0, const RuntimeMethod* method) 
{
	{
		// StopListeningToNetworking();
		PlayerColor_StopListeningToNetworking_mAF72980D21CA5E8161AA8EF679A05B3B27343EA5(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::ListenToNetworking(Niantic.ARDK.Networking.IMultipeerNetworking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_ListenToNetworking_mCF8DCDC080C1C0A421183718E11837447AA3EE31 (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, RuntimeObject* ___networking0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_OnConnected_mF7F06E2CCC88FAEF3B6EEF7BECA3DC53299A2081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_OnDeinitialized_mFDC613AFC78D64281F582C44D1921E06B4D2EF2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_OnDisconnected_mBF07478A671BB0B264FD12A8F0CAFB8B7110DFA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopListeningToNetworking();
		PlayerColor_StopListeningToNetworking_mAF72980D21CA5E8161AA8EF679A05B3B27343EA5(__this, NULL);
		// _networking = networking;
		RuntimeObject* L_0 = ___networking0;
		__this->____networking_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_7), (void*)L_0);
		// _networking.Connected += OnConnected;
		RuntimeObject* L_1 = __this->____networking_7;
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_2 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_2, __this, (intptr_t)((void*)PlayerColor_OnConnected_mF7F06E2CCC88FAEF3B6EEF7BECA3DC53299A2081_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(16 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1, L_2);
		// _networking.Disconnected += OnDisconnected;
		RuntimeObject* L_3 = __this->____networking_7;
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_4 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_4, __this, (intptr_t)((void*)PlayerColor_OnDisconnected_mBF07478A671BB0B264FD12A8F0CAFB8B7110DFA1_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(20 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_3, L_4);
		// _networking.Deinitialized += OnDeinitialized;
		RuntimeObject* L_5 = __this->____networking_7;
		ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* L_6 = (ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF*)il2cpp_codegen_object_new(ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ArdkEventHandler_1__ctor_mDE16F0ADC31F58EA85D854D2E7333491E8BF5C55(L_6, __this, (intptr_t)((void*)PlayerColor_OnDeinitialized_mFDC613AFC78D64281F582C44D1921E06B4D2EF2B_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* >::Invoke(30 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_5, L_6);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::StopListeningToNetworking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor_StopListeningToNetworking_mAF72980D21CA5E8161AA8EF679A05B3B27343EA5 (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_OnConnected_mF7F06E2CCC88FAEF3B6EEF7BECA3DC53299A2081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_OnDeinitialized_mFDC613AFC78D64281F582C44D1921E06B4D2EF2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_OnDisconnected_mBF07478A671BB0B264FD12A8F0CAFB8B7110DFA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Color = ColorDefault;
		il2cpp_codegen_runtime_class_init_inline(PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var))->___ColorDefault_5;
		PlayerColor_set_Color_m3FA93459EF85B83C0DF6316A1321C2B4F6CAA2BC(__this, L_0, NULL);
		// if (_networking == null)
		RuntimeObject* L_1 = __this->____networking_7;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// _networking.Connected -= OnConnected;
		RuntimeObject* L_2 = __this->____networking_7;
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_3 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_3, __this, (intptr_t)((void*)PlayerColor_OnConnected_mF7F06E2CCC88FAEF3B6EEF7BECA3DC53299A2081_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(17 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_2, L_3);
		// _networking.Disconnected -= OnDisconnected;
		RuntimeObject* L_4 = __this->____networking_7;
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_5 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_5, __this, (intptr_t)((void*)PlayerColor_OnDisconnected_mBF07478A671BB0B264FD12A8F0CAFB8B7110DFA1_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(21 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_4, L_5);
		// _networking.Deinitialized -= OnDeinitialized;
		RuntimeObject* L_6 = __this->____networking_7;
		ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* L_7 = (ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF*)il2cpp_codegen_object_new(ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArdkEventHandler_1__ctor_mDE16F0ADC31F58EA85D854D2E7333491E8BF5C55(L_7, __this, (intptr_t)((void*)PlayerColor_OnDeinitialized_mFDC613AFC78D64281F582C44D1921E06B4D2EF2B_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* >::Invoke(31 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_6, L_7);
		// _networking = null;
		__this->____networking_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_7), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor__ctor_mF3E9C9DF58717818D8F4CC610344757CCC911CD2 (PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Color _color = ColorDefault;
		il2cpp_codegen_runtime_class_init_inline(PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var))->___ColorDefault_5;
		__this->____color_6 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.PlayerColor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerColor__cctor_m381A36A83288257DA1AEA03A9DDAE4DC1FD49122 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Color ColorDefault = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		((PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerColor_tF4CD91EE5C3B581B9404091F3D85C37F7CA6CADA_il2cpp_TypeInfo_var))->___ColorDefault_5 = L_0;
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
// System.Void Niantic.ARDKExamples.Helpers.SendDebugMessageHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendDebugMessageHelper_Awake_mA532420008303570FE8FA77DB0F3D3B1015408EF (SendDebugMessageHelper_tCC3AA20A92A6014A41FF87A06ECAED10462C3196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendDebugMessageHelper__NetworkingInitialized_mC1AD8B7D6D12004E93446541361B6711AED9B529_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MultipeerNetworkingFactory.NetworkingInitialized += _NetworkingInitialized;
		ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* L_0 = (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*)il2cpp_codegen_object_new(ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0(L_0, __this, (intptr_t)((void*)SendDebugMessageHelper__NetworkingInitialized_mC1AD8B7D6D12004E93446541361B6711AED9B529_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		MultipeerNetworkingFactory_add_NetworkingInitialized_mFBF83360EBD8C80EFF3451CF0F6509E311F88712(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SendDebugMessageHelper::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendDebugMessageHelper_OnDestroy_mB2EAC1E0A63394C1C8CF8DDD77C9DA53AF26D60C (SendDebugMessageHelper_tCC3AA20A92A6014A41FF87A06ECAED10462C3196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendDebugMessageHelper_OnDeinitialized_m8DC002DED8D800BACABC12B33F71B8156F0CC4E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendDebugMessageHelper_OnPeerDataReceived_mCA2AAEFE92787CADB5412DDD48ED60A05FC7618E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendDebugMessageHelper__NetworkingInitialized_mC1AD8B7D6D12004E93446541361B6711AED9B529_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MultipeerNetworkingFactory.NetworkingInitialized -= _NetworkingInitialized;
		ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* L_0 = (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*)il2cpp_codegen_object_new(ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0(L_0, __this, (intptr_t)((void*)SendDebugMessageHelper__NetworkingInitialized_mC1AD8B7D6D12004E93446541361B6711AED9B529_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		MultipeerNetworkingFactory_remove_NetworkingInitialized_m24FCD65FCD7A20E4CF71CBA6292917ACEBE73F06(L_0, NULL);
		// if (_networking != null)
		RuntimeObject* L_1 = __this->____networking_5;
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// _networking.Deinitialized -= OnDeinitialized;
		RuntimeObject* L_2 = __this->____networking_5;
		ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* L_3 = (ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF*)il2cpp_codegen_object_new(ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_mDE16F0ADC31F58EA85D854D2E7333491E8BF5C55(L_3, __this, (intptr_t)((void*)SendDebugMessageHelper_OnDeinitialized_m8DC002DED8D800BACABC12B33F71B8156F0CC4E9_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* >::Invoke(31 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_2, L_3);
		// _networking.PeerDataReceived -= OnPeerDataReceived;
		RuntimeObject* L_4 = __this->____networking_5;
		ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* L_5 = (ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArdkEventHandler_1__ctor_m3BB4030170487D79DE001F30AC4B138AC3601A47(L_5, __this, (intptr_t)((void*)SendDebugMessageHelper_OnPeerDataReceived_mCA2AAEFE92787CADB5412DDD48ED60A05FC7618E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* >::Invoke(23 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_PeerDataReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_4, L_5);
		// _networking = null;
		__this->____networking_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_5), (void*)(RuntimeObject*)NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SendDebugMessageHelper::_NetworkingInitialized(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendDebugMessageHelper__NetworkingInitialized_mC1AD8B7D6D12004E93446541361B6711AED9B529 (SendDebugMessageHelper_tCC3AA20A92A6014A41FF87A06ECAED10462C3196* __this, AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendDebugMessageHelper_OnDeinitialized_m8DC002DED8D800BACABC12B33F71B8156F0CC4E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendDebugMessageHelper_OnPeerDataReceived_mCA2AAEFE92787CADB5412DDD48ED60A05FC7618E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _networking = args.Networking;
		AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 L_0 = ___args0;
		RuntimeObject* L_1 = L_0.___Networking_0;
		__this->____networking_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_5), (void*)L_1);
		// _networking.Deinitialized += OnDeinitialized;
		RuntimeObject* L_2 = __this->____networking_5;
		ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* L_3 = (ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF*)il2cpp_codegen_object_new(ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_mDE16F0ADC31F58EA85D854D2E7333491E8BF5C55(L_3, __this, (intptr_t)((void*)SendDebugMessageHelper_OnDeinitialized_m8DC002DED8D800BACABC12B33F71B8156F0CC4E9_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* >::Invoke(30 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_2, L_3);
		// _networking.PeerDataReceived += OnPeerDataReceived;
		RuntimeObject* L_4 = __this->____networking_5;
		ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* L_5 = (ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArdkEventHandler_1__ctor_m3BB4030170487D79DE001F30AC4B138AC3601A47(L_5, __this, (intptr_t)((void*)SendDebugMessageHelper_OnPeerDataReceived_mCA2AAEFE92787CADB5412DDD48ED60A05FC7618E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* >::Invoke(22 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PeerDataReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_4, L_5);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SendDebugMessageHelper::OnDeinitialized(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendDebugMessageHelper_OnDeinitialized_m8DC002DED8D800BACABC12B33F71B8156F0CC4E9 (SendDebugMessageHelper_tCC3AA20A92A6014A41FF87A06ECAED10462C3196* __this, DeinitializedArgs_t9E20E228D8359F47DB613E62FF5ED0BC3548A24F ___args0, const RuntimeMethod* method) 
{
	{
		// _networking = null;
		__this->____networking_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_5), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SendDebugMessageHelper::OnPeerDataReceived(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendDebugMessageHelper_OnPeerDataReceived_mCA2AAEFE92787CADB5412DDD48ED60A05FC7618E (SendDebugMessageHelper_tCC3AA20A92A6014A41FF87A06ECAED10462C3196* __this, PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportType_tEC575A6B09F6A3D419478D6C956F5A4BECEBDB07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral261ACDC92E5606E2F08283A3F1C709B2EBB8AC94);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (args.Tag != TRANSPORT_TAG)
		uint32_t L_0;
		L_0 = PeerDataReceivedArgs_get_Tag_m40BCD818739E964C1B6D0BC363D44A77155E9962_inline((&___args0), NULL);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// Debug.LogFormat
		// (
		//   "Got debug data {0} (length: {1}, sender: {2}, type: {3})",
		//   Encoding.UTF8.GetString(args.CopyData()),
		//   args.DataLength,
		//   args.Peer.ToString(6),
		//   args.TransportType
		// );
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = PeerDataReceivedArgs_CopyData_mD5E32ECFC23052C9667E55A0EBB17FC4F1951A5B((&___args0), NULL);
		NullCheck(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_3, L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		int32_t L_7;
		L_7 = PeerDataReceivedArgs_get_DataLength_mF50EAEEC2C803ACE89FEA4E88EE0F71FD0D47317((&___args0), NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		RuntimeObject* L_11;
		L_11 = PeerDataReceivedArgs_get_Peer_m21DB039DBB081D1E4C57ED6AFC8186B425DE8695_inline((&___args0), NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Niantic.ARDK.Networking.IPeer::ToString(System.Int32) */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_11, 6);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_10;
		uint8_t L_14;
		L_14 = PeerDataReceivedArgs_get_TransportType_mE0AA4B1250C7F03911FE172AA85F0AAA88E8BC54_inline((&___args0), NULL);
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(TransportType_tEC575A6B09F6A3D419478D6C956F5A4BECEBDB07_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral261ACDC92E5606E2F08283A3F1C709B2EBB8AC94, L_13, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SendDebugMessageHelper::Send()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendDebugMessageHelper_Send_mD864AF02219DD1F07135451662B11D13DF415C03 (SendDebugMessageHelper_tCC3AA20A92A6014A41FF87A06ECAED10462C3196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportType_tEC575A6B09F6A3D419478D6C956F5A4BECEBDB07_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportType_tEC575A6B09F6A3D419478D6C956F5A4BECEBDB07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// if (!_networking.IsConnected)
		RuntimeObject* L_0 = __this->____networking_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var data = new byte[8];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_2;
		// Buffer.BlockCopy(Encoding.UTF8.GetBytes(Guid.NewGuid().ToString()), 0, data, 0, 8);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		Guid_t L_4;
		L_4 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, 8, NULL);
		// foreach (var transportType in Enum.GetValues(typeof(TransportType)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (TransportType_tEC575A6B09F6A3D419478D6C956F5A4BECEBDB07_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_10;
		L_10 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_9, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_10, NULL);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_12 = V_2;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_008a;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_008a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006d_1;
			}

IL_0052_1:
			{
				// foreach (var transportType in Enum.GetValues(typeof(TransportType)))
				RuntimeObject* L_15 = V_2;
				NullCheck(L_15);
				RuntimeObject* L_16;
				L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				V_3 = L_16;
				// _networking.BroadcastData(TRANSPORT_TAG, data, (TransportType)transportType);
				RuntimeObject* L_17 = __this->____networking_5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
				RuntimeObject* L_19 = V_3;
				NullCheck(L_17);
				InterfaceActionInvoker4< uint32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uint8_t, bool >::Invoke(9 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::BroadcastData(System.UInt32,System.Byte[],Niantic.ARDK.Networking.TransportType,System.Boolean) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_17, 4, L_18, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_19, TransportType_tEC575A6B09F6A3D419478D6C956F5A4BECEBDB07_il2cpp_TypeInfo_var)))), (bool)0);
			}

IL_006d_1:
			{
				// foreach (var transportType in Enum.GetValues(typeof(TransportType)))
				RuntimeObject* L_20 = V_2;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0052_1;
				}
			}
			{
				goto IL_008b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SendDebugMessageHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendDebugMessageHelper__ctor_m9F147D4B4C3A45EA52F9E8B24D6977191428D46C (SendDebugMessageHelper_tCC3AA20A92A6014A41FF87A06ECAED10462C3196* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String Niantic.ARDKExamples.Helpers.SessionIDField::GetSessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionIDField_GetSessionID_m03098826CE74EAE7B3B22D986210B02250F8DBC5 (SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* __this, const RuntimeMethod* method) 
{
	{
		// return text;
		String_t* L_0;
		L_0 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SessionIDField::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionIDField_Start_m5832BE7982867B677305A64341F77D9BE39F8348 (SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionIDField__NetworkingInitialized_m8B670C968500E273A59D143FC867F751AE8A51AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45(__this, NULL);
		// MultipeerNetworkingFactory.NetworkingInitialized += _NetworkingInitialized;
		ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* L_0 = (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*)il2cpp_codegen_object_new(ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0(L_0, __this, (intptr_t)((void*)SessionIDField__NetworkingInitialized_m8B670C968500E273A59D143FC867F751AE8A51AC_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		MultipeerNetworkingFactory_add_NetworkingInitialized_mFBF83360EBD8C80EFF3451CF0F6509E311F88712(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SessionIDField::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionIDField_OnDestroy_m3627DA8978D1C201A35F246AD5BA8AC407B56309 (SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* __this, const RuntimeMethod* method) 
{
	DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var args = new DisconnectedArgs();
		il2cpp_codegen_initobj((&V_0), sizeof(DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462));
		// OnWillDeinitialize(args);
		DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 L_0 = V_0;
		SessionIDField_OnWillDeinitialize_mBCF9017A406E185553EEB8532FA142A9D767479A(__this, L_0, NULL);
		// base.OnDestroy();
		InputField_OnDestroy_m551000531722FAD0D2DEB4CA9A76EF25A7067EAA(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SessionIDField::_NetworkingInitialized(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionIDField__NetworkingInitialized_m8B670C968500E273A59D143FC867F751AE8A51AC (SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* __this, AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionIDField_OnWillDeinitialize_mBCF9017A406E185553EEB8532FA142A9D767479A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_networking != null)
		RuntimeObject* L_0 = __this->____networking_76;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _networking = args.Networking;
		AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 L_1 = ___args0;
		RuntimeObject* L_2 = L_1.___Networking_0;
		__this->____networking_76 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_76), (void*)L_2);
		// _networking.Disconnected += OnWillDeinitialize;
		RuntimeObject* L_3 = __this->____networking_76;
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_4 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_4, __this, (intptr_t)((void*)SessionIDField_OnWillDeinitialize_mBCF9017A406E185553EEB8532FA142A9D767479A_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(20 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_3, L_4);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SessionIDField::OnWillDeinitialize(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionIDField_OnWillDeinitialize_mBCF9017A406E185553EEB8532FA142A9D767479A (SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* __this, DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionIDField_OnWillDeinitialize_mBCF9017A406E185553EEB8532FA142A9D767479A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_networking == null)
		RuntimeObject* L_0 = __this->____networking_76;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _networking.Disconnected -= OnWillDeinitialize;
		RuntimeObject* L_1 = __this->____networking_76;
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_2 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_2, __this, (intptr_t)((void*)SessionIDField_OnWillDeinitialize_mBCF9017A406E185553EEB8532FA142A9D767479A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(21 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1, L_2);
		// _networking = null;
		__this->____networking_76 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_76), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SessionIDField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionIDField__ctor_mF120B1A4F3EF735997132890CF2732613BC928FB (SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_il2cpp_TypeInfo_var);
		InputField__ctor_m06B9629E3C878D578A8B43C1A8835B526629D6E5(__this, NULL);
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
// System.String Niantic.ARDKExamples.Helpers.SessionIDGenerator::GenerateRandomText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionIDGenerator_GenerateRandomText_mFD36C60A68E2A414E8A1F89569C55DD74808D89A (SessionIDGenerator_tE061B3D4180AE28BC0B464F61BFA40FD6F8920C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		// string builder = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < 6; ++i)
		V_1 = 0;
		goto IL_002b;
	}

IL_000a:
	{
		// int r = Random.Range(0, 26); // [0, 26)
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)26), NULL);
		V_2 = L_0;
		// builder += (char)('A' + r);
		String_t* L_1 = V_0;
		int32_t L_2 = V_2;
		V_3 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)65), L_2)));
		String_t* L_3;
		L_3 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, L_3, NULL);
		V_0 = L_4;
		// for (int i = 0; i < 6; ++i)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < 6; ++i)
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)6)))
		{
			goto IL_000a;
		}
	}
	{
		// return builder;
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SessionIDGenerator::AssignRandomText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionIDGenerator_AssignRandomText_mA5F36497C2E4115F4D7BB37704AF7248BB4B661B (SessionIDGenerator_tE061B3D4180AE28BC0B464F61BFA40FD6F8920C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// idField.text = GenerateRandomText();
		SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* L_0 = __this->___idField_5;
		String_t* L_1;
		L_1 = SessionIDGenerator_GenerateRandomText_mFD36C60A68E2A414E8A1F89569C55DD74808D89A(__this, NULL);
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_1, NULL);
		// idField.onEndEdit.Invoke(idField.text);
		SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* L_2 = __this->___idField_5;
		NullCheck(L_2);
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_3;
		L_3 = InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3_inline(L_2, NULL);
		SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* L_4 = __this->___idField_5;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_4, NULL);
		NullCheck(L_3);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(L_3, L_5, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SessionIDGenerator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionIDGenerator_Update_m272345F48EBB4B95392216FAD2BECBF4EF8A32A6 (SessionIDGenerator_tE061B3D4180AE28BC0B464F61BFA40FD6F8920C7* __this, const RuntimeMethod* method) 
{
	{
		// generateButton.gameObject.SetActive(idField.interactable);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___generateButton_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		SessionIDField_t5645A97F19D6F571088AA953CA9C96ABCCC2F60E* L_2 = __this->___idField_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_2, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SessionIDGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionIDGenerator__ctor_mF082A9AA9FD23C66D2A68F6CAF7F61FDC832316D (SessionIDGenerator_tE061B3D4180AE28BC0B464F61BFA40FD6F8920C7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Niantic.ARDKExamples.Helpers.SessionStartGatekeeper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStartGatekeeper_Update_m8E36E4777CF80A0F55990ABE76E855F3193EB4A1 (SessionStartGatekeeper_t952D9782379CF47F611D77EDDBAD6F0CACCD234D* __this, const RuntimeMethod* method) 
{
	{
		// startButton.interactable = !string.IsNullOrEmpty(idField.text);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___startButton_5;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___idField_4;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_1, NULL);
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SessionStartGatekeeper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStartGatekeeper__ctor_m43505D5A8235613FD5FFEB99FE196CE0EE5000DB (SessionStartGatekeeper_t952D9782379CF47F611D77EDDBAD6F0CACCD234D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText_Awake_m2638083205A2708DB36CDDF89FFA2B956E87D63E (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateHelpText_OnAnyInitialized_m6A4CAD4964EDD49EF568EEA20F065A0442763988_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARNetworkingFactory.ARNetworkingInitialized += OnAnyInitialized;
		ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* L_0 = (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82*)il2cpp_codegen_object_new(ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_mCDF11A2B25962AC5C0AF90655A8656E0F1B866C9(L_0, __this, (intptr_t)((void*)SyncStateHelpText_OnAnyInitialized_m6A4CAD4964EDD49EF568EEA20F065A0442763988_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		ARNetworkingFactory_add_ARNetworkingInitialized_mE5A4F323DAA5E9D2954D5C204357310F7F91BC53(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText_Start_mC129FBD4430FB2F90F5DCD2A52910A9BC5E66F3F (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, const RuntimeMethod* method) 
{
	{
		// Hide();
		SyncStateHelpText_Hide_mF82488DC8410B056CD622C099FA45A57093B9C08(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText_OnDestroy_m8B1DD6B96A1C1504566D25BD99F8940084E736D4 (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateHelpText_OnAnyInitialized_m6A4CAD4964EDD49EF568EEA20F065A0442763988_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ARNetworkingFactory.ARNetworkingInitialized -= OnAnyInitialized;
		ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* L_0 = (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82*)il2cpp_codegen_object_new(ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_mCDF11A2B25962AC5C0AF90655A8656E0F1B866C9(L_0, __this, (intptr_t)((void*)SyncStateHelpText_OnAnyInitialized_m6A4CAD4964EDD49EF568EEA20F065A0442763988_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		ARNetworkingFactory_remove_ARNetworkingInitialized_m7C049CAA572A9A75E6C9E9E28E42B54730B2D6AF(L_0, NULL);
		// OnDeinitialized(new ARNetworkingDeinitializedArgs());
		il2cpp_codegen_initobj((&V_0), sizeof(ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63));
		ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63 L_1 = V_0;
		SyncStateHelpText_OnDeinitialized_m1B0FEE1762B018F3CD517C0CD2D9171A14439823(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::OnAnyInitialized(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText_OnAnyInitialized_m6A4CAD4964EDD49EF568EEA20F065A0442763988 (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, AnyARNetworkingInitializedArgs_tE7DFF4BAAA921B3B4CB96D9996A255A660491BC5 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateHelpText_OnDeinitialized_m1B0FEE1762B018F3CD517C0CD2D9171A14439823_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateHelpText_OnPeerStateReceived_m237FF89629CD496EF6B87C6475AE90D0C361F20C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_arNetworking != null)
		RuntimeObject* L_0 = __this->____arNetworking_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _arNetworking = args.ARNetworking;
		RuntimeObject* L_1;
		L_1 = AnyARNetworkingInitializedArgs_get_ARNetworking_mA3D197FB19EA656CD4D79A0E9AAFB299FDFFC135_inline((&___args0), NULL);
		__this->____arNetworking_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arNetworking_7), (void*)L_1);
		// _arNetworking.Deinitialized += OnDeinitialized;
		RuntimeObject* L_2 = __this->____arNetworking_7;
		ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* L_3 = (ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F*)il2cpp_codegen_object_new(ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m001EE51831C81CE4C6BACD6668380FA4BEB6572A(L_3, __this, (intptr_t)((void*)SyncStateHelpText_OnDeinitialized_m1B0FEE1762B018F3CD517C0CD2D9171A14439823_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* >::Invoke(14 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::add_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_2, L_3);
		// _arNetworking.PeerStateReceived += OnPeerStateReceived;
		RuntimeObject* L_4 = __this->____arNetworking_7;
		ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* L_5 = (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7*)il2cpp_codegen_object_new(ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336(L_5, __this, (intptr_t)((void*)SyncStateHelpText_OnPeerStateReceived_m237FF89629CD496EF6B87C6475AE90D0C361F20C_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* >::Invoke(10 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::add_PeerStateReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_4, L_5);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::OnDeinitialized(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText_OnDeinitialized_m1B0FEE1762B018F3CD517C0CD2D9171A14439823 (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateHelpText_OnDeinitialized_m1B0FEE1762B018F3CD517C0CD2D9171A14439823_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateHelpText_OnPeerStateReceived_m237FF89629CD496EF6B87C6475AE90D0C361F20C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_arNetworking == null)
		RuntimeObject* L_0 = __this->____arNetworking_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _arNetworking.PeerStateReceived -= OnPeerStateReceived;
		RuntimeObject* L_1 = __this->____arNetworking_7;
		ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* L_2 = (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7*)il2cpp_codegen_object_new(ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336(L_2, __this, (intptr_t)((void*)SyncStateHelpText_OnPeerStateReceived_m237FF89629CD496EF6B87C6475AE90D0C361F20C_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* >::Invoke(11 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::remove_PeerStateReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_1, L_2);
		// _arNetworking.Deinitialized -= OnDeinitialized;
		RuntimeObject* L_3 = __this->____arNetworking_7;
		ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* L_4 = (ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F*)il2cpp_codegen_object_new(ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m001EE51831C81CE4C6BACD6668380FA4BEB6572A(L_4, __this, (intptr_t)((void*)SyncStateHelpText_OnDeinitialized_m1B0FEE1762B018F3CD517C0CD2D9171A14439823_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* >::Invoke(15 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::remove_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_3, L_4);
		// _arNetworking = null;
		__this->____arNetworking_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arNetworking_7), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::OnPeerStateReceived(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText_OnPeerStateReceived_m237FF89629CD496EF6B87C6475AE90D0C361F20C (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA7966CF5B0D3A1B49840681B8DD35F692C60B221_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6EDBF794FDA90ED3008549A0F6C72DA84615A21C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEquatable_1_tAB27EFCEEC8B73006079F75F9928B2D32C59F763_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (!args.Peer.Equals(_arNetworking.Networking.Self))
		RuntimeObject* L_0;
		L_0 = PeerStateReceivedArgs_get_Peer_mE8CD905A84120698BDEB7B43E4410AA1050C0008_inline((&___args0), NULL);
		RuntimeObject* L_1 = __this->____arNetworking_7;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.IMultipeerNetworking::get_Self() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_0);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<Niantic.ARDK.Networking.IPeer>::Equals(T) */, IEquatable_1_tAB27EFCEEC8B73006079F75F9928B2D32C59F763_il2cpp_TypeInfo_var, L_0, L_3);
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		return;
	}

IL_001f:
	{
		// string displayText = null;
		V_0 = (String_t*)NULL;
		// if (args.Peer.Equals(_arNetworking.Networking.Host))
		RuntimeObject* L_5;
		L_5 = PeerStateReceivedArgs_get_Peer_mE8CD905A84120698BDEB7B43E4410AA1050C0008_inline((&___args0), NULL);
		RuntimeObject* L_6 = __this->____arNetworking_7;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.IMultipeerNetworking::get_Host() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<Niantic.ARDK.Networking.IPeer>::Equals(T) */, IEquatable_1_tAB27EFCEEC8B73006079F75F9928B2D32C59F763_il2cpp_TypeInfo_var, L_5, L_8);
		if (!L_9)
		{
			goto IL_0073;
		}
	}
	{
		// if (_usingQR && _qrHostHelpTextOverride.ContainsKey(args.State))
		bool L_10 = __this->____usingQR_6;
		if (!L_10)
		{
			goto IL_00d3;
		}
	}
	{
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_11 = __this->____qrHostHelpTextOverride_11;
		int32_t L_12;
		L_12 = PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline((&___args0), NULL);
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_mA7966CF5B0D3A1B49840681B8DD35F692C60B221(L_11, L_12, Dictionary_2_ContainsKey_mA7966CF5B0D3A1B49840681B8DD35F692C60B221_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_00d3;
		}
	}
	{
		// displayText = _qrHostHelpTextOverride[args.State];
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_14 = __this->____qrHostHelpTextOverride_11;
		int32_t L_15;
		L_15 = PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline((&___args0), NULL);
		NullCheck(L_14);
		String_t* L_16;
		L_16 = Dictionary_2_get_Item_m6EDBF794FDA90ED3008549A0F6C72DA84615A21C(L_14, L_15, Dictionary_2_get_Item_m6EDBF794FDA90ED3008549A0F6C72DA84615A21C_RuntimeMethod_var);
		V_0 = L_16;
		goto IL_00d3;
	}

IL_0073:
	{
		// if (_usingQR && _qrClientHelpTextOverride.ContainsKey(args.State))
		bool L_17 = __this->____usingQR_6;
		if (!L_17)
		{
			goto IL_00a4;
		}
	}
	{
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_18 = __this->____qrClientHelpTextOverride_12;
		int32_t L_19;
		L_19 = PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline((&___args0), NULL);
		NullCheck(L_18);
		bool L_20;
		L_20 = Dictionary_2_ContainsKey_mA7966CF5B0D3A1B49840681B8DD35F692C60B221(L_18, L_19, Dictionary_2_ContainsKey_mA7966CF5B0D3A1B49840681B8DD35F692C60B221_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_00a4;
		}
	}
	{
		// displayText = _qrClientHelpTextOverride[args.State];
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_21 = __this->____qrClientHelpTextOverride_12;
		int32_t L_22;
		L_22 = PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline((&___args0), NULL);
		NullCheck(L_21);
		String_t* L_23;
		L_23 = Dictionary_2_get_Item_m6EDBF794FDA90ED3008549A0F6C72DA84615A21C(L_21, L_22, Dictionary_2_get_Item_m6EDBF794FDA90ED3008549A0F6C72DA84615A21C_RuntimeMethod_var);
		V_0 = L_23;
		goto IL_00d3;
	}

IL_00a4:
	{
		// else if(!_usingQR && _clientTextOverride.ContainsKey(args.State))
		bool L_24 = __this->____usingQR_6;
		if (L_24)
		{
			goto IL_00d3;
		}
	}
	{
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_25 = __this->____clientTextOverride_10;
		int32_t L_26;
		L_26 = PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline((&___args0), NULL);
		NullCheck(L_25);
		bool L_27;
		L_27 = Dictionary_2_ContainsKey_mA7966CF5B0D3A1B49840681B8DD35F692C60B221(L_25, L_26, Dictionary_2_ContainsKey_mA7966CF5B0D3A1B49840681B8DD35F692C60B221_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_00d3;
		}
	}
	{
		// displayText = _clientTextOverride[args.State];
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_28 = __this->____clientTextOverride_10;
		int32_t L_29;
		L_29 = PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline((&___args0), NULL);
		NullCheck(L_28);
		String_t* L_30;
		L_30 = Dictionary_2_get_Item_m6EDBF794FDA90ED3008549A0F6C72DA84615A21C(L_28, L_29, Dictionary_2_get_Item_m6EDBF794FDA90ED3008549A0F6C72DA84615A21C_RuntimeMethod_var);
		V_0 = L_30;
	}

IL_00d3:
	{
		// if (string.IsNullOrEmpty(displayText) && _hostHelpText.ContainsKey(args.State))
		String_t* L_31 = V_0;
		bool L_32;
		L_32 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_31, NULL);
		if (!L_32)
		{
			goto IL_0102;
		}
	}
	{
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_33 = __this->____hostHelpText_9;
		int32_t L_34;
		L_34 = PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline((&___args0), NULL);
		NullCheck(L_33);
		bool L_35;
		L_35 = Dictionary_2_ContainsKey_mA7966CF5B0D3A1B49840681B8DD35F692C60B221(L_33, L_34, Dictionary_2_ContainsKey_mA7966CF5B0D3A1B49840681B8DD35F692C60B221_RuntimeMethod_var);
		if (!L_35)
		{
			goto IL_0102;
		}
	}
	{
		// displayText = _hostHelpText[args.State];
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_36 = __this->____hostHelpText_9;
		int32_t L_37;
		L_37 = PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline((&___args0), NULL);
		NullCheck(L_36);
		String_t* L_38;
		L_38 = Dictionary_2_get_Item_m6EDBF794FDA90ED3008549A0F6C72DA84615A21C(L_36, L_37, Dictionary_2_get_Item_m6EDBF794FDA90ED3008549A0F6C72DA84615A21C_RuntimeMethod_var);
		V_0 = L_38;
	}

IL_0102:
	{
		// if (string.IsNullOrEmpty(displayText))
		String_t* L_39 = V_0;
		bool L_40;
		L_40 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_39, NULL);
		if (!L_40)
		{
			goto IL_0111;
		}
	}
	{
		// Hide();
		SyncStateHelpText_Hide_mF82488DC8410B056CD622C099FA45A57093B9C08(__this, NULL);
		return;
	}

IL_0111:
	{
		// _helpText.text = displayText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41 = __this->____helpText_4;
		String_t* L_42 = V_0;
		NullCheck(L_41);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_42);
		// Show();
		SyncStateHelpText_Show_m317FC8393D5F433E07F844A49618D763A6C3013B(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText_Hide_mF82488DC8410B056CD622C099FA45A57093B9C08 (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, const RuntimeMethod* method) 
{
	{
		// _helpText.enabled = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____helpText_4;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// _backdrop.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->____backdrop_5;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText_Show_m317FC8393D5F433E07F844A49618D763A6C3013B (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, const RuntimeMethod* method) 
{
	{
		// _helpText.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____helpText_4;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// _backdrop.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->____backdrop_5;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateHelpText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateHelpText__ctor_m202D33F1923553FC7815C55F8A162B4BF9C2F496 (SyncStateHelpText_tE75BADB3D22E4ECE236DBC22AE3DD793FE3CFCD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5367B4E765FCD96CF95C26F7D57CAE0DF8B521B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ED788DF2380D6BF3C3AA3A3C852A8D05A2EB335);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DFADAE9847FFE066EF2E3B11DFF7A26D8290083);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88903E9A51CB11E47CE333A9776E564FAD4F7DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F88BFA38BFC524EA0F5D26B11BEB67405611EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAADCBA6E9DD00D77369AF3DFD0B2536CE7836E8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24AEB9F54E9970F338BD30A2D95310CE8469FED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCABCE693610BCC284BD0E64FA2988336566E3ED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD476FE2A739519547D4B2E68BBA94B2240585B6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6417391D9B4AAD1F29906F50164D30472FF8E2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEC84A65F6EFA4337D1C5375745119D05D8535F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<PeerState, string> _hostHelpText =
		//   new Dictionary<PeerState, string>()
		//   {
		//     { PeerState.WaitingForLocalizationData,
		//                       "Find 3D object with significant features. A shoe," +
		//                       " for example. Point camera at object, " +
		//                       _localizationInstructions },
		// 
		//     // General fallthrough
		//     { PeerState.Unknown, "Waiting for connection." },
		//     { PeerState.Initializing, "AR stack is initializing. Please wait." },
		//     { PeerState.Limited, "Limited" },
		//     { PeerState.Failed, "Sync failed. Restart app." },
		// 
		//     // Fallthrough for both qr client and qr host
		//     { PeerState.Stabilizing, "Sync achieved with QR code. Drifting will occur and accumulate." +
		//                              " Attempting to use colocalization backend to correct for drift." +
		//                              " (Look at other networking examples for details on this process)" }
		//   };
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_0 = (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97*)il2cpp_codegen_object_new(Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5367B4E765FCD96CF95C26F7D57CAE0DF8B521B1(L_0, Dictionary_2__ctor_m5367B4E765FCD96CF95C26F7D57CAE0DF8B521B1_RuntimeMethod_var);
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3(L_1, 2, _stringLiteral0ED788DF2380D6BF3C3AA3A3C852A8D05A2EB335, Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3(L_2, 0, _stringLiteralFEC84A65F6EFA4337D1C5375745119D05D8535F9, Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3(L_3, 1, _stringLiteralAADCBA6E9DD00D77369AF3DFD0B2536CE7836E8D, Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3(L_4, 6, _stringLiteralD476FE2A739519547D4B2E68BBA94B2240585B6E, Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3(L_5, 7, _stringLiteral88903E9A51CB11E47CE333A9776E564FAD4F7DE4, Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3(L_6, 4, _stringLiteralCABCE693610BCC284BD0E64FA2988336566E3ED3, Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		__this->____hostHelpText_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hostHelpText_9), (void*)L_6);
		// private readonly Dictionary<PeerState, string> _clientTextOverride =
		//   new Dictionary<PeerState, string>()
		//   {
		//     { PeerState.WaitingForLocalizationData, "Wait until host localizes." },
		//     { PeerState.Localizing, "Point camera at the object the host scanned, " +
		//                             _localizationInstructions }
		//   };
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_7 = (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97*)il2cpp_codegen_object_new(Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_m5367B4E765FCD96CF95C26F7D57CAE0DF8B521B1(L_7, Dictionary_2__ctor_m5367B4E765FCD96CF95C26F7D57CAE0DF8B521B1_RuntimeMethod_var);
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3(L_8, 2, _stringLiteralC24AEB9F54E9970F338BD30A2D95310CE8469FED, Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3(L_9, 3, _stringLiteral95F88BFA38BFC524EA0F5D26B11BEB67405611EE, Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		__this->____clientTextOverride_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clientTextOverride_10), (void*)L_9);
		// private readonly Dictionary<PeerState, string> _qrHostHelpTextOverride =
		//   new Dictionary<PeerState, string>()
		//   {
		//     { PeerState.WaitingForLocalizationData, "Scan a plane." },
		//     { PeerState.Stabilizing, "Using plane to localize. Tilt phone flat to see QR code and" +
		//                              " have client scan the code." }
		//   };
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_10 = (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97*)il2cpp_codegen_object_new(Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Dictionary_2__ctor_m5367B4E765FCD96CF95C26F7D57CAE0DF8B521B1(L_10, Dictionary_2__ctor_m5367B4E765FCD96CF95C26F7D57CAE0DF8B521B1_RuntimeMethod_var);
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3(L_11, 2, _stringLiteral1DFADAE9847FFE066EF2E3B11DFF7A26D8290083, Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_12 = L_11;
		NullCheck(L_12);
		Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3(L_12, 4, _stringLiteralD6417391D9B4AAD1F29906F50164D30472FF8E2E, Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		__this->____qrHostHelpTextOverride_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____qrHostHelpTextOverride_11), (void*)L_12);
		// private readonly Dictionary<PeerState, string> _qrClientHelpTextOverride =
		//   new Dictionary<PeerState, string>()
		//   {
		//     { PeerState.WaitingForLocalizationData, "Scan a plane." },
		//   };
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_13 = (Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97*)il2cpp_codegen_object_new(Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Dictionary_2__ctor_m5367B4E765FCD96CF95C26F7D57CAE0DF8B521B1(L_13, Dictionary_2__ctor_m5367B4E765FCD96CF95C26F7D57CAE0DF8B521B1_RuntimeMethod_var);
		Dictionary_2_tD40B3BB710BEC7CD1E44D29D12D98D7959205E97* L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3(L_14, 2, _stringLiteral1DFADAE9847FFE066EF2E3B11DFF7A26D8290083, Dictionary_2_Add_m76B1F8E988CCD17E9A1BCF53A9FFA218F073D9A3_RuntimeMethod_var);
		__this->____qrClientHelpTextOverride_12 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____qrClientHelpTextOverride_12), (void*)L_14);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_Awake_m9A9C9058F25784DA68C22FDD50E4CD1BA8B531D3 (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackedPeer_OnAnyInitialized_mFF5726B7B441BAA7A5E9D7B0CA0CEE158E7197A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARNetworkingFactory.ARNetworkingInitialized += OnAnyInitialized;
		ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* L_0 = (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82*)il2cpp_codegen_object_new(ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_mCDF11A2B25962AC5C0AF90655A8656E0F1B866C9(L_0, __this, (intptr_t)((void*)SyncStateTrackedPeer_OnAnyInitialized_mFF5726B7B441BAA7A5E9D7B0CA0CEE158E7197A4_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		ARNetworkingFactory_add_ARNetworkingInitialized_mE5A4F323DAA5E9D2954D5C204357310F7F91BC53(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_OnDestroy_mC97B351187DED3A639E511BCF85EC127C00A7EE7 (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackedPeer_OnAnyInitialized_mFF5726B7B441BAA7A5E9D7B0CA0CEE158E7197A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ARNetworkingFactory.ARNetworkingInitialized -= OnAnyInitialized;
		ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* L_0 = (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82*)il2cpp_codegen_object_new(ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_mCDF11A2B25962AC5C0AF90655A8656E0F1B866C9(L_0, __this, (intptr_t)((void*)SyncStateTrackedPeer_OnAnyInitialized_mFF5726B7B441BAA7A5E9D7B0CA0CEE158E7197A4_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		ARNetworkingFactory_remove_ARNetworkingInitialized_m7C049CAA572A9A75E6C9E9E28E42B54730B2D6AF(L_0, NULL);
		// OnDeinitialized(new ARNetworkingDeinitializedArgs());
		il2cpp_codegen_initobj((&V_0), sizeof(ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63));
		ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63 L_1 = V_0;
		SyncStateTrackedPeer_OnDeinitialized_m84907F56C0B5059556D5A56BE8BFDBFA3235ABC6(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::OnAnyInitialized(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_OnAnyInitialized_mFF5726B7B441BAA7A5E9D7B0CA0CEE158E7197A4 (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, AnyARNetworkingInitializedArgs_tE7DFF4BAAA921B3B4CB96D9996A255A660491BC5 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackedPeer_OnDeinitialized_m84907F56C0B5059556D5A56BE8BFDBFA3235ABC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackedPeer_OnPeerStateReceived_m5130A11309FB8D9A82636E4A07A846D0621E7C2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A886899B8B17C1B72744C93F3C49693C53F403);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_arNetworking != null)
		RuntimeObject* L_0 = __this->____arNetworking_10;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _arNetworking = args.ARNetworking;
		RuntimeObject* L_1;
		L_1 = AnyARNetworkingInitializedArgs_get_ARNetworking_mA3D197FB19EA656CD4D79A0E9AAFB299FDFFC135_inline((&___args0), NULL);
		__this->____arNetworking_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arNetworking_10), (void*)L_1);
		// _arNetworking.Deinitialized += OnDeinitialized;
		RuntimeObject* L_2 = __this->____arNetworking_10;
		ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* L_3 = (ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F*)il2cpp_codegen_object_new(ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m001EE51831C81CE4C6BACD6668380FA4BEB6572A(L_3, __this, (intptr_t)((void*)SyncStateTrackedPeer_OnDeinitialized_m84907F56C0B5059556D5A56BE8BFDBFA3235ABC6_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* >::Invoke(14 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::add_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_2, L_3);
		// if (_trackedPeer != null)
		RuntimeObject* L_4 = __this->____trackedPeer_7;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		// Debug.LogFormat("SyncStateTrackedPeer listening to updates from {0}", _trackedPeer);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		RuntimeObject* L_7 = __this->____trackedPeer_7;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralD8A886899B8B17C1B72744C93F3C49693C53F403, L_6, NULL);
		// _arNetworking.PeerStateReceived += OnPeerStateReceived;
		RuntimeObject* L_8 = __this->____arNetworking_10;
		ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* L_9 = (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7*)il2cpp_codegen_object_new(ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336(L_9, __this, (intptr_t)((void*)SyncStateTrackedPeer_OnPeerStateReceived_m5130A11309FB8D9A82636E4A07A846D0621E7C2E_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* >::Invoke(10 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::add_PeerStateReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_8, L_9);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::SetupToTrackPeer(Niantic.ARDK.Networking.IPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_SetupToTrackPeer_mD02166AC443483E3F707B4EDA0143F46E994E004 (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, RuntimeObject* ___peer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEquatable_1_tAB27EFCEEC8B73006079F75F9928B2D32C59F763_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackedPeer_OnPeerStateReceived_m5130A11309FB8D9A82636E4A07A846D0621E7C2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B13C13D05D10897620C0D34BF444CD72DB19EF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A886899B8B17C1B72744C93F3C49693C53F403);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// _trackedPeer = peer;
		RuntimeObject* L_0 = ___peer0;
		__this->____trackedPeer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trackedPeer_7), (void*)L_0);
		// var peerID = _trackedPeer.ToString(_peerIdLimit);
		RuntimeObject* L_1 = __this->____trackedPeer_7;
		int32_t L_2 = __this->____peerIdLimit_6;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Niantic.ARDK.Networking.IPeer::ToString(System.Int32) */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		// UpdateIndicatorText(peerID + " - UnknownSyncState");
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral7B13C13D05D10897620C0D34BF444CD72DB19EF6, NULL);
		SyncStateTrackedPeer_UpdateIndicatorText_m63662786E478219738221D1BC2EB901202464F0E(__this, L_5, NULL);
		// if (_arNetworking != null)
		RuntimeObject* L_6 = __this->____arNetworking_10;
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		// Debug.LogFormat("SyncStateTrackedPeer listening to updates from {0}", _trackedPeer);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		RuntimeObject* L_9 = __this->____trackedPeer_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralD8A886899B8B17C1B72744C93F3C49693C53F403, L_8, NULL);
		// _arNetworking.PeerStateReceived += OnPeerStateReceived;
		RuntimeObject* L_10 = __this->____arNetworking_10;
		ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* L_11 = (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7*)il2cpp_codegen_object_new(ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336(L_11, __this, (intptr_t)((void*)SyncStateTrackedPeer_OnPeerStateReceived_m5130A11309FB8D9A82636E4A07A846D0621E7C2E_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* >::Invoke(10 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::add_PeerStateReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_10, L_11);
	}

IL_0062:
	{
		// _isSelf = peer.Equals(_arNetworking.Networking.Self);
		RuntimeObject* L_12 = ___peer0;
		RuntimeObject* L_13 = __this->____arNetworking_10;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.IMultipeerNetworking::get_Self() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_12);
		bool L_16;
		L_16 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<Niantic.ARDK.Networking.IPeer>::Equals(T) */, IEquatable_1_tAB27EFCEEC8B73006079F75F9928B2D32C59F763_il2cpp_TypeInfo_var, L_12, L_15);
		__this->____isSelf_8 = L_16;
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::OnDeinitialized(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_OnDeinitialized_m84907F56C0B5059556D5A56BE8BFDBFA3235ABC6 (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, ARNetworkingDeinitializedArgs_t621B25538FCC565945AA03B445CF2241363ABA63 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackedPeer_OnDeinitialized_m84907F56C0B5059556D5A56BE8BFDBFA3235ABC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackedPeer_OnPeerStateReceived_m5130A11309FB8D9A82636E4A07A846D0621E7C2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_arNetworking == null)
		RuntimeObject* L_0 = __this->____arNetworking_10;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _arNetworking.PeerStateReceived -= OnPeerStateReceived;
		RuntimeObject* L_1 = __this->____arNetworking_10;
		ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* L_2 = (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7*)il2cpp_codegen_object_new(ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336(L_2, __this, (intptr_t)((void*)SyncStateTrackedPeer_OnPeerStateReceived_m5130A11309FB8D9A82636E4A07A846D0621E7C2E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* >::Invoke(11 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::remove_PeerStateReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_1, L_2);
		// _arNetworking.Deinitialized -= OnDeinitialized;
		RuntimeObject* L_3 = __this->____arNetworking_10;
		ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* L_4 = (ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F*)il2cpp_codegen_object_new(ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m001EE51831C81CE4C6BACD6668380FA4BEB6572A(L_4, __this, (intptr_t)((void*)SyncStateTrackedPeer_OnDeinitialized_m84907F56C0B5059556D5A56BE8BFDBFA3235ABC6_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< ArdkEventHandler_1_t3B68CD11080AD1861C74DD8483243D67133ABA3F* >::Invoke(15 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::remove_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.ARNetworkingDeinitializedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_3, L_4);
		// _arNetworking = null;
		__this->____arNetworking_10 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arNetworking_10), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::OnPeerStateReceived(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_OnPeerStateReceived_m5130A11309FB8D9A82636E4A07A846D0621E7C2E (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEquatable_1_tAB27EFCEEC8B73006079F75F9928B2D32C59F763_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_trackedPeer == null || !args.Peer.Equals(_trackedPeer))
		RuntimeObject* L_0 = __this->____trackedPeer_7;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = PeerStateReceivedArgs_get_Peer_mE8CD905A84120698BDEB7B43E4410AA1050C0008_inline((&___args0), NULL);
		RuntimeObject* L_2 = __this->____trackedPeer_7;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<Niantic.ARDK.Networking.IPeer>::Equals(T) */, IEquatable_1_tAB27EFCEEC8B73006079F75F9928B2D32C59F763_il2cpp_TypeInfo_var, L_1, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// UpdateIndicator(args.State);
		int32_t L_4;
		L_4 = PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline((&___args0), NULL);
		SyncStateTrackedPeer_UpdateIndicator_m8B1469DBC3403E94E34058DFBF1F56C8304F4AB5(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::UpdateIndicator(Niantic.ARDK.AR.Networking.PeerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_UpdateIndicator_m8B1469DBC3403E94E34058DFBF1F56C8304F4AB5 (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, int32_t ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mBA3D2D3B4FD265B6F28401B318EE0EAD384BB5FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerState_tA01351ACC4C28BF4BCAC07CA68A80381C0C446EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD8AC4510AD9152261FE239651908BC72BBC9B47);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var peerID = _trackedPeer.ToString(_peerIdLimit);
		RuntimeObject* L_0 = __this->____trackedPeer_7;
		int32_t L_1 = __this->____peerIdLimit_6;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Niantic.ARDK.Networking.IPeer::ToString(System.Int32) */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		// if (_isSelf)
		bool L_3 = __this->____isSelf_8;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// peerID += " (self)";
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralDD8AC4510AD9152261FE239651908BC72BBC9B47, NULL);
		V_0 = L_5;
	}

IL_0026:
	{
		// UpdateIndicatorText(peerID + " - " + newState.ToString());
		String_t* L_6 = V_0;
		Il2CppFakeBox<int32_t> L_7(PeerState_tA01351ACC4C28BF4BCAC07CA68A80381C0C446EF_il2cpp_TypeInfo_var, (&___newState0));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_8, NULL);
		SyncStateTrackedPeer_UpdateIndicatorText_m63662786E478219738221D1BC2EB901202464F0E(__this, L_9, NULL);
		// if (_connectedIndicator)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->____connectedIndicator_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// var color = _indicatorColors[newState];
		Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* L_12 = __this->____indicatorColors_9;
		int32_t L_13 = ___newState0;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Dictionary_2_get_Item_mBA3D2D3B4FD265B6F28401B318EE0EAD384BB5FC(L_12, L_13, Dictionary_2_get_Item_mBA3D2D3B4FD265B6F28401B318EE0EAD384BB5FC_RuntimeMethod_var);
		V_1 = L_14;
		// _connectedIndicator.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->____connectedIndicator_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_1;
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::UpdateIndicatorText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer_UpdateIndicatorText_m63662786E478219738221D1BC2EB901202464F0E (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, String_t* ___newText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_connectedIndicatorText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____connectedIndicatorText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _connectedIndicatorText.text = newText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____connectedIndicatorText_5;
		String_t* L_3 = ___newText0;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackedPeer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackedPeer__ctor_m3D9E333F0DF7E1AA356255BE198619D4E4E0486F (SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6398CBE202D941F1CFFABE6D8B67E64AE62A4A47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int _peerIdLimit = 6;
		__this->____peerIdLimit_6 = 6;
		// private readonly Dictionary<PeerState, Color> _indicatorColors = new Dictionary<PeerState, Color>
		// {
		//   { PeerState.Unknown, Color.white },
		//   { PeerState.Initializing, Color.yellow },
		//   { PeerState.WaitingForLocalizationData, Color.cyan },
		//   { PeerState.Localizing, Color.blue },
		//   { PeerState.Stabilizing, Color.magenta },
		//   { PeerState.Stable, Color.green },
		//   { PeerState.Limited, Color.magenta },
		//   { PeerState.Failed, Color.red }
		// };
		Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* L_0 = (Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B*)il2cpp_codegen_object_new(Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m6398CBE202D941F1CFFABE6D8B67E64AE62A4A47(L_0, Dictionary_2__ctor_m6398CBE202D941F1CFFABE6D8B67E64AE62A4A47_RuntimeMethod_var);
		Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* L_1 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_1);
		Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA(L_1, 0, L_2, Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA_RuntimeMethod_var);
		Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* L_3 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_3);
		Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA(L_3, 1, L_4, Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA_RuntimeMethod_var);
		Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* L_5 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		NullCheck(L_5);
		Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA(L_5, 2, L_6, Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA_RuntimeMethod_var);
		Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* L_7 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		NullCheck(L_7);
		Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA(L_7, 3, L_8, Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA_RuntimeMethod_var);
		Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* L_9 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		NullCheck(L_9);
		Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA(L_9, 4, L_10, Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA_RuntimeMethod_var);
		Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* L_11 = L_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_11);
		Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA(L_11, 5, L_12, Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA_RuntimeMethod_var);
		Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* L_13 = L_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		NullCheck(L_13);
		Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA(L_13, 6, L_14, Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA_RuntimeMethod_var);
		Dictionary_2_t4AD6FCA0F3B497A36DE7D12A0C2169985D8D9D6B* L_15 = L_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_15);
		Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA(L_15, 7, L_16, Dictionary_2_Add_m37DF0A21C41667EB45962A8E52EB6C138056B9AA_RuntimeMethod_var);
		__this->____indicatorColors_9 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____indicatorColors_9), (void*)L_15);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_Awake_m91F5F85FDF5F64C2E9A7774ECF97425C7702D2E8 (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnAnyInitialized_m768210498B5B6F3C9358185F0DA1739FA8B8EA00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARNetworkingFactory.ARNetworkingInitialized += OnAnyInitialized;
		ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* L_0 = (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82*)il2cpp_codegen_object_new(ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_mCDF11A2B25962AC5C0AF90655A8656E0F1B866C9(L_0, __this, (intptr_t)((void*)SyncStateTrackingList_OnAnyInitialized_m768210498B5B6F3C9358185F0DA1739FA8B8EA00_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		ARNetworkingFactory_add_ARNetworkingInitialized_mE5A4F323DAA5E9D2954D5C204357310F7F91BC53(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_OnDestroy_mE9AA03868610426731F87A4AF3CBECCB4B200551 (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnAnyInitialized_m768210498B5B6F3C9358185F0DA1739FA8B8EA00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DeinitializedArgs_t9E20E228D8359F47DB613E62FF5ED0BC3548A24F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ARNetworkingFactory.ARNetworkingInitialized -= OnAnyInitialized;
		ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82* L_0 = (ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82*)il2cpp_codegen_object_new(ArdkEventHandler_1_t065E02445515AEF28984FD062CE529CBF4358A82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_mCDF11A2B25962AC5C0AF90655A8656E0F1B866C9(L_0, __this, (intptr_t)((void*)SyncStateTrackingList_OnAnyInitialized_m768210498B5B6F3C9358185F0DA1739FA8B8EA00_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		ARNetworkingFactory_remove_ARNetworkingInitialized_m7C049CAA572A9A75E6C9E9E28E42B54730B2D6AF(L_0, NULL);
		// var args = new DeinitializedArgs();
		il2cpp_codegen_initobj((&V_0), sizeof(DeinitializedArgs_t9E20E228D8359F47DB613E62FF5ED0BC3548A24F));
		// OnWillDeinitialize(args);
		DeinitializedArgs_t9E20E228D8359F47DB613E62FF5ED0BC3548A24F L_1 = V_0;
		SyncStateTrackingList_OnWillDeinitialize_mF2DC27918883E31E4462355689350839B979D256(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::OnAnyInitialized(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.AnyARNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_OnAnyInitialized_m768210498B5B6F3C9358185F0DA1739FA8B8EA00 (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, AnyARNetworkingInitializedArgs_tE7DFF4BAAA921B3B4CB96D9996A255A660491BC5 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t61CEAA077D2369FC0C739F2C2A898241408EF204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t60FB2FF7ACAC822916320B47A053747037CE7C0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnDidAddPeer_mF6A55D9FE698FE858FFCE504D99ECCBB0F133731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnDidConnect_mA25A9E0C0FAE4F7788A793EBCDDC7885F99C2A4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnDidRemovePeer_mB3E11BAEF179E47DA4D3AB0489A4242E675BD243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnWillDeinitialize_mF2DC27918883E31E4462355689350839B979D256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnWillDisconnect_m6F0BC882425283A01557701D39DE622D1D253C00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (_arNetworking != null)
		RuntimeObject* L_0 = __this->____arNetworking_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _arNetworking = args.ARNetworking;
		RuntimeObject* L_1;
		L_1 = AnyARNetworkingInitializedArgs_get_ARNetworking_mA3D197FB19EA656CD4D79A0E9AAFB299FDFFC135_inline((&___args0), NULL);
		__this->____arNetworking_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arNetworking_7), (void*)L_1);
		// _arNetworking.Networking.Connected += OnDidConnect;
		RuntimeObject* L_2 = __this->____arNetworking_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_2);
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_4 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_4, __this, (intptr_t)((void*)SyncStateTrackingList_OnDidConnect_mA25A9E0C0FAE4F7788A793EBCDDC7885F99C2A4A_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(16 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_3, L_4);
		// _arNetworking.Networking.PeerAdded += OnDidAddPeer;
		RuntimeObject* L_5 = __this->____arNetworking_7;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_5);
		ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* L_7 = (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0*)il2cpp_codegen_object_new(ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64(L_7, __this, (intptr_t)((void*)SyncStateTrackingList_OnDidAddPeer_mF6A55D9FE698FE858FFCE504D99ECCBB0F133731_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* >::Invoke(24 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PeerAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_6, L_7);
		// _arNetworking.Networking.PeerRemoved += OnDidRemovePeer;
		RuntimeObject* L_8 = __this->____arNetworking_7;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_8);
		ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* L_10 = (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1(L_10, __this, (intptr_t)((void*)SyncStateTrackingList_OnDidRemovePeer_mB3E11BAEF179E47DA4D3AB0489A4242E675BD243_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* >::Invoke(26 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PeerRemoved(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_9, L_10);
		// _arNetworking.Networking.Disconnected += OnWillDisconnect;
		RuntimeObject* L_11 = __this->____arNetworking_7;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_11);
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_13 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_13, __this, (intptr_t)((void*)SyncStateTrackingList_OnWillDisconnect_m6F0BC882425283A01557701D39DE622D1D253C00_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(20 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_12, L_13);
		// _arNetworking.Networking.Deinitialized += OnWillDeinitialize;
		RuntimeObject* L_14 = __this->____arNetworking_7;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_14);
		ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* L_16 = (ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF*)il2cpp_codegen_object_new(ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ArdkEventHandler_1__ctor_mDE16F0ADC31F58EA85D854D2E7333491E8BF5C55(L_16, __this, (intptr_t)((void*)SyncStateTrackingList_OnWillDeinitialize_mF2DC27918883E31E4462355689350839B979D256_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* >::Invoke(30 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_15, L_16);
		// if (_arNetworking.Networking.IsConnected)
		RuntimeObject* L_17 = __this->____arNetworking_7;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		bool L_19;
		L_19 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_18);
		if (!L_19)
		{
			goto IL_00ee;
		}
	}
	{
		// foreach (var peer in _arNetworking.Networking.OtherPeers)
		RuntimeObject* L_20 = __this->____arNetworking_7;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.IReadOnlyCollection`1<Niantic.ARDK.Networking.IPeer> Niantic.ARDK.Networking.IMultipeerNetworking::get_OtherPeers() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Niantic.ARDK.Networking.IPeer>::GetEnumerator() */, IEnumerable_1_t61CEAA077D2369FC0C739F2C2A898241408EF204_il2cpp_TypeInfo_var, L_22);
		V_0 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e4:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_24 = V_0;
					if (!L_24)
					{
						goto IL_00ed;
					}
				}
				{
					RuntimeObject* L_25 = V_0;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00ed:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00da_1;
			}

IL_00cc_1:
			{
				// foreach (var peer in _arNetworking.Networking.OtherPeers)
				RuntimeObject* L_26 = V_0;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Niantic.ARDK.Networking.IPeer>::get_Current() */, IEnumerator_1_t60FB2FF7ACAC822916320B47A053747037CE7C0C_il2cpp_TypeInfo_var, L_26);
				V_1 = L_27;
				// CreateTracker(peer);
				RuntimeObject* L_28 = V_1;
				SyncStateTrackingList_CreateTracker_m29053123D87BE7DB6DD7337397F2863F42B4044B(__this, L_28, NULL);
			}

IL_00da_1:
			{
				// foreach (var peer in _arNetworking.Networking.OtherPeers)
				RuntimeObject* L_29 = V_0;
				NullCheck(L_29);
				bool L_30;
				L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_29);
				if (L_30)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_00ee;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::OnWillDeinitialize(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_OnWillDeinitialize_mF2DC27918883E31E4462355689350839B979D256 (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, DeinitializedArgs_t9E20E228D8359F47DB613E62FF5ED0BC3548A24F ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnDidAddPeer_mF6A55D9FE698FE858FFCE504D99ECCBB0F133731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnDidConnect_mA25A9E0C0FAE4F7788A793EBCDDC7885F99C2A4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnDidRemovePeer_mB3E11BAEF179E47DA4D3AB0489A4242E675BD243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnWillDeinitialize_mF2DC27918883E31E4462355689350839B979D256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncStateTrackingList_OnWillDisconnect_m6F0BC882425283A01557701D39DE622D1D253C00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_arNetworking == null)
		RuntimeObject* L_0 = __this->____arNetworking_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _arNetworking.Networking.Connected -= OnDidConnect;
		RuntimeObject* L_1 = __this->____arNetworking_7;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_1);
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_3 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_3, __this, (intptr_t)((void*)SyncStateTrackingList_OnDidConnect_mA25A9E0C0FAE4F7788A793EBCDDC7885F99C2A4A_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(17 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_2, L_3);
		// _arNetworking.Networking.PeerAdded -= OnDidAddPeer;
		RuntimeObject* L_4 = __this->____arNetworking_7;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_4);
		ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* L_6 = (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0*)il2cpp_codegen_object_new(ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64(L_6, __this, (intptr_t)((void*)SyncStateTrackingList_OnDidAddPeer_mF6A55D9FE698FE858FFCE504D99ECCBB0F133731_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* >::Invoke(25 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_PeerAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_5, L_6);
		// _arNetworking.Networking.PeerRemoved -= OnDidRemovePeer;
		RuntimeObject* L_7 = __this->____arNetworking_7;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_7);
		ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* L_9 = (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1(L_9, __this, (intptr_t)((void*)SyncStateTrackingList_OnDidRemovePeer_mB3E11BAEF179E47DA4D3AB0489A4242E675BD243_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* >::Invoke(27 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_PeerRemoved(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_8, L_9);
		// _arNetworking.Networking.Disconnected -= OnWillDisconnect;
		RuntimeObject* L_10 = __this->____arNetworking_7;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_10);
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_12 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_12, __this, (intptr_t)((void*)SyncStateTrackingList_OnWillDisconnect_m6F0BC882425283A01557701D39DE622D1D253C00_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(21 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_11, L_12);
		// _arNetworking.Networking.Deinitialized -= OnWillDeinitialize;
		RuntimeObject* L_13 = __this->____arNetworking_7;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.AR.Networking.IARNetworking::get_Networking() */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_13);
		ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* L_15 = (ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF*)il2cpp_codegen_object_new(ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ArdkEventHandler_1__ctor_mDE16F0ADC31F58EA85D854D2E7333491E8BF5C55(L_15, __this, (intptr_t)((void*)SyncStateTrackingList_OnWillDeinitialize_mF2DC27918883E31E4462355689350839B979D256_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< ArdkEventHandler_1_t9E2C98658F91EF5DEA15CF24DA8D8D22E8D5A5AF* >::Invoke(31 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::remove_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DeinitializedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_14, L_15);
		// _arNetworking = null;
		__this->____arNetworking_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arNetworking_7), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::OnDidConnect(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_OnDidConnect_mA25A9E0C0FAE4F7788A793EBCDDC7885F99C2A4A (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF ___args0, const RuntimeMethod* method) 
{
	{
		// CreateTracker(args.Self);
		RuntimeObject* L_0;
		L_0 = ConnectedArgs_get_Self_m19392C6C88B37599DB1F5C621DFC859FADB5E413_inline((&___args0), NULL);
		SyncStateTrackingList_CreateTracker_m29053123D87BE7DB6DD7337397F2863F42B4044B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::OnDidAddPeer(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_OnDidAddPeer_mF6A55D9FE698FE858FFCE504D99ECCBB0F133731 (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43 ___args0, const RuntimeMethod* method) 
{
	{
		// CreateTracker(args.Peer);
		RuntimeObject* L_0;
		L_0 = PeerAddedArgs_get_Peer_mF04D06FAC3F681FA7E4EEA53D4727E1D4A20ACAC_inline((&___args0), NULL);
		SyncStateTrackingList_CreateTracker_m29053123D87BE7DB6DD7337397F2863F42B4044B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::OnDidRemovePeer(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_OnDidRemovePeer_mB3E11BAEF179E47DA4D3AB0489A4242E675BD243 (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mBFE0C6B47348CBD2372EF814713F289CA527B4E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mABF93ED22D782CC4C6FD2CF852CA2885E1A1C110_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var trackerObj = _peerTrackerDict[args.Peer];
		Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* L_0 = __this->____peerTrackerDict_6;
		RuntimeObject* L_1;
		L_1 = PeerRemovedArgs_get_Peer_mCC879C96B5FE8067214B3CBCA0271F75B2C9F5C1_inline((&___args0), NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Dictionary_2_get_Item_mABF93ED22D782CC4C6FD2CF852CA2885E1A1C110(L_0, L_1, Dictionary_2_get_Item_mABF93ED22D782CC4C6FD2CF852CA2885E1A1C110_RuntimeMethod_var);
		// _peerTrackerDict.Remove(args.Peer);
		Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* L_3 = __this->____peerTrackerDict_6;
		RuntimeObject* L_4;
		L_4 = PeerRemovedArgs_get_Peer_mCC879C96B5FE8067214B3CBCA0271F75B2C9F5C1_inline((&___args0), NULL);
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_mBFE0C6B47348CBD2372EF814713F289CA527B4E4(L_3, L_4, Dictionary_2_Remove_mBFE0C6B47348CBD2372EF814713F289CA527B4E4_RuntimeMethod_var);
		// Destroy(trackerObj);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::OnWillDisconnect(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_OnWillDisconnect_m6F0BC882425283A01557701D39DE622D1D253C00 (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 ___args0, const RuntimeMethod* method) 
{
	{
		// ClearTrackers();
		SyncStateTrackingList_ClearTrackers_m957F11D0E73F939031FA7635B508F27F140AD446(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::CreateTracker(Niantic.ARDK.Networking.IPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_CreateTracker_m29053123D87BE7DB6DD7337397F2863F42B4044B (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, RuntimeObject* ___peer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFA6AA78FA3FE3DEAAD16B7FAA1BF2C3A0CB0B348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisSyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269_mD4B075FDA35605597EA8AE6567C5E29B297AAD66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* V_0 = NULL;
	{
		// var trackerObj = Instantiate(_peerTrackerPrefab, Vector3.zero, Quaternion.identity);
		SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* L_0 = __this->____peerTrackerPrefab_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* L_3;
		L_3 = Object_Instantiate_TisSyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269_mD4B075FDA35605597EA8AE6567C5E29B297AAD66(L_0, L_1, L_2, Object_Instantiate_TisSyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269_mD4B075FDA35605597EA8AE6567C5E29B297AAD66_RuntimeMethod_var);
		V_0 = L_3;
		// trackerObj.SetupToTrackPeer(peer);
		SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* L_4 = V_0;
		RuntimeObject* L_5 = ___peer0;
		NullCheck(L_4);
		SyncStateTrackedPeer_SetupToTrackPeer_mD02166AC443483E3F707B4EDA0143F46E994E004(L_4, L_5, NULL);
		// trackerObj.transform.SetParent(_peerTrackers.transform, false);
		SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* L_8 = __this->____peerTrackers_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_7);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_7, L_9, (bool)0, NULL);
		// _peerTrackerDict.Add(peer, trackerObj.gameObject);
		Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* L_10 = __this->____peerTrackerDict_6;
		RuntimeObject* L_11 = ___peer0;
		SyncStateTrackedPeer_t480E82A3C928F102B05920356AAAE2B4BD58A269* L_12 = V_0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_10);
		Dictionary_2_Add_mFA6AA78FA3FE3DEAAD16B7FAA1BF2C3A0CB0B348(L_10, L_11, L_13, Dictionary_2_Add_mFA6AA78FA3FE3DEAAD16B7FAA1BF2C3A0CB0B348_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::ClearTrackers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList_ClearTrackers_m957F11D0E73F939031FA7635B508F27F140AD446 (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m01F82648B3DECE1E62A17B97A8CD9551DD21146C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mC41C973E6E5FE7C23FB097D45F0C73373D593865_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA029D30C47CBBD66A13AB96CDA2ABA0731D8E27A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4CF658DC59B6FF64AC4F377562ECADC1A55CD020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDC92C898FA2AF05EB4D723314738FEE79DB0EE26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m659498839F19E5F20B37BCDA6EA751EF74445788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t510EC00766B9414A0E16250124C9A3B3AD48135E V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2F01DDB2538FFD4A46ED65779F00DFC868C43A98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (var entry in _peerTrackerDict)
		Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* L_0 = __this->____peerTrackerDict_6;
		NullCheck(L_0);
		Enumerator_t510EC00766B9414A0E16250124C9A3B3AD48135E L_1;
		L_1 = Dictionary_2_GetEnumerator_mC41C973E6E5FE7C23FB097D45F0C73373D593865(L_0, Dictionary_2_GetEnumerator_mC41C973E6E5FE7C23FB097D45F0C73373D593865_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA029D30C47CBBD66A13AB96CDA2ABA0731D8E27A((&V_0), Enumerator_Dispose_mA029D30C47CBBD66A13AB96CDA2ABA0731D8E27A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_000e_1:
			{
				// foreach (var entry in _peerTrackerDict)
				KeyValuePair_2_t2F01DDB2538FFD4A46ED65779F00DFC868C43A98 L_2;
				L_2 = Enumerator_get_Current_mDC92C898FA2AF05EB4D723314738FEE79DB0EE26_inline((&V_0), Enumerator_get_Current_mDC92C898FA2AF05EB4D723314738FEE79DB0EE26_RuntimeMethod_var);
				V_1 = L_2;
				// Destroy(entry.Value);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = KeyValuePair_2_get_Value_m659498839F19E5F20B37BCDA6EA751EF74445788_inline((&V_1), KeyValuePair_2_get_Value_m659498839F19E5F20B37BCDA6EA751EF74445788_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
			}

IL_0022_1:
			{
				// foreach (var entry in _peerTrackerDict)
				bool L_4;
				L_4 = Enumerator_MoveNext_m4CF658DC59B6FF64AC4F377562ECADC1A55CD020((&V_0), Enumerator_MoveNext_m4CF658DC59B6FF64AC4F377562ECADC1A55CD020_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// _peerTrackerDict.Clear();
		Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* L_5 = __this->____peerTrackerDict_6;
		NullCheck(L_5);
		Dictionary_2_Clear_m01F82648B3DECE1E62A17B97A8CD9551DD21146C(L_5, Dictionary_2_Clear_m01F82648B3DECE1E62A17B97A8CD9551DD21146C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.SyncStateTrackingList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncStateTrackingList__ctor_mC4FF850441EF40A93A3875A39148275473457288 (SyncStateTrackingList_t2DF7852B1F6A8D585FFC4CBC2208E9AEF5825C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m00580A36D2665566EE3BCAE4B5A2C45B44A4C0D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<IPeer, GameObject> _peerTrackerDict =
		//   new Dictionary<IPeer, GameObject>();
		Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624* L_0 = (Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624*)il2cpp_codegen_object_new(Dictionary_2_t0DA230FCFB6F790B819254A3CF0B209D9EE96624_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m00580A36D2665566EE3BCAE4B5A2C45B44A4C0D5(L_0, Dictionary_2__ctor_m00580A36D2665566EE3BCAE4B5A2C45B44A4C0D5_RuntimeMethod_var);
		__this->____peerTrackerDict_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____peerTrackerDict_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Niantic.ARDKExamples.Helpers.ScrollingLog::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingLog_Awake_m3611395D1F315A918A01631CEA6162B1F27933A2 (ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScrollingLog_AddLogEntry_m47CB2676F6528E7CC6A4DEB28D504D7265A4FE38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_StaticFields*)il2cpp_codegen_static_fields_for(ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_il2cpp_TypeInfo_var))->____instance_9 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_StaticFields*)il2cpp_codegen_static_fields_for(ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_il2cpp_TypeInfo_var))->____instance_9), (void*)__this);
		// Application.logMessageReceived += AddLogEntry;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)ScrollingLog_AddLogEntry_m47CB2676F6528E7CC6A4DEB28D504D7265A4FE38_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ScrollingLog::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingLog_Start_mC5F2291631B02D97DD8148E735D51D8E2B7FDA80 (ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0* __this, const RuntimeMethod* method) 
{
	{
		// LogHistory.spacing = LogEntryFontSize / 2f;
		VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* L_0 = __this->___LogHistory_6;
		int32_t L_1 = __this->___LogEntryFontSize_4;
		NullCheck(L_0);
		HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859(L_0, ((float)(((float)L_1)/(2.0f))), NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ScrollingLog::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingLog_OnDestroy_m63F09D415A859403054228B261E4E76CED7BF6C6 (ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScrollingLog_AddLogEntry_m47CB2676F6528E7CC6A4DEB28D504D7265A4FE38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = null;
		((ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_StaticFields*)il2cpp_codegen_static_fields_for(ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_il2cpp_TypeInfo_var))->____instance_9 = (ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_StaticFields*)il2cpp_codegen_static_fields_for(ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_il2cpp_TypeInfo_var))->____instance_9), (void*)(ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0*)NULL);
		// Application.logMessageReceived -= AddLogEntry;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)ScrollingLog_AddLogEntry_m47CB2676F6528E7CC6A4DEB28D504D7265A4FE38_RuntimeMethod_var), NULL);
		Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ScrollingLog::AddLogEntry(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingLog_AddLogEntry_m47CB2676F6528E7CC6A4DEB28D504D7265A4FE38 (ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0* __this, String_t* ___str0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m8806B25243D00C26A0C3F6E6AC1BD1D91F9CEE85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1E764F119DDC62D8B86C24186CBA7A268E9D3092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mBB19FEE8DC3EEC1E65B95C582AD1266813F107DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m451B44D19BA4256832D8B46E419A6176263901A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mE1084A9A28525FEA3D226B69D85184B4548C411A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_0 = NULL;
	{
		// var newLogEntry = Instantiate(LogEntryPrefab, Vector3.zero, Quaternion.identity);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___LogEntryPrefab_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3;
		L_3 = Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mE1084A9A28525FEA3D226B69D85184B4548C411A(L_0, L_1, L_2, Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mE1084A9A28525FEA3D226B69D85184B4548C411A_RuntimeMethod_var);
		V_0 = L_3;
		// newLogEntry.text = str;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = V_0;
		String_t* L_5 = ___str0;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// newLogEntry.fontSize = LogEntryFontSize;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = V_0;
		int32_t L_7 = __this->___LogEntryFontSize_4;
		NullCheck(L_6);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_6, L_7, NULL);
		// var transform = newLogEntry.transform;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		// transform.SetParent(LogHistory.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9;
		VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* L_11 = __this->___LogHistory_6;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_10);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_10, L_12, NULL);
		// transform.localScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_13, NULL);
		// _logEntries.Add(newLogEntry);
		List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* L_14 = __this->____logEntries_8;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = V_0;
		NullCheck(L_14);
		List_1_Add_m1E764F119DDC62D8B86C24186CBA7A268E9D3092_inline(L_14, L_15, List_1_Add_m1E764F119DDC62D8B86C24186CBA7A268E9D3092_RuntimeMethod_var);
		// if (MaxLogCount > 0 && _logEntries.Count > MaxLogCount)
		int32_t L_16 = __this->___MaxLogCount_5;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* L_17 = __this->____logEntries_8;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m451B44D19BA4256832D8B46E419A6176263901A4_inline(L_17, List_1_get_Count_m451B44D19BA4256832D8B46E419A6176263901A4_RuntimeMethod_var);
		int32_t L_19 = __this->___MaxLogCount_5;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_0093;
		}
	}
	{
		// var textObj = _logEntries.First();
		List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* L_20 = __this->____logEntries_8;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21;
		L_21 = Enumerable_First_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m8806B25243D00C26A0C3F6E6AC1BD1D91F9CEE85(L_20, Enumerable_First_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m8806B25243D00C26A0C3F6E6AC1BD1D91F9CEE85_RuntimeMethod_var);
		// _logEntries.RemoveAt(0);
		List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* L_22 = __this->____logEntries_8;
		NullCheck(L_22);
		List_1_RemoveAt_mBB19FEE8DC3EEC1E65B95C582AD1266813F107DA(L_22, 0, List_1_RemoveAt_mBB19FEE8DC3EEC1E65B95C582AD1266813F107DA_RuntimeMethod_var);
		// Destroy(textObj.gameObject);
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_23, NULL);
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ScrollingLog::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingLog_Clear_m3199CC18D86B82D4BFCD8D0E0B7A90942CFF0019 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA562D157FF14878146E3ECEF1DF11F7383F0FAD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBBE56CBC8530028C06050F2F7081AE7D0709745C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3FBB45A9D466C2F3DCB30B5122BF671B5A999591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m35DEE0ED5A4C6EA2F023040F235C76C450A20D92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m730305C78BA56FA3A3D5C465AC4930D1B9CAAAF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBDE8A591E834C7B4748BA5ABD2CA972CF8AC5BC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_instance == null)
		ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0* L_0 = ((ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_StaticFields*)il2cpp_codegen_static_fields_for(ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_il2cpp_TypeInfo_var))->____instance_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// foreach (var entry in _instance._logEntries)
		ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0* L_2 = ((ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_StaticFields*)il2cpp_codegen_static_fields_for(ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_il2cpp_TypeInfo_var))->____instance_9;
		NullCheck(L_2);
		List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* L_3 = L_2->____logEntries_8;
		NullCheck(L_3);
		Enumerator_tBDE8A591E834C7B4748BA5ABD2CA972CF8AC5BC7 L_4;
		L_4 = List_1_GetEnumerator_m730305C78BA56FA3A3D5C465AC4930D1B9CAAAF1(L_3, List_1_GetEnumerator_m730305C78BA56FA3A3D5C465AC4930D1B9CAAAF1_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA562D157FF14878146E3ECEF1DF11F7383F0FAD8((&V_0), Enumerator_Dispose_mA562D157FF14878146E3ECEF1DF11F7383F0FAD8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0031_1;
			}

IL_0020_1:
			{
				// foreach (var entry in _instance._logEntries)
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
				L_5 = Enumerator_get_Current_m3FBB45A9D466C2F3DCB30B5122BF671B5A999591_inline((&V_0), Enumerator_get_Current_m3FBB45A9D466C2F3DCB30B5122BF671B5A999591_RuntimeMethod_var);
				// Destroy(entry.gameObject);
				NullCheck(L_5);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
				L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
			}

IL_0031_1:
			{
				// foreach (var entry in _instance._logEntries)
				bool L_7;
				L_7 = Enumerator_MoveNext_mBBE56CBC8530028C06050F2F7081AE7D0709745C((&V_0), Enumerator_MoveNext_mBBE56CBC8530028C06050F2F7081AE7D0709745C_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// _instance._logEntries.Clear();
		ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0* L_8 = ((ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_StaticFields*)il2cpp_codegen_static_fields_for(ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0_il2cpp_TypeInfo_var))->____instance_9;
		NullCheck(L_8);
		List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* L_9 = L_8->____logEntries_8;
		NullCheck(L_9);
		List_1_Clear_m35DEE0ED5A4C6EA2F023040F235C76C450A20D92_inline(L_9, List_1_Clear_m35DEE0ED5A4C6EA2F023040F235C76C450A20D92_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ScrollingLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingLog__ctor_mC19EBA1C866DCE7CE167426E98BA4E2A2F9648C9 (ScrollingLog_t9015254AF17872349A8CC1B3AD833033EF834FE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA63E5569B679BD015D3EEB541EE5D99158BF400E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int LogEntryFontSize = 32;
		__this->___LogEntryFontSize_4 = ((int32_t)32);
		// private int MaxLogCount = -1;
		__this->___MaxLogCount_5 = (-1);
		// private readonly List<Text> _logEntries = new List<Text>();
		List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* L_0 = (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48*)il2cpp_codegen_object_new(List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA63E5569B679BD015D3EEB541EE5D99158BF400E(L_0, List_1__ctor_mA63E5569B679BD015D3EEB541EE5D99158BF400E_RuntimeMethod_var);
		__this->____logEntries_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____logEntries_8), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Niantic.ARDKExamples.Helpers.ARCursorRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursorRenderer_Start_mA020AD51BFD21369B6897BAF1A984C8B71D6FB0B (ARCursorRenderer_tA570D175748C1CF829C5834B58566ADD6010DDD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCursorRenderer__SessionInitialized_m6FEA44525B67C1BD158F8771353E1F14B7525BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSessionFactory.SessionInitialized += _SessionInitialized;
		ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* L_0 = (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*)il2cpp_codegen_object_new(ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507(L_0, __this, (intptr_t)((void*)ARCursorRenderer__SessionInitialized_m6FEA44525B67C1BD158F8771353E1F14B7525BC2_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		ARSessionFactory_add_SessionInitialized_m718A16A7689C0CA6B674979A1419F6456A3C016D(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARCursorRenderer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursorRenderer_OnDestroy_m020E9315F5E5B2F3E6994FB9E21B7713959A1125 (ARCursorRenderer_tA570D175748C1CF829C5834B58566ADD6010DDD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCursorRenderer__FrameUpdated_m37187EBEE1189D5D2D220EB28F93184558121E97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCursorRenderer__SessionInitialized_m6FEA44525B67C1BD158F8771353E1F14B7525BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// ARSessionFactory.SessionInitialized -= _SessionInitialized;
		ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* L_0 = (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*)il2cpp_codegen_object_new(ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507(L_0, __this, (intptr_t)((void*)ARCursorRenderer__SessionInitialized_m6FEA44525B67C1BD158F8771353E1F14B7525BC2_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		ARSessionFactory_remove_SessionInitialized_m9EAA2283AA72DBD23DA9ED4B7DD7C4325ED42740(L_0, NULL);
		// var session = _session;
		RuntimeObject* L_1 = __this->____session_7;
		V_0 = L_1;
		// if (session != null)
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// session.FrameUpdated -= _FrameUpdated;
		RuntimeObject* L_3 = V_0;
		ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7* L_4 = (ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7*)il2cpp_codegen_object_new(ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m159785A12ADB6402C70685F334C688D7B77119C1(L_4, __this, (intptr_t)((void*)ARCursorRenderer__FrameUpdated_m37187EBEE1189D5D2D220EB28F93184558121E97_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7* >::Invoke(24 /* System.Void Niantic.ARDK.AR.IARSession::remove_FrameUpdated(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_002d:
	{
		// DestroySpawnedCursor();
		ARCursorRenderer_DestroySpawnedCursor_m910B4247D9215C7492A333C872FDA07E8DC8750F(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARCursorRenderer::DestroySpawnedCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursorRenderer_DestroySpawnedCursor_m910B4247D9215C7492A333C872FDA07E8DC8750F (ARCursorRenderer_tA570D175748C1CF829C5834B58566ADD6010DDD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_spawnedCursorObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____spawnedCursorObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// Destroy(_spawnedCursorObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____spawnedCursorObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// _spawnedCursorObject = null;
		__this->____spawnedCursorObject_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____spawnedCursorObject_6), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARCursorRenderer::_SessionInitialized(Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursorRenderer__SessionInitialized_m6FEA44525B67C1BD158F8771353E1F14B7525BC2 (ARCursorRenderer_tA570D175748C1CF829C5834B58566ADD6010DDD6* __this, AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCursorRenderer__FrameUpdated_m37187EBEE1189D5D2D220EB28F93184558121E97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCursorRenderer__OnSessionDeinitialized_m5A89DCE24A296DB4E37A6077596CDC76CF7E0850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var oldSession = _session;
		RuntimeObject* L_0 = __this->____session_7;
		V_0 = L_0;
		// if (oldSession != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// oldSession.FrameUpdated -= _FrameUpdated;
		RuntimeObject* L_2 = V_0;
		ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7* L_3 = (ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7*)il2cpp_codegen_object_new(ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m159785A12ADB6402C70685F334C688D7B77119C1(L_3, __this, (intptr_t)((void*)ARCursorRenderer__FrameUpdated_m37187EBEE1189D5D2D220EB28F93184558121E97_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7* >::Invoke(24 /* System.Void Niantic.ARDK.AR.IARSession::remove_FrameUpdated(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_001c:
	{
		// var newSession = args.Session;
		RuntimeObject* L_4;
		L_4 = AnyARSessionInitializedArgs_get_Session_mE6A718E2634C4094FC47FEA581B0C40F19E19487_inline((&___args0), NULL);
		V_1 = L_4;
		// _session = newSession;
		RuntimeObject* L_5 = V_1;
		__this->____session_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____session_7), (void*)L_5);
		// newSession.FrameUpdated += _FrameUpdated;
		RuntimeObject* L_6 = V_1;
		ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7* L_7 = (ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7*)il2cpp_codegen_object_new(ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArdkEventHandler_1__ctor_m159785A12ADB6402C70685F334C688D7B77119C1(L_7, __this, (intptr_t)((void*)ARCursorRenderer__FrameUpdated_m37187EBEE1189D5D2D220EB28F93184558121E97_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< ArdkEventHandler_1_t40E765B022425EF74BDC129071F15EDAE74155F7* >::Invoke(23 /* System.Void Niantic.ARDK.AR.IARSession::add_FrameUpdated(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_6, L_7);
		// newSession.Deinitialized += _OnSessionDeinitialized;
		RuntimeObject* L_8 = V_1;
		ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3* L_9 = (ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3*)il2cpp_codegen_object_new(ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArdkEventHandler_1__ctor_m415EC7077DBE8CFB79ECD09F210F1F5012B40959(L_9, __this, (intptr_t)((void*)ARCursorRenderer__OnSessionDeinitialized_m5A89DCE24A296DB4E37A6077596CDC76CF7E0850_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< ArdkEventHandler_1_t8A69E76C984D1745A71B56D8B133803E18835BC3* >::Invoke(17 /* System.Void Niantic.ARDK.AR.IARSession::add_Deinitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionDeinitializedArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_8, L_9);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARCursorRenderer::_OnSessionDeinitialized(Niantic.ARDK.AR.ARSessionEventArgs.ARSessionDeinitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursorRenderer__OnSessionDeinitialized_m5A89DCE24A296DB4E37A6077596CDC76CF7E0850 (ARCursorRenderer_tA570D175748C1CF829C5834B58566ADD6010DDD6* __this, ARSessionDeinitializedArgs_t3380997AC55EC746D573D7C6AE35691944859A3C ___args0, const RuntimeMethod* method) 
{
	{
		// DestroySpawnedCursor();
		ARCursorRenderer_DestroySpawnedCursor_m910B4247D9215C7492A333C872FDA07E8DC8750F(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARCursorRenderer::_FrameUpdated(Niantic.ARDK.AR.ARSessionEventArgs.FrameUpdatedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursorRenderer__FrameUpdated_m37187EBEE1189D5D2D220EB28F93184558121E97 (ARCursorRenderer_tA570D175748C1CF829C5834B58566ADD6010DDD6* __this, FrameUpdatedArgs_t66A5CACBFB0914FFD132D8A7FBEC68152BDBDBA0 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARCamera_tADC495E9353B2B94AE1C1C8FF3611E1BA26D832C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARFrame_tCF4C31DB7FD454D960AF22DF95E39666B398A58B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARHitTestResult_t7C42BBC455DA5446916EED4B480FD4356DCC7215_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* V_5 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// var camera = Camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___Camera_4;
		V_0 = L_0;
		// if (camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// var viewportWidth = camera.pixelWidth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_3, NULL);
		V_1 = L_4;
		// var viewportHeight = camera.pixelHeight;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_5, NULL);
		V_2 = L_6;
		// var middle = new Vector2(viewportWidth / 2f, viewportHeight / 2f);
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), ((float)(((float)L_7)/(2.0f))), ((float)(((float)L_8)/(2.0f))), NULL);
		// var frame = args.Frame;
		RuntimeObject* L_9;
		L_9 = FrameUpdatedArgs_get_Frame_m18B39C4A874326A2970667E28C8B8699595FA4DB_inline((&___args0), NULL);
		V_4 = L_9;
		// var hitTestResults =
		//   frame.HitTest
		//   (
		//     viewportWidth,
		//     viewportHeight,
		//     middle,
		//     ARHitTestResultType.ExistingPlaneUsingExtent |
		//     ARHitTestResultType.EstimatedHorizontalPlane
		//   );
		RuntimeObject* L_10 = V_4;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_3;
		NullCheck(L_10);
		ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* L_14;
		L_14 = InterfaceFuncInvoker4< ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1*, int32_t, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(15 /* System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.HitTest.IARHitTestResult> Niantic.ARDK.AR.IARFrame::HitTest(System.Int32,System.Int32,UnityEngine.Vector2,Niantic.ARDK.AR.HitTest.ARHitTestResultType) */, IARFrame_tCF4C31DB7FD454D960AF22DF95E39666B398A58B_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13, ((int32_t)36));
		V_5 = L_14;
		// if (hitTestResults.Count == 0)
		ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* L_15 = V_5;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA(L_15, ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0057;
		}
	}
	{
		// return;
		return;
	}

IL_0057:
	{
		// if (_spawnedCursorObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->____spawnedCursorObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_0085;
		}
	}
	{
		// _spawnedCursorObject = Instantiate(CursorObject, Vector2.one, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___CursorObject_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_19, L_21, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->____spawnedCursorObject_6 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____spawnedCursorObject_6), (void*)L_23);
	}

IL_0085:
	{
		// _spawnedCursorObject.transform.position = hitTestResults[0].WorldTransform.ToPosition();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->____spawnedCursorObject_6;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* L_26 = V_5;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32(L_26, 0, ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32_RuntimeMethod_var);
		NullCheck(L_27);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28;
		L_28 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(4 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.HitTest.IARHitTestResult::get_WorldTransform() */, IARHitTestResult_t7C42BBC455DA5446916EED4B480FD4356DCC7215_il2cpp_TypeInfo_var, L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = MatrixUtils_ToPosition_mD2843F95E2F6F40B53CED436EE9C3517F6D910E5(L_28, NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_29, NULL);
		// _spawnedCursorObject.transform.LookAt
		// (
		//   new Vector3
		//   (
		//     frame.Camera.Transform[0, 3],
		//     _spawnedCursorObject.transform.position.y,
		//     frame.Camera.Transform[2, 3]
		//   )
		// );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->____spawnedCursorObject_6;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		RuntimeObject* L_32 = V_4;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8 /* Niantic.ARDK.AR.IARCamera Niantic.ARDK.AR.IARFrame::get_Camera() */, IARFrame_tCF4C31DB7FD454D960AF22DF95E39666B398A58B_il2cpp_TypeInfo_var, L_32);
		NullCheck(L_33);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_34;
		L_34 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(6 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.IARCamera::get_Transform() */, IARCamera_tADC495E9353B2B94AE1C1C8FF3611E1BA26D832C_il2cpp_TypeInfo_var, L_33);
		V_6 = L_34;
		float L_35;
		L_35 = Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline((&V_6), 0, 3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->____spawnedCursorObject_6;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___y_3;
		RuntimeObject* L_40 = V_4;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8 /* Niantic.ARDK.AR.IARCamera Niantic.ARDK.AR.IARFrame::get_Camera() */, IARFrame_tCF4C31DB7FD454D960AF22DF95E39666B398A58B_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_42;
		L_42 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(6 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.IARCamera::get_Transform() */, IARCamera_tADC495E9353B2B94AE1C1C8FF3611E1BA26D832C_il2cpp_TypeInfo_var, L_41);
		V_6 = L_42;
		float L_43;
		L_43 = Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline((&V_6), 2, 3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_44), L_35, L_39, L_43, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_31, L_44, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Helpers.ARCursorRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursorRenderer__ctor_m1AFAF8312612DE9A0FDA8F98A00914C07DB39102 (ARCursorRenderer_tA570D175748C1CF829C5834B58566ADD6010DDD6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Niantic.ARDKExamples.Common.Helpers.ARAnchorAttachment::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARAnchorAttachment_LateUpdate_m5CD03A888174D9B0CC8AEFEB97A5043495AEDEF4 (ARAnchorAttachment_t35EA0933842F1CE4D0FA4511A3269B982FA8B85B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARAnchor_t66754F240328EA56C08215F9B99AE69E96A70440_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (AttachedAnchor != null)
		RuntimeObject* L_0 = __this->___AttachedAnchor_4;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// Matrix4x4 combinedTransform = AttachedAnchor.Transform * Offset;
		RuntimeObject* L_1 = __this->___AttachedAnchor_4;
		NullCheck(L_1);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(0 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.Anchors.IARAnchor::get_Transform() */, IARAnchor_t66754F240328EA56C08215F9B99AE69E96A70440_il2cpp_TypeInfo_var, L_1);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = __this->___Offset_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_2, L_3, NULL);
		V_0 = L_4;
		// transform.position = combinedTransform.ToPosition();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = MatrixUtils_ToPosition_mD2843F95E2F6F40B53CED436EE9C3517F6D910E5(L_6, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_7, NULL);
		// transform.rotation = combinedTransform.ToRotation();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = MatrixUtils_ToRotation_m5FBB81927C6D824ADCE1F44E5C26A058B00FBAE6(L_9, NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_10, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.Common.Helpers.ARAnchorAttachment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARAnchorAttachment__ctor_m6B346A83339B836A5E9BF37A093C058A0DA0FD57 (ARAnchorAttachment_t35EA0933842F1CE4D0FA4511A3269B982FA8B85B* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix4x4 Offset = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___Offset_5 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t PeerDataReceivedArgs_get_Tag_m40BCD818739E964C1B6D0BC363D44A77155E9962_inline (PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514* __this, const RuntimeMethod* method) 
{
	{
		// public uint Tag { get; private set; }
		uint32_t L_0 = __this->___U3CTagU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* MarkerSyncSessionManager_get_BarcodeDisplay_m0AAD96722DCF888357FC59A3C91F285D15CE62DD_inline (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	{
		// get { return _barcodeDisplay; }
		BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* L_0 = __this->____barcodeDisplay_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MarkerSyncSessionManager_get_ARSession_mE6DD1D310FB8230BCCD64D777785DA97737CA861_inline (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	{
		// public IARSession ARSession { get; private set; }
		RuntimeObject* L_0 = __this->___U3CARSessionU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MarkerSyncSessionManager_get_ARNetworking_mB89893750D0AC7E620D3B3A9E4C576AEEA3B4682_inline (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, const RuntimeMethod* method) 
{
	{
		// public IARNetworking ARNetworking { get; private set; }
		RuntimeObject* L_0 = __this->___U3CARNetworkingU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E* AnchorsArgs_get_Anchors_m670480D11A18849B6706476AB843002E4A503177_inline (AnchorsArgs_t58711712713F460F8E05B14E958C48A51D111209* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyCollection<IARAnchor> Anchors { get; }
		ReadOnlyCollection_1_t4B45C44865049D52AEE3AF86F274332518D9EE1E* L_0 = __this->___U3CAnchorsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MarkerGenerationResult_get_EncodedText_mF4C5D06956999DDACEFB3822062E3995D7139D21_inline (MarkerGenerationResult_t048FE5A946C2CC7D9DBE03878F3556A34A3494E0* __this, const RuntimeMethod* method) 
{
	{
		// public string EncodedText { get; private set; }
		String_t* L_0 = __this->___U3CEncodedTextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BarcodeDisplay_get_Center_m668EDEEF2DA8367FCF26B24AD68C2B89A3B93AC1_inline (BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Center { get; private set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CCenterU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* BarcodeDisplay_get_Points_m1BEFCDAFE68CB4B20B9868B8E6DB2D35E0BA2301_inline (BarcodeDisplay_t1BFD31C646E1718318A95EFD90A354EDBFC628AE* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2[] Points { get; private set; }
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = __this->___U3CPointsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_set_ARSession_m6C985BD7774D91290A17531658940AB3CC68395B_inline (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IARSession ARSession { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CARSessionU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CARSessionU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkerSyncSessionManager_set_ARNetworking_m3B0F41304BAB944A571A1CE3F0DADE7725303C00_inline (MarkerSyncSessionManager_tD34CAB97C0EAF1EFE982F11BC25FB7E187F9E88F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IARNetworking ARNetworking { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CARNetworkingU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CARNetworkingU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnyARSessionInitializedArgs_get_Session_mE6A718E2634C4094FC47FEA581B0C40F19E19487_inline (AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E* __this, const RuntimeMethod* method) 
{
	{
		// public IARSession Session { get; }
		RuntimeObject* L_0 = __this->___U3CSessionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectedArgs_get_Self_m19392C6C88B37599DB1F5C621DFC859FADB5E413_inline (ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF* __this, const RuntimeMethod* method) 
{
	{
		// public IPeer Self { get; private set; }
		RuntimeObject* L_0 = __this->___U3CSelfU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectedArgs_get_Host_m4EAEECDB6477203479B2C4836522486E7CAE4DF7_inline (ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF* __this, const RuntimeMethod* method) 
{
	{
		// public IPeer Host { get; private set; }
		RuntimeObject* L_0 = __this->___U3CHostU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerAddedArgs_get_Peer_mF04D06FAC3F681FA7E4EEA53D4727E1D4A20ACAC_inline (PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43* __this, const RuntimeMethod* method) 
{
	{
		// public IPeer Peer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerRemovedArgs_get_Peer_mCC879C96B5FE8067214B3CBCA0271F75B2C9F5C1_inline (PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF* __this, const RuntimeMethod* method) 
{
	{
		// public IPeer Peer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConnectionFailedArgs_get_ErrorCode_m4D026D356ACA27B5048F3416EBBF5C7B12A791DC_inline (ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC* __this, const RuntimeMethod* method) 
{
	{
		// public uint ErrorCode { get; private set; }
		uint32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnyARNetworkingInitializedArgs_get_ARNetworking_mA3D197FB19EA656CD4D79A0E9AAFB299FDFFC135_inline (AnyARNetworkingInitializedArgs_tE7DFF4BAAA921B3B4CB96D9996A255A660491BC5* __this, const RuntimeMethod* method) 
{
	{
		// public IARNetworking ARNetworking { get; private set; }
		RuntimeObject* L_0 = __this->___U3CARNetworkingU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerPoseReceivedArgs_get_Peer_m60556CB1C66274B6DDD1695158D1BC4FF6B3A38B_inline (PeerPoseReceivedArgs_t3EFA40B68DEFDEABBD5132C9AC75A98E0B6AC083* __this, const RuntimeMethod* method) 
{
	{
		// public IPeer Peer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 PeerPoseReceivedArgs_get_Pose_mC23DE4C703C3971420E753D9CBCD62E9AE9DA355_inline (PeerPoseReceivedArgs_t3EFA40B68DEFDEABBD5132C9AC75A98E0B6AC083* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix4x4 Pose { get; private set; }
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___U3CPoseU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerDataReceivedArgs_get_Peer_m21DB039DBB081D1E4C57ED6AFC8186B425DE8695_inline (PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514* __this, const RuntimeMethod* method) 
{
	{
		// public IPeer Peer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PeerDataReceivedArgs_get_TransportType_mE0AA4B1250C7F03911FE172AA85F0AAA88E8BC54_inline (PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514* __this, const RuntimeMethod* method) 
{
	{
		// public TransportType TransportType { get; private set; }
		uint8_t L_0 = __this->___U3CTransportTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// public EndEditEvent onEndEdit { get { return m_OnDidEndEdit; } set { SetPropertyUtility.SetClass(ref m_OnDidEndEdit, value); } }
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_0 = __this->___m_OnDidEndEdit_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Interactable; }
		bool L_0 = __this->___m_Interactable_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerStateReceivedArgs_get_Peer_mE8CD905A84120698BDEB7B43E4410AA1050C0008_inline (PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D* __this, const RuntimeMethod* method) 
{
	{
		// public IPeer Peer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline (PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D* __this, const RuntimeMethod* method) 
{
	{
		// public PeerState State { get; private set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FrameUpdatedArgs_get_Frame_m18B39C4A874326A2970667E28C8B8699595FA4DB_inline (FrameUpdatedArgs_t66A5CACBFB0914FFD132D8A7FBEC68152BDBDBA0* __this, const RuntimeMethod* method) 
{
	{
		// public IARFrame Frame { get; private set; }
		RuntimeObject* L_0 = __this->___U3CFrameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___column1;
		float L_2;
		L_2 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A(__this, ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, 4)))), NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
