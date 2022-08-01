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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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

// Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample
struct GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A;
// Microsoft.MixedReality.Toolkit.Examples.RotateWithPan
struct RotateWithPan_tD4BF5617C89F3B3C1614935734971A5440494686;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample
struct BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.CustomDwellHandler
struct CustomDwellHandler_tC3D6CECDBC3171DFEEFC7BF9FE6FF990B83F46CC;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler
struct DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler[]
struct DwellHandlerU5BU5D_t1B8F56F7EBF8B6A7EDFAB0B964F54C01CDAB170F;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile
struct DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay
struct DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellUnityEvent
struct DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.InstantDwellSample
struct InstantDwellSample_t6CD5706E7E273384C994AA8980F519E70C440D30;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.ListItemDwell
struct ListItemDwell_t4A8DD4AEA1AB25990A032042C4C6AA04AA89EF2A;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample
struct ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188;
// Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController
struct JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4;
// Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController[]
struct JoystickControllerU5BU5D_t1030675CFD85A2DE4BD3F39CCC2FBE00F292B0E7;
// Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders
struct JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813;
// Microsoft.MixedReality.Toolkit.Experimental.SurfacePulse.HideOnDevice
struct HideOnDevice_tAA8B26FBB296C8E9D6E223616395BD5CF7E6E034;
// Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider
struct AxisSlider_t4B508D589FD86E46D3CE606CC43C12AE58E927FD;
// Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardTest
struct KeyboardTest_tBD60D1BE6455A0A4A9C07AD079A7496BB93B93E8;
// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard
struct NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A;
// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_t22545DD1196AA39351413C3E71A83E68722814F6;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t5D4894D493ABF6D8814BCA535C5ABDC9AD3CCE79;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationSystem
struct IMixedRealityDictationSystem_t12379135B8D6D1CB30AA5EB4527A274AC33A0D2A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t29641CFFA5034271C0EA7A76D9DAD51FDDA88091;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t320178B18845E44EDD71982B48EF22C2E7C023FE;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t89864BBA5E54327F758CE7579CAAE614F5AA8B3A;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t081849D32B71D6F09C07B3F13DCB927CFB143E1F;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t0249906C6D032CEE3813326ED398A1081C3DAA20;
// Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom
struct HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E;
// Microsoft.MixedReality.Toolkit.UI.HandPanEventData
struct HandPanEventData_tD05B4ABADBD43876B4F63600C138606362F86E4A;
// Microsoft.MixedReality.Toolkit.UI.PanUnityEvent
struct PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29;
// Microsoft.MixedReality.Toolkit.UI.PinchSlider
struct PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999;
// Microsoft.MixedReality.Toolkit.UI.SliderEvent
struct SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0;
// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc>
struct Action_1_tF76DF283FF9FFFE71029D3671968356C526C3A8E;
// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey>
struct Action_1_t1E00EC8B4CC4A3B70AF03A34346EC09BC6D988EA;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F;
// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom/HandPanData>
struct Dictionary_2_t29AD4F6F068EA5B4E17B8989CEF3A2F9C3F3B636;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct List_1_tD30D1EA6B84519E566D4E7728D8BA2E127947D27;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Decimal[]
struct DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t974D5AB2327337E73FB2126366C9513F1C075512;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tABE518DC1E2361D29583B0048AF69206C12C9E1C;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652;
// TMPro.TMP_Character
struct TMP_Character_t1875AACA978396521498D6A699052C187903553D;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_InputField
struct TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_t1610FEF044826EE0837528C1E90FCDFC45B3D7AD;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tF41EB6E5E2B26213D1C0CE6573498CA6ACB3CA1F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487;
// TMPro.TMP_Style
struct TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t1847E144072AA6E3FEB91A5E855C564CE48448FD;
// TMPro.TMP_Text
struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505;
// TMPro.TMP_TextElement
struct TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29;
// TMPro.TextMeshPro
struct TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.HandPanEventData>
struct UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.HandPanEventData>
struct UnityEvent_1_tB2E51AD9E9B73DA5CA9C83BBF4317DBD8AA16C59;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral314CD1C72B3CA3AD0B1C14114D2D635596FAAA4F;
IL2CPP_EXTERN_C String_t* _stringLiteral96D450D420443D8A95FD34157912EDEA6CFA77A4;
IL2CPP_EXTERN_C String_t* _stringLiteralE0049A66519CAE71159800BB77A35007BC2D76D3;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DE5AB0CA4C69DBF00E86D2558843E8D806BB49;
IL2CPP_EXTERN_C String_t* _stringLiteralF4515C3A5EEB342370A28F8DA5D38E60F77F8107;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_m0AA5E7ECD7DAF01C6F2B9D2265DBA839BE0DE657_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisHandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E_mB5EDF31DE7B88AC1C807EC35F1179B26156A05F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_mBFEBB0136898336ABE21E1C36FA2081D8B8F5710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB_m9F5493645F33D9F758799CDFACAF1658443029EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_m0AAB87D3A9FC161DA888BBCD96EEA93816229D86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyboardTest_DisableKeyboard_mA03CE49C7B686DCCE5120D607E42DD5F5D17B3A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyboardTest_UpdateText_m3AF9F7D94C45FC6C701B2B7F34A4FCEB253821DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_mB32BE35140590532CD2B875CD5C3D123B960E304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RotateWithPan_OnPanEnded_m6A0B685373FDE33B0CC5EF3138FDF227596F3EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RotateWithPan_OnPanStarted_m572D3295CCAC4E6F4373FDB5844B44AA42E89633_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RotateWithPan_OnPanning_m58F1D02C84BF5038A6DAB07CAFF31E96A6AF790F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m025DA402B0E8AE860888ADEE0418E0E26D66EAE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m5DA09D919855795688195C560923475806AF8A0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BaseDwellSample_Awake_m736EE74EF17D89CB956DB3B6D5F6C019747C111B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseDwellSample_DwellCompleted_mD616D46BA9B05C3490CC72AD3B03FC02411B0828_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CustomDwellHandler_UpdateFillTimer_m0873895A8061FACCDE5EDAD54C400CD7AD0D9B15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GrabTouchExample_Awake_m1A3819B4BAC396B03D6CAB3FED3DB14823A90EFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GrabTouchExample_OnInputDown_m7A4FD972CCDD6D26E372EF33DC95B518EF6F2C32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GrabTouchExample_OnInputUp_m91C9509CD3E9F55204DC78482B5BAA8BABA51CA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GrabTouchExample_OnTouchCompleted_mB104737326C25BF33992CC4787E1CA84FD27D709_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GrabTouchExample_OnTouchStarted_m0F165D663FB3540EC872DD6B2C2803C85692515B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GrabTouchExample__ctor_m2D26A97648EC75A20666EE59F284CE39E13514A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InstantDwellSample_ButtonExecute_m778835FCDABA79F83AC3D24E6BDBA9FA0DDEB3A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InstantDwellSample_DwellCompleted_m086EE0CBEDBE8C8ED5A59081AFD2467A3509C855_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KeyboardTest_DisableKeyboard_mA03CE49C7B686DCCE5120D607E42DD5F5D17B3A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KeyboardTest_OnPointerDown_mC0CD375596728B577FBEA6383F9F399E65EE1317_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KeyboardTest_UpdateText_m3AF9F7D94C45FC6C701B2B7F34A4FCEB253821DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListItemDwell_Awake_mF753E434BCBB477C059F3B494A7E2DDACC6FCA41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListItemDwell_ButtonExecute_m32876E6A08B76622860699E32B9CB959E78BAA0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityInputAction_get_None_mFCF5467E10262F79CB726599477FC8CE7EDFEEBEMicrosoft_MixedReality_Toolkit_Examples2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RotateWithPan_OnDisable_mDC415FA6C490C2FA275D0A2C01F211AF67B43C28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RotateWithPan_OnEnable_mE95228E03D009F90C8696109536E32DD3D9B5140_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RotateWithPan_OnPanEnded_m6A0B685373FDE33B0CC5EF3138FDF227596F3EBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RotateWithPan_OnPanStarted_m572D3295CCAC4E6F4373FDB5844B44AA42E89633_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RotateWithPan_OnPanning_m58F1D02C84BF5038A6DAB07CAFF31E96A6AF790F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToggleDwellSample_ButtonExecute_m79BFBC3240C3FCDFD91B31D3E12B2B25F690774F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToggleDwellSample_DwellCompleted_mF76AC1CD06DBC976EA4259AEF9FCA5860508D768_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToggleDwellSample_DwellIntended_mC6DE809437CC8CEA4F15108E9D90726461F153F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToggleDwellSample_Update_m625351CC69E1001C367FEE89D4CC145B1B123889_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DwellHandlerU5BU5D_t1B8F56F7EBF8B6A7EDFAB0B964F54C01CDAB170F;
struct JoystickControllerU5BU5D_t1030675CFD85A2DE4BD3F39CCC2FBE00F292B0E7;
struct TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// TMPro.MaterialReference
struct  MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_3() const { return ___material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fallbackMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct  TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// TMPro.TMP_Text_SpecialCharacter
struct  SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text_SpecialCharacter::character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text_SpecialCharacter::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text_SpecialCharacter::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	// System.Int32 TMPro.TMP_Text_SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___character_0)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_character_0() const { return ___character_0; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___material_2)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_2() const { return ___material_2; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshaled_pinvoke
{
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshaled_com
{
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct  TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___itemStack_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct  TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___itemStack_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct  TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.HandPanEventData>
struct  UnityEvent_1_tB2E51AD9E9B73DA5CA9C83BBF4317DBD8AA16C59  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB2E51AD9E9B73DA5CA9C83BBF4317DBD8AA16C59, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler_DwellStateType
struct  DwellStateType_tBF64C20011ADEAD7F96354126260381DD9AF71FA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler_DwellStateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DwellStateType_tBF64C20011ADEAD7F96354126260381DD9AF71FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickMode
struct  JoystickMode_t62DB084FF0D17DF6788490C9B4C1DA5F006FB7F3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoystickMode_t62DB084FF0D17DF6788490C9B4C1DA5F006FB7F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard_LayoutType
struct  LayoutType_t2E73957D2FC55AC57E8DAD6ED4A40F9D43D0EC92 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard_LayoutType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutType_t2E73957D2FC55AC57E8DAD6ED4A40F9D43D0EC92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct  InputSourceType_tBBE24B55B62937FD88FA93F2EE020FDCA531B289 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_tBBE24B55B62937FD88FA93F2EE020FDCA531B289, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandPanEventData
struct  HandPanEventData_tD05B4ABADBD43876B4F63600C138606362F86E4A  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.UI.HandPanEventData::<PanDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CPanDeltaU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CPanDeltaU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HandPanEventData_tD05B4ABADBD43876B4F63600C138606362F86E4A, ___U3CPanDeltaU3Ek__BackingField_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CPanDeltaU3Ek__BackingField_0() const { return ___U3CPanDeltaU3Ek__BackingField_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CPanDeltaU3Ek__BackingField_0() { return &___U3CPanDeltaU3Ek__BackingField_0; }
	inline void set_U3CPanDeltaU3Ek__BackingField_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CPanDeltaU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PanUnityEvent
struct  PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29  : public UnityEvent_1_tB2E51AD9E9B73DA5CA9C83BBF4317DBD8AA16C59
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.UI.SliderAxis
struct  SliderAxis_t655A1FFE980FA51599AA44F73ABE333A35908E2B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.SliderAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SliderAxis_t655A1FFE980FA51599AA44F73ABE333A35908E2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_t424CBAA5C26E0A6C0EA65FF6F67F35055D843330 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t424CBAA5C26E0A6C0EA65FF6F67F35055D843330, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tA5BA365DE7D47F6BA6EFF1DCD2F37A22DB2F63BB 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tA5BA365DE7D47F6BA6EFF1DCD2F37A22DB2F63BB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// TMPro.ColorMode
struct  ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct  Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___min_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_min_2() const { return ___min_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___max_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_max_3() const { return ___max_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___max_3 = value;
	}
};

struct Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields, ___zero_0)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_zero_0() const { return ___zero_0; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields, ___uninitialized_1)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct  HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601, ___color_0)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_0() const { return ___color_0; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601, ___padding_1)); }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct  HorizontalAlignmentOptions_tC75AF4FA369C73A4CDEF3AA5C313BA8576DB516F 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tC75AF4FA369C73A4CDEF3AA5C313BA8576DB516F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.MaskingTypes
struct  MaskingTypes_t37B6F292739A890CF34EA024D24A5BFA88579086 
{
public:
	// System.Int32 TMPro.MaskingTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaskingTypes_t37B6F292739A890CF34EA024D24A5BFA88579086, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_CharacterValidation
struct  CharacterValidation_t9F45E4CA4A1A77DE3E0F1D43A8A26DD6EEC2D12A 
{
public:
	// System.Int32 TMPro.TMP_InputField_CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t9F45E4CA4A1A77DE3E0F1D43A8A26DD6EEC2D12A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_ContentType
struct  ContentType_t93262611CC15FC7196E42F1B77517D724602FE38 
{
public:
	// System.Int32 TMPro.TMP_InputField_ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t93262611CC15FC7196E42F1B77517D724602FE38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_InputType
struct  InputType_t002CCE2E41F03B7E05CA0F31EA1D57EA36631FD2 
{
public:
	// System.Int32 TMPro.TMP_InputField_InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t002CCE2E41F03B7E05CA0F31EA1D57EA36631FD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_LineType
struct  LineType_t0ED2AC5DA81D1481A2072395E6A256EBE23140D7 
{
public:
	// System.Int32 TMPro.TMP_InputField_LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t0ED2AC5DA81D1481A2072395E6A256EBE23140D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct  TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_DefaultItem_2)); }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct  TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___itemStack_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_DefaultItem_2)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topLeft_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topRight_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topRight_1() const { return ___topRight_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomLeft_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomRight_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct  VerticalAlignmentOptions_t52EA4E859AFA2147B9B1433C87D5CE5FE568FFB6 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t52EA4E859AFA2147B9B1433C87D5CE5FE568FFB6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
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
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Image_FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Nullable`1<Microsoft.MixedReality.Toolkit.UI.SliderAxis>
struct  Nullable_1_t5504F4622E7BC1ABB425BB32F3BCD2EDE04238F1 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t5504F4622E7BC1ABB425BB32F3BCD2EDE04238F1, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t5504F4622E7BC1ABB425BB32F3BCD2EDE04238F1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineExtents_19)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct  TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___itemStack_0)); }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct  TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_DefaultItem_2)); }
	inline HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct  TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile
struct  DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::dwellTriggerPointerType
	int32_t ___dwellTriggerPointerType_4;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::dwellIntentDelay
	float ___dwellIntentDelay_5;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::dwellStartDelay
	float ___dwellStartDelay_6;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::timeToCompleteDwell
	float ___timeToCompleteDwell_7;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::timeToAllowDwellResume
	float ___timeToAllowDwellResume_8;

public:
	inline static int32_t get_offset_of_dwellTriggerPointerType_4() { return static_cast<int32_t>(offsetof(DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857, ___dwellTriggerPointerType_4)); }
	inline int32_t get_dwellTriggerPointerType_4() const { return ___dwellTriggerPointerType_4; }
	inline int32_t* get_address_of_dwellTriggerPointerType_4() { return &___dwellTriggerPointerType_4; }
	inline void set_dwellTriggerPointerType_4(int32_t value)
	{
		___dwellTriggerPointerType_4 = value;
	}

	inline static int32_t get_offset_of_dwellIntentDelay_5() { return static_cast<int32_t>(offsetof(DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857, ___dwellIntentDelay_5)); }
	inline float get_dwellIntentDelay_5() const { return ___dwellIntentDelay_5; }
	inline float* get_address_of_dwellIntentDelay_5() { return &___dwellIntentDelay_5; }
	inline void set_dwellIntentDelay_5(float value)
	{
		___dwellIntentDelay_5 = value;
	}

	inline static int32_t get_offset_of_dwellStartDelay_6() { return static_cast<int32_t>(offsetof(DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857, ___dwellStartDelay_6)); }
	inline float get_dwellStartDelay_6() const { return ___dwellStartDelay_6; }
	inline float* get_address_of_dwellStartDelay_6() { return &___dwellStartDelay_6; }
	inline void set_dwellStartDelay_6(float value)
	{
		___dwellStartDelay_6 = value;
	}

	inline static int32_t get_offset_of_timeToCompleteDwell_7() { return static_cast<int32_t>(offsetof(DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857, ___timeToCompleteDwell_7)); }
	inline float get_timeToCompleteDwell_7() const { return ___timeToCompleteDwell_7; }
	inline float* get_address_of_timeToCompleteDwell_7() { return &___timeToCompleteDwell_7; }
	inline void set_timeToCompleteDwell_7(float value)
	{
		___timeToCompleteDwell_7 = value;
	}

	inline static int32_t get_offset_of_timeToAllowDwellResume_8() { return static_cast<int32_t>(offsetof(DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857, ___timeToAllowDwellResume_8)); }
	inline float get_timeToAllowDwellResume_8() const { return ___timeToAllowDwellResume_8; }
	inline float* get_address_of_timeToAllowDwellResume_8() { return &___timeToAllowDwellResume_8; }
	inline void set_timeToAllowDwellResume_8(float value)
	{
		___timeToAllowDwellResume_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct  BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler
struct  EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C  : public MulticastDelegate_t
{
public:

public:
};


// TMPro.WordWrapState
struct  WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_27;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_28;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_29;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_30;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_31;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_32;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_33;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_34;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_35;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_36;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_37;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_40;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_41;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_42;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_48;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_50;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_51;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_54;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_56;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_57;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_58;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_59;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_60;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_61;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_62;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_63;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_64;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_65;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScale_27() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScale_27)); }
	inline float get_fontScale_27() const { return ___fontScale_27; }
	inline float* get_address_of_fontScale_27() { return &___fontScale_27; }
	inline void set_fontScale_27(float value)
	{
		___fontScale_27 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_28() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScaleMultiplier_28)); }
	inline float get_fontScaleMultiplier_28() const { return ___fontScaleMultiplier_28; }
	inline float* get_address_of_fontScaleMultiplier_28() { return &___fontScaleMultiplier_28; }
	inline void set_fontScaleMultiplier_28(float value)
	{
		___fontScaleMultiplier_28 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_29() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontSize_29)); }
	inline float get_currentFontSize_29() const { return ___currentFontSize_29; }
	inline float* get_address_of_currentFontSize_29() { return &___currentFontSize_29; }
	inline void set_currentFontSize_29(float value)
	{
		___currentFontSize_29 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineOffset_30)); }
	inline float get_baselineOffset_30() const { return ___baselineOffset_30; }
	inline float* get_address_of_baselineOffset_30() { return &___baselineOffset_30; }
	inline void set_baselineOffset_30(float value)
	{
		___baselineOffset_30 = value;
	}

	inline static int32_t get_offset_of_lineOffset_31() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineOffset_31)); }
	inline float get_lineOffset_31() const { return ___lineOffset_31; }
	inline float* get_address_of_lineOffset_31() { return &___lineOffset_31; }
	inline void set_lineOffset_31(float value)
	{
		___lineOffset_31 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_32() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isDrivenLineSpacing_32)); }
	inline bool get_isDrivenLineSpacing_32() const { return ___isDrivenLineSpacing_32; }
	inline bool* get_address_of_isDrivenLineSpacing_32() { return &___isDrivenLineSpacing_32; }
	inline void set_isDrivenLineSpacing_32(bool value)
	{
		___isDrivenLineSpacing_32 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_33() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___glyphHorizontalAdvanceAdjustment_33)); }
	inline float get_glyphHorizontalAdvanceAdjustment_33() const { return ___glyphHorizontalAdvanceAdjustment_33; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_33() { return &___glyphHorizontalAdvanceAdjustment_33; }
	inline void set_glyphHorizontalAdvanceAdjustment_33(float value)
	{
		___glyphHorizontalAdvanceAdjustment_33 = value;
	}

	inline static int32_t get_offset_of_cSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___cSpace_34)); }
	inline float get_cSpace_34() const { return ___cSpace_34; }
	inline float* get_address_of_cSpace_34() { return &___cSpace_34; }
	inline void set_cSpace_34(float value)
	{
		___cSpace_34 = value;
	}

	inline static int32_t get_offset_of_mSpace_35() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___mSpace_35)); }
	inline float get_mSpace_35() const { return ___mSpace_35; }
	inline float* get_address_of_mSpace_35() { return &___mSpace_35; }
	inline void set_mSpace_35(float value)
	{
		___mSpace_35 = value;
	}

	inline static int32_t get_offset_of_textInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___textInfo_36)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_textInfo_36() const { return ___textInfo_36; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_textInfo_36() { return &___textInfo_36; }
	inline void set_textInfo_36(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___textInfo_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_36), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_37() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineInfo_37)); }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  get_lineInfo_37() const { return ___lineInfo_37; }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * get_address_of_lineInfo_37() { return &___lineInfo_37; }
	inline void set_lineInfo_37(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		___lineInfo_37 = value;
	}

	inline static int32_t get_offset_of_vertexColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___vertexColor_38)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_vertexColor_38() const { return ___vertexColor_38; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_vertexColor_38() { return &___vertexColor_38; }
	inline void set_vertexColor_38(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___vertexColor_38 = value;
	}

	inline static int32_t get_offset_of_underlineColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColor_39)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_39() const { return ___underlineColor_39; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_39() { return &___underlineColor_39; }
	inline void set_underlineColor_39(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_39 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColor_40)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_40() const { return ___strikethroughColor_40; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_40() { return &___strikethroughColor_40; }
	inline void set_strikethroughColor_40(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_40 = value;
	}

	inline static int32_t get_offset_of_highlightColor_41() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColor_41)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_41() const { return ___highlightColor_41; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_41() { return &___highlightColor_41; }
	inline void set_highlightColor_41(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_41 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___basicStyleStack_42)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_basicStyleStack_42() const { return ___basicStyleStack_42; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_basicStyleStack_42() { return &___basicStyleStack_42; }
	inline void set_basicStyleStack_42(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___basicStyleStack_42 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___italicAngleStack_43)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_italicAngleStack_43() const { return ___italicAngleStack_43; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_italicAngleStack_43() { return &___italicAngleStack_43; }
	inline void set_italicAngleStack_43(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___italicAngleStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorStack_44)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_colorStack_44() const { return ___colorStack_44; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_colorStack_44() { return &___colorStack_44; }
	inline void set_colorStack_44(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___colorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColorStack_45)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_underlineColorStack_45() const { return ___underlineColorStack_45; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_underlineColorStack_45() { return &___underlineColorStack_45; }
	inline void set_underlineColorStack_45(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___underlineColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColorStack_46)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_strikethroughColorStack_46() const { return ___strikethroughColorStack_46; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_strikethroughColorStack_46() { return &___strikethroughColorStack_46; }
	inline void set_strikethroughColorStack_46(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___strikethroughColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColorStack_47)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_highlightColorStack_47() const { return ___highlightColorStack_47; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_highlightColorStack_47() { return &___highlightColorStack_47; }
	inline void set_highlightColorStack_47(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___highlightColorStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightStateStack_48)); }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  get_highlightStateStack_48() const { return ___highlightStateStack_48; }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 * get_address_of_highlightStateStack_48() { return &___highlightStateStack_48; }
	inline void set_highlightStateStack_48(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  value)
	{
		___highlightStateStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_48))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorGradientStack_49)); }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  get_colorGradientStack_49() const { return ___colorGradientStack_49; }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C * get_address_of_colorGradientStack_49() { return &___colorGradientStack_49; }
	inline void set_colorGradientStack_49(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  value)
	{
		___colorGradientStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___sizeStack_50)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_sizeStack_50() const { return ___sizeStack_50; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_sizeStack_50() { return &___sizeStack_50; }
	inline void set_sizeStack_50(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___sizeStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___indentStack_51)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_indentStack_51() const { return ___indentStack_51; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_indentStack_51() { return &___indentStack_51; }
	inline void set_indentStack_51(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___indentStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontWeightStack_52)); }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  get_fontWeightStack_52() const { return ___fontWeightStack_52; }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 * get_address_of_fontWeightStack_52() { return &___fontWeightStack_52; }
	inline void set_fontWeightStack_52(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  value)
	{
		___fontWeightStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___styleStack_53)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_styleStack_53() const { return ___styleStack_53; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_styleStack_53() { return &___styleStack_53; }
	inline void set_styleStack_53(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___styleStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineStack_54)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_baselineStack_54() const { return ___baselineStack_54; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_baselineStack_54() { return &___baselineStack_54; }
	inline void set_baselineStack_54(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___baselineStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___actionStack_55)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_actionStack_55() const { return ___actionStack_55; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_actionStack_55() { return &___actionStack_55; }
	inline void set_actionStack_55(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___actionStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_55))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___materialReferenceStack_56)); }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  get_materialReferenceStack_56() const { return ___materialReferenceStack_56; }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A * get_address_of_materialReferenceStack_56() { return &___materialReferenceStack_56; }
	inline void set_materialReferenceStack_56(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  value)
	{
		___materialReferenceStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_57() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineJustificationStack_57)); }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  get_lineJustificationStack_57() const { return ___lineJustificationStack_57; }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 * get_address_of_lineJustificationStack_57() { return &___lineJustificationStack_57; }
	inline void set_lineJustificationStack_57(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  value)
	{
		___lineJustificationStack_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_58() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___spriteAnimationID_58)); }
	inline int32_t get_spriteAnimationID_58() const { return ___spriteAnimationID_58; }
	inline int32_t* get_address_of_spriteAnimationID_58() { return &___spriteAnimationID_58; }
	inline void set_spriteAnimationID_58(int32_t value)
	{
		___spriteAnimationID_58 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontAsset_59)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_currentFontAsset_59() const { return ___currentFontAsset_59; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_currentFontAsset_59() { return &___currentFontAsset_59; }
	inline void set_currentFontAsset_59(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___currentFontAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_60() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentSpriteAsset_60)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_currentSpriteAsset_60() const { return ___currentSpriteAsset_60; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_currentSpriteAsset_60() { return &___currentSpriteAsset_60; }
	inline void set_currentSpriteAsset_60(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___currentSpriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_61() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterial_61)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_61() const { return ___currentMaterial_61; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_61() { return &___currentMaterial_61; }
	inline void set_currentMaterial_61(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_61), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_62() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterialIndex_62)); }
	inline int32_t get_currentMaterialIndex_62() const { return ___currentMaterialIndex_62; }
	inline int32_t* get_address_of_currentMaterialIndex_62() { return &___currentMaterialIndex_62; }
	inline void set_currentMaterialIndex_62(int32_t value)
	{
		___currentMaterialIndex_62 = value;
	}

	inline static int32_t get_offset_of_meshExtents_63() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___meshExtents_63)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_meshExtents_63() const { return ___meshExtents_63; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_meshExtents_63() { return &___meshExtents_63; }
	inline void set_meshExtents_63(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___meshExtents_63 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_64() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___tagNoParsing_64)); }
	inline bool get_tagNoParsing_64() const { return ___tagNoParsing_64; }
	inline bool* get_address_of_tagNoParsing_64() { return &___tagNoParsing_64; }
	inline void set_tagNoParsing_64(bool value)
	{
		___tagNoParsing_64 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_65() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isNonBreakingSpace_65)); }
	inline bool get_isNonBreakingSpace_65() const { return ___isNonBreakingSpace_65; }
	inline bool* get_address_of_isNonBreakingSpace_65() { return &___isNonBreakingSpace_65; }
	inline void set_isNonBreakingSpace_65(bool value)
	{
		___isNonBreakingSpace_65 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_36;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_37;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_38;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_39;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_40;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_41;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_44;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_50;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_51;
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_53;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_54;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_55;
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_59;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_60;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_36;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_37;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_38;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_39;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_40;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_41;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_44;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_50;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_51;
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_53;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_54;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_55;
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_59;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_60;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.HandPanEventData>
struct  UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay
struct  DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253  : public DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay::allowDwellDecayOnCancel
	bool ___allowDwellDecayOnCancel_9;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay::timeToAllowDwellDecay
	float ___timeToAllowDwellDecay_10;

public:
	inline static int32_t get_offset_of_allowDwellDecayOnCancel_9() { return static_cast<int32_t>(offsetof(DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253, ___allowDwellDecayOnCancel_9)); }
	inline bool get_allowDwellDecayOnCancel_9() const { return ___allowDwellDecayOnCancel_9; }
	inline bool* get_address_of_allowDwellDecayOnCancel_9() { return &___allowDwellDecayOnCancel_9; }
	inline void set_allowDwellDecayOnCancel_9(bool value)
	{
		___allowDwellDecayOnCancel_9 = value;
	}

	inline static int32_t get_offset_of_timeToAllowDwellDecay_10() { return static_cast<int32_t>(offsetof(DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253, ___timeToAllowDwellDecay_10)); }
	inline float get_timeToAllowDwellDecay_10() const { return ___timeToAllowDwellDecay_10; }
	inline float* get_address_of_timeToAllowDwellDecay_10() { return &___timeToAllowDwellDecay_10; }
	inline void set_timeToAllowDwellDecay_10(float value)
	{
		___timeToAllowDwellDecay_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct  InputEventData_t89864BBA5E54327F758CE7579CAAE614F5AA8B3A  : public BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_t89864BBA5E54327F758CE7579CAAE614F5AA8B3A, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct  TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_DefaultItem_2)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample
struct  GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample::grabAction
	MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  ___grabAction_4;

public:
	inline static int32_t get_offset_of_grabAction_4() { return static_cast<int32_t>(offsetof(GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A, ___grabAction_4)); }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  get_grabAction_4() const { return ___grabAction_4; }
	inline MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726 * get_address_of_grabAction_4() { return &___grabAction_4; }
	inline void set_grabAction_4(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  value)
	{
		___grabAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grabAction_4))->___description_2), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.RotateWithPan
struct  RotateWithPan_tD4BF5617C89F3B3C1614935734971A5440494686  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Examples.RotateWithPan::rd
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___rd_4;
	// Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom Microsoft.MixedReality.Toolkit.Examples.RotateWithPan::panInputSource
	HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * ___panInputSource_5;

public:
	inline static int32_t get_offset_of_rd_4() { return static_cast<int32_t>(offsetof(RotateWithPan_tD4BF5617C89F3B3C1614935734971A5440494686, ___rd_4)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_rd_4() const { return ___rd_4; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_rd_4() { return &___rd_4; }
	inline void set_rd_4(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___rd_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rd_4), (void*)value);
	}

	inline static int32_t get_offset_of_panInputSource_5() { return static_cast<int32_t>(offsetof(RotateWithPan_tD4BF5617C89F3B3C1614935734971A5440494686, ___panInputSource_5)); }
	inline HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * get_panInputSource_5() const { return ___panInputSource_5; }
	inline HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E ** get_address_of_panInputSource_5() { return &___panInputSource_5; }
	inline void set_panInputSource_5(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * value)
	{
		___panInputSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panInputSource_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample
struct  BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::dwellVisualImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___dwellVisualImage_4;
	// UnityEngine.UI.Button Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::targetButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___targetButton_5;
	// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::dwellHandler
	DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * ___dwellHandler_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::isDwelling
	bool ___isDwelling_7;

public:
	inline static int32_t get_offset_of_dwellVisualImage_4() { return static_cast<int32_t>(offsetof(BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853, ___dwellVisualImage_4)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_dwellVisualImage_4() const { return ___dwellVisualImage_4; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_dwellVisualImage_4() { return &___dwellVisualImage_4; }
	inline void set_dwellVisualImage_4(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___dwellVisualImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dwellVisualImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_targetButton_5() { return static_cast<int32_t>(offsetof(BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853, ___targetButton_5)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_targetButton_5() const { return ___targetButton_5; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_targetButton_5() { return &___targetButton_5; }
	inline void set_targetButton_5(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___targetButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_dwellHandler_6() { return static_cast<int32_t>(offsetof(BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853, ___dwellHandler_6)); }
	inline DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * get_dwellHandler_6() const { return ___dwellHandler_6; }
	inline DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 ** get_address_of_dwellHandler_6() { return &___dwellHandler_6; }
	inline void set_dwellHandler_6(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * value)
	{
		___dwellHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dwellHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_isDwelling_7() { return static_cast<int32_t>(offsetof(BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853, ___isDwelling_7)); }
	inline bool get_isDwelling_7() const { return ___isDwelling_7; }
	inline bool* get_address_of_isDwelling_7() { return &___isDwelling_7; }
	inline void set_isDwelling_7(bool value)
	{
		___isDwelling_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler
struct  DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::dwellProfile
	DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857 * ___dwellProfile_4;
	// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellUnityEvent Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::DwellIntended
	DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * ___DwellIntended_5;
	// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellUnityEvent Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::DwellStarted
	DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * ___DwellStarted_6;
	// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellUnityEvent Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::DwellCompleted
	DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * ___DwellCompleted_7;
	// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellUnityEvent Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::DwellCanceled
	DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * ___DwellCanceled_8;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::pointer
	RuntimeObject* ___pointer_9;
	// System.DateTime Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::focusEnterTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___focusEnterTime_10;
	// System.DateTime Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::focusExitTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___focusExitTime_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::<HasFocus>k__BackingField
	bool ___U3CHasFocusU3Ek__BackingField_12;
	// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler_DwellStateType Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::CurrentDwellState
	int32_t ___CurrentDwellState_13;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::FillTimer
	float ___FillTimer_14;

public:
	inline static int32_t get_offset_of_dwellProfile_4() { return static_cast<int32_t>(offsetof(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8, ___dwellProfile_4)); }
	inline DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857 * get_dwellProfile_4() const { return ___dwellProfile_4; }
	inline DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857 ** get_address_of_dwellProfile_4() { return &___dwellProfile_4; }
	inline void set_dwellProfile_4(DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857 * value)
	{
		___dwellProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dwellProfile_4), (void*)value);
	}

	inline static int32_t get_offset_of_DwellIntended_5() { return static_cast<int32_t>(offsetof(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8, ___DwellIntended_5)); }
	inline DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * get_DwellIntended_5() const { return ___DwellIntended_5; }
	inline DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 ** get_address_of_DwellIntended_5() { return &___DwellIntended_5; }
	inline void set_DwellIntended_5(DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * value)
	{
		___DwellIntended_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DwellIntended_5), (void*)value);
	}

	inline static int32_t get_offset_of_DwellStarted_6() { return static_cast<int32_t>(offsetof(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8, ___DwellStarted_6)); }
	inline DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * get_DwellStarted_6() const { return ___DwellStarted_6; }
	inline DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 ** get_address_of_DwellStarted_6() { return &___DwellStarted_6; }
	inline void set_DwellStarted_6(DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * value)
	{
		___DwellStarted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DwellStarted_6), (void*)value);
	}

	inline static int32_t get_offset_of_DwellCompleted_7() { return static_cast<int32_t>(offsetof(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8, ___DwellCompleted_7)); }
	inline DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * get_DwellCompleted_7() const { return ___DwellCompleted_7; }
	inline DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 ** get_address_of_DwellCompleted_7() { return &___DwellCompleted_7; }
	inline void set_DwellCompleted_7(DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * value)
	{
		___DwellCompleted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DwellCompleted_7), (void*)value);
	}

	inline static int32_t get_offset_of_DwellCanceled_8() { return static_cast<int32_t>(offsetof(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8, ___DwellCanceled_8)); }
	inline DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * get_DwellCanceled_8() const { return ___DwellCanceled_8; }
	inline DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 ** get_address_of_DwellCanceled_8() { return &___DwellCanceled_8; }
	inline void set_DwellCanceled_8(DwellUnityEvent_t1D9CCE45B6FA40CD121E2D29D2C65F889138FC38 * value)
	{
		___DwellCanceled_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DwellCanceled_8), (void*)value);
	}

	inline static int32_t get_offset_of_pointer_9() { return static_cast<int32_t>(offsetof(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8, ___pointer_9)); }
	inline RuntimeObject* get_pointer_9() const { return ___pointer_9; }
	inline RuntimeObject** get_address_of_pointer_9() { return &___pointer_9; }
	inline void set_pointer_9(RuntimeObject* value)
	{
		___pointer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointer_9), (void*)value);
	}

	inline static int32_t get_offset_of_focusEnterTime_10() { return static_cast<int32_t>(offsetof(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8, ___focusEnterTime_10)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_focusEnterTime_10() const { return ___focusEnterTime_10; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_focusEnterTime_10() { return &___focusEnterTime_10; }
	inline void set_focusEnterTime_10(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___focusEnterTime_10 = value;
	}

	inline static int32_t get_offset_of_focusExitTime_11() { return static_cast<int32_t>(offsetof(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8, ___focusExitTime_11)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_focusExitTime_11() const { return ___focusExitTime_11; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_focusExitTime_11() { return &___focusExitTime_11; }
	inline void set_focusExitTime_11(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___focusExitTime_11 = value;
	}

	inline static int32_t get_offset_of_U3CHasFocusU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8, ___U3CHasFocusU3Ek__BackingField_12)); }
	inline bool get_U3CHasFocusU3Ek__BackingField_12() const { return ___U3CHasFocusU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CHasFocusU3Ek__BackingField_12() { return &___U3CHasFocusU3Ek__BackingField_12; }
	inline void set_U3CHasFocusU3Ek__BackingField_12(bool value)
	{
		___U3CHasFocusU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_CurrentDwellState_13() { return static_cast<int32_t>(offsetof(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8, ___CurrentDwellState_13)); }
	inline int32_t get_CurrentDwellState_13() const { return ___CurrentDwellState_13; }
	inline int32_t* get_address_of_CurrentDwellState_13() { return &___CurrentDwellState_13; }
	inline void set_CurrentDwellState_13(int32_t value)
	{
		___CurrentDwellState_13 = value;
	}

	inline static int32_t get_offset_of_FillTimer_14() { return static_cast<int32_t>(offsetof(DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8, ___FillTimer_14)); }
	inline float get_FillTimer_14() const { return ___FillTimer_14; }
	inline float* get_address_of_FillTimer_14() { return &___FillTimer_14; }
	inline void set_FillTimer_14(float value)
	{
		___FillTimer_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController
struct  JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::targetObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___targetObject_4;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::debugText
	TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * ___debugText_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::joystickVisual
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___joystickVisual_6;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::grabberVisual
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___grabberVisual_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::showGrabberVisual
	bool ___showGrabberVisual_8;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::ReboundSpeed
	float ___ReboundSpeed_9;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::SensitivityLeftRight
	float ___SensitivityLeftRight_10;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::SensitivityForwardBack
	float ___SensitivityForwardBack_11;
	// Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickMode Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::mode
	int32_t ___mode_12;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::MoveSpeed
	float ___MoveSpeed_13;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::RotationSpeed
	float ___RotationSpeed_14;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::ScaleSpeed
	float ___ScaleSpeed_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::startPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPosition_16;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::joystickGrabberPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___joystickGrabberPosition_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::joystickVisualRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___joystickVisualRotation_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController::isDragging
	bool ___isDragging_20;

public:
	inline static int32_t get_offset_of_targetObject_4() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___targetObject_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_targetObject_4() const { return ___targetObject_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_targetObject_4() { return &___targetObject_4; }
	inline void set_targetObject_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___targetObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_debugText_5() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___debugText_5)); }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * get_debugText_5() const { return ___debugText_5; }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 ** get_address_of_debugText_5() { return &___debugText_5; }
	inline void set_debugText_5(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * value)
	{
		___debugText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugText_5), (void*)value);
	}

	inline static int32_t get_offset_of_joystickVisual_6() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___joystickVisual_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_joystickVisual_6() const { return ___joystickVisual_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_joystickVisual_6() { return &___joystickVisual_6; }
	inline void set_joystickVisual_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___joystickVisual_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joystickVisual_6), (void*)value);
	}

	inline static int32_t get_offset_of_grabberVisual_7() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___grabberVisual_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_grabberVisual_7() const { return ___grabberVisual_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_grabberVisual_7() { return &___grabberVisual_7; }
	inline void set_grabberVisual_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___grabberVisual_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grabberVisual_7), (void*)value);
	}

	inline static int32_t get_offset_of_showGrabberVisual_8() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___showGrabberVisual_8)); }
	inline bool get_showGrabberVisual_8() const { return ___showGrabberVisual_8; }
	inline bool* get_address_of_showGrabberVisual_8() { return &___showGrabberVisual_8; }
	inline void set_showGrabberVisual_8(bool value)
	{
		___showGrabberVisual_8 = value;
	}

	inline static int32_t get_offset_of_ReboundSpeed_9() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___ReboundSpeed_9)); }
	inline float get_ReboundSpeed_9() const { return ___ReboundSpeed_9; }
	inline float* get_address_of_ReboundSpeed_9() { return &___ReboundSpeed_9; }
	inline void set_ReboundSpeed_9(float value)
	{
		___ReboundSpeed_9 = value;
	}

	inline static int32_t get_offset_of_SensitivityLeftRight_10() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___SensitivityLeftRight_10)); }
	inline float get_SensitivityLeftRight_10() const { return ___SensitivityLeftRight_10; }
	inline float* get_address_of_SensitivityLeftRight_10() { return &___SensitivityLeftRight_10; }
	inline void set_SensitivityLeftRight_10(float value)
	{
		___SensitivityLeftRight_10 = value;
	}

	inline static int32_t get_offset_of_SensitivityForwardBack_11() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___SensitivityForwardBack_11)); }
	inline float get_SensitivityForwardBack_11() const { return ___SensitivityForwardBack_11; }
	inline float* get_address_of_SensitivityForwardBack_11() { return &___SensitivityForwardBack_11; }
	inline void set_SensitivityForwardBack_11(float value)
	{
		___SensitivityForwardBack_11 = value;
	}

	inline static int32_t get_offset_of_mode_12() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___mode_12)); }
	inline int32_t get_mode_12() const { return ___mode_12; }
	inline int32_t* get_address_of_mode_12() { return &___mode_12; }
	inline void set_mode_12(int32_t value)
	{
		___mode_12 = value;
	}

	inline static int32_t get_offset_of_MoveSpeed_13() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___MoveSpeed_13)); }
	inline float get_MoveSpeed_13() const { return ___MoveSpeed_13; }
	inline float* get_address_of_MoveSpeed_13() { return &___MoveSpeed_13; }
	inline void set_MoveSpeed_13(float value)
	{
		___MoveSpeed_13 = value;
	}

	inline static int32_t get_offset_of_RotationSpeed_14() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___RotationSpeed_14)); }
	inline float get_RotationSpeed_14() const { return ___RotationSpeed_14; }
	inline float* get_address_of_RotationSpeed_14() { return &___RotationSpeed_14; }
	inline void set_RotationSpeed_14(float value)
	{
		___RotationSpeed_14 = value;
	}

	inline static int32_t get_offset_of_ScaleSpeed_15() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___ScaleSpeed_15)); }
	inline float get_ScaleSpeed_15() const { return ___ScaleSpeed_15; }
	inline float* get_address_of_ScaleSpeed_15() { return &___ScaleSpeed_15; }
	inline void set_ScaleSpeed_15(float value)
	{
		___ScaleSpeed_15 = value;
	}

	inline static int32_t get_offset_of_startPosition_16() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___startPosition_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startPosition_16() const { return ___startPosition_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startPosition_16() { return &___startPosition_16; }
	inline void set_startPosition_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startPosition_16 = value;
	}

	inline static int32_t get_offset_of_joystickGrabberPosition_17() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___joystickGrabberPosition_17)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_joystickGrabberPosition_17() const { return ___joystickGrabberPosition_17; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_joystickGrabberPosition_17() { return &___joystickGrabberPosition_17; }
	inline void set_joystickGrabberPosition_17(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___joystickGrabberPosition_17 = value;
	}

	inline static int32_t get_offset_of_joystickVisualRotation_18() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___joystickVisualRotation_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_joystickVisualRotation_18() const { return ___joystickVisualRotation_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_joystickVisualRotation_18() { return &___joystickVisualRotation_18; }
	inline void set_joystickVisualRotation_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___joystickVisualRotation_18 = value;
	}

	inline static int32_t get_offset_of_isDragging_20() { return static_cast<int32_t>(offsetof(JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4, ___isDragging_20)); }
	inline bool get_isDragging_20() const { return ___isDragging_20; }
	inline bool* get_address_of_isDragging_20() { return &___isDragging_20; }
	inline void set_isDragging_20(bool value)
	{
		___isDragging_20 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders
struct  JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::SliderMove
	PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * ___SliderMove_4;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::SliderScale
	PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * ___SliderScale_5;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::SliderRotate
	PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * ___SliderRotate_6;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::SliderRebound
	PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * ___SliderRebound_7;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::SliderSensitivityHorizontal
	PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * ___SliderSensitivityHorizontal_8;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::SliderSensitivityVertical
	PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * ___SliderSensitivityVertical_9;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::TextMove
	TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * ___TextMove_10;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::TextScale
	TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * ___TextScale_11;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::TextRotate
	TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * ___TextRotate_12;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::TextRebound
	TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * ___TextRebound_13;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::TextSensitivityHorizontal
	TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * ___TextSensitivityHorizontal_14;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::TextSensitivityVertical
	TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * ___TextSensitivityVertical_15;
	// Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController[] Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::Joysticks
	JoystickControllerU5BU5D_t1030675CFD85A2DE4BD3F39CCC2FBE00F292B0E7* ___Joysticks_16;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::MinimumFloatValue
	float ___MinimumFloatValue_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::MinimumIntValue
	int32_t ___MinimumIntValue_18;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::DefaultMoveValue
	float ___DefaultMoveValue_19;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::DefaultScaleValue
	float ___DefaultScaleValue_20;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::DefaultRotateValue
	float ___DefaultRotateValue_21;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::DefaultReboundValue
	float ___DefaultReboundValue_22;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::DefaultSensitivityHorizontalValue
	float ___DefaultSensitivityHorizontalValue_23;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::DefaultSliderSensitivityVerticalValue
	float ___DefaultSliderSensitivityVerticalValue_24;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::CurrentMoveValue
	float ___CurrentMoveValue_25;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::CurrentScaleValue
	float ___CurrentScaleValue_26;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::CurrentRotateValue
	float ___CurrentRotateValue_27;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::CurrentReboundValue
	float ___CurrentReboundValue_28;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::CurrentSensitivityHorizontalValue
	float ___CurrentSensitivityHorizontalValue_29;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::CurrentSliderSensitivityVerticalValue
	float ___CurrentSliderSensitivityVerticalValue_30;

public:
	inline static int32_t get_offset_of_SliderMove_4() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___SliderMove_4)); }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * get_SliderMove_4() const { return ___SliderMove_4; }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 ** get_address_of_SliderMove_4() { return &___SliderMove_4; }
	inline void set_SliderMove_4(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * value)
	{
		___SliderMove_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SliderMove_4), (void*)value);
	}

	inline static int32_t get_offset_of_SliderScale_5() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___SliderScale_5)); }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * get_SliderScale_5() const { return ___SliderScale_5; }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 ** get_address_of_SliderScale_5() { return &___SliderScale_5; }
	inline void set_SliderScale_5(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * value)
	{
		___SliderScale_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SliderScale_5), (void*)value);
	}

	inline static int32_t get_offset_of_SliderRotate_6() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___SliderRotate_6)); }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * get_SliderRotate_6() const { return ___SliderRotate_6; }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 ** get_address_of_SliderRotate_6() { return &___SliderRotate_6; }
	inline void set_SliderRotate_6(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * value)
	{
		___SliderRotate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SliderRotate_6), (void*)value);
	}

	inline static int32_t get_offset_of_SliderRebound_7() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___SliderRebound_7)); }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * get_SliderRebound_7() const { return ___SliderRebound_7; }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 ** get_address_of_SliderRebound_7() { return &___SliderRebound_7; }
	inline void set_SliderRebound_7(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * value)
	{
		___SliderRebound_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SliderRebound_7), (void*)value);
	}

	inline static int32_t get_offset_of_SliderSensitivityHorizontal_8() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___SliderSensitivityHorizontal_8)); }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * get_SliderSensitivityHorizontal_8() const { return ___SliderSensitivityHorizontal_8; }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 ** get_address_of_SliderSensitivityHorizontal_8() { return &___SliderSensitivityHorizontal_8; }
	inline void set_SliderSensitivityHorizontal_8(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * value)
	{
		___SliderSensitivityHorizontal_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SliderSensitivityHorizontal_8), (void*)value);
	}

	inline static int32_t get_offset_of_SliderSensitivityVertical_9() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___SliderSensitivityVertical_9)); }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * get_SliderSensitivityVertical_9() const { return ___SliderSensitivityVertical_9; }
	inline PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 ** get_address_of_SliderSensitivityVertical_9() { return &___SliderSensitivityVertical_9; }
	inline void set_SliderSensitivityVertical_9(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * value)
	{
		___SliderSensitivityVertical_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SliderSensitivityVertical_9), (void*)value);
	}

	inline static int32_t get_offset_of_TextMove_10() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___TextMove_10)); }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * get_TextMove_10() const { return ___TextMove_10; }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 ** get_address_of_TextMove_10() { return &___TextMove_10; }
	inline void set_TextMove_10(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * value)
	{
		___TextMove_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextMove_10), (void*)value);
	}

	inline static int32_t get_offset_of_TextScale_11() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___TextScale_11)); }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * get_TextScale_11() const { return ___TextScale_11; }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 ** get_address_of_TextScale_11() { return &___TextScale_11; }
	inline void set_TextScale_11(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * value)
	{
		___TextScale_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextScale_11), (void*)value);
	}

	inline static int32_t get_offset_of_TextRotate_12() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___TextRotate_12)); }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * get_TextRotate_12() const { return ___TextRotate_12; }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 ** get_address_of_TextRotate_12() { return &___TextRotate_12; }
	inline void set_TextRotate_12(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * value)
	{
		___TextRotate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextRotate_12), (void*)value);
	}

	inline static int32_t get_offset_of_TextRebound_13() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___TextRebound_13)); }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * get_TextRebound_13() const { return ___TextRebound_13; }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 ** get_address_of_TextRebound_13() { return &___TextRebound_13; }
	inline void set_TextRebound_13(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * value)
	{
		___TextRebound_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextRebound_13), (void*)value);
	}

	inline static int32_t get_offset_of_TextSensitivityHorizontal_14() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___TextSensitivityHorizontal_14)); }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * get_TextSensitivityHorizontal_14() const { return ___TextSensitivityHorizontal_14; }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 ** get_address_of_TextSensitivityHorizontal_14() { return &___TextSensitivityHorizontal_14; }
	inline void set_TextSensitivityHorizontal_14(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * value)
	{
		___TextSensitivityHorizontal_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextSensitivityHorizontal_14), (void*)value);
	}

	inline static int32_t get_offset_of_TextSensitivityVertical_15() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___TextSensitivityVertical_15)); }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * get_TextSensitivityVertical_15() const { return ___TextSensitivityVertical_15; }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 ** get_address_of_TextSensitivityVertical_15() { return &___TextSensitivityVertical_15; }
	inline void set_TextSensitivityVertical_15(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * value)
	{
		___TextSensitivityVertical_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextSensitivityVertical_15), (void*)value);
	}

	inline static int32_t get_offset_of_Joysticks_16() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___Joysticks_16)); }
	inline JoystickControllerU5BU5D_t1030675CFD85A2DE4BD3F39CCC2FBE00F292B0E7* get_Joysticks_16() const { return ___Joysticks_16; }
	inline JoystickControllerU5BU5D_t1030675CFD85A2DE4BD3F39CCC2FBE00F292B0E7** get_address_of_Joysticks_16() { return &___Joysticks_16; }
	inline void set_Joysticks_16(JoystickControllerU5BU5D_t1030675CFD85A2DE4BD3F39CCC2FBE00F292B0E7* value)
	{
		___Joysticks_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Joysticks_16), (void*)value);
	}

	inline static int32_t get_offset_of_MinimumFloatValue_17() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___MinimumFloatValue_17)); }
	inline float get_MinimumFloatValue_17() const { return ___MinimumFloatValue_17; }
	inline float* get_address_of_MinimumFloatValue_17() { return &___MinimumFloatValue_17; }
	inline void set_MinimumFloatValue_17(float value)
	{
		___MinimumFloatValue_17 = value;
	}

	inline static int32_t get_offset_of_MinimumIntValue_18() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___MinimumIntValue_18)); }
	inline int32_t get_MinimumIntValue_18() const { return ___MinimumIntValue_18; }
	inline int32_t* get_address_of_MinimumIntValue_18() { return &___MinimumIntValue_18; }
	inline void set_MinimumIntValue_18(int32_t value)
	{
		___MinimumIntValue_18 = value;
	}

	inline static int32_t get_offset_of_DefaultMoveValue_19() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___DefaultMoveValue_19)); }
	inline float get_DefaultMoveValue_19() const { return ___DefaultMoveValue_19; }
	inline float* get_address_of_DefaultMoveValue_19() { return &___DefaultMoveValue_19; }
	inline void set_DefaultMoveValue_19(float value)
	{
		___DefaultMoveValue_19 = value;
	}

	inline static int32_t get_offset_of_DefaultScaleValue_20() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___DefaultScaleValue_20)); }
	inline float get_DefaultScaleValue_20() const { return ___DefaultScaleValue_20; }
	inline float* get_address_of_DefaultScaleValue_20() { return &___DefaultScaleValue_20; }
	inline void set_DefaultScaleValue_20(float value)
	{
		___DefaultScaleValue_20 = value;
	}

	inline static int32_t get_offset_of_DefaultRotateValue_21() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___DefaultRotateValue_21)); }
	inline float get_DefaultRotateValue_21() const { return ___DefaultRotateValue_21; }
	inline float* get_address_of_DefaultRotateValue_21() { return &___DefaultRotateValue_21; }
	inline void set_DefaultRotateValue_21(float value)
	{
		___DefaultRotateValue_21 = value;
	}

	inline static int32_t get_offset_of_DefaultReboundValue_22() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___DefaultReboundValue_22)); }
	inline float get_DefaultReboundValue_22() const { return ___DefaultReboundValue_22; }
	inline float* get_address_of_DefaultReboundValue_22() { return &___DefaultReboundValue_22; }
	inline void set_DefaultReboundValue_22(float value)
	{
		___DefaultReboundValue_22 = value;
	}

	inline static int32_t get_offset_of_DefaultSensitivityHorizontalValue_23() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___DefaultSensitivityHorizontalValue_23)); }
	inline float get_DefaultSensitivityHorizontalValue_23() const { return ___DefaultSensitivityHorizontalValue_23; }
	inline float* get_address_of_DefaultSensitivityHorizontalValue_23() { return &___DefaultSensitivityHorizontalValue_23; }
	inline void set_DefaultSensitivityHorizontalValue_23(float value)
	{
		___DefaultSensitivityHorizontalValue_23 = value;
	}

	inline static int32_t get_offset_of_DefaultSliderSensitivityVerticalValue_24() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___DefaultSliderSensitivityVerticalValue_24)); }
	inline float get_DefaultSliderSensitivityVerticalValue_24() const { return ___DefaultSliderSensitivityVerticalValue_24; }
	inline float* get_address_of_DefaultSliderSensitivityVerticalValue_24() { return &___DefaultSliderSensitivityVerticalValue_24; }
	inline void set_DefaultSliderSensitivityVerticalValue_24(float value)
	{
		___DefaultSliderSensitivityVerticalValue_24 = value;
	}

	inline static int32_t get_offset_of_CurrentMoveValue_25() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___CurrentMoveValue_25)); }
	inline float get_CurrentMoveValue_25() const { return ___CurrentMoveValue_25; }
	inline float* get_address_of_CurrentMoveValue_25() { return &___CurrentMoveValue_25; }
	inline void set_CurrentMoveValue_25(float value)
	{
		___CurrentMoveValue_25 = value;
	}

	inline static int32_t get_offset_of_CurrentScaleValue_26() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___CurrentScaleValue_26)); }
	inline float get_CurrentScaleValue_26() const { return ___CurrentScaleValue_26; }
	inline float* get_address_of_CurrentScaleValue_26() { return &___CurrentScaleValue_26; }
	inline void set_CurrentScaleValue_26(float value)
	{
		___CurrentScaleValue_26 = value;
	}

	inline static int32_t get_offset_of_CurrentRotateValue_27() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___CurrentRotateValue_27)); }
	inline float get_CurrentRotateValue_27() const { return ___CurrentRotateValue_27; }
	inline float* get_address_of_CurrentRotateValue_27() { return &___CurrentRotateValue_27; }
	inline void set_CurrentRotateValue_27(float value)
	{
		___CurrentRotateValue_27 = value;
	}

	inline static int32_t get_offset_of_CurrentReboundValue_28() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___CurrentReboundValue_28)); }
	inline float get_CurrentReboundValue_28() const { return ___CurrentReboundValue_28; }
	inline float* get_address_of_CurrentReboundValue_28() { return &___CurrentReboundValue_28; }
	inline void set_CurrentReboundValue_28(float value)
	{
		___CurrentReboundValue_28 = value;
	}

	inline static int32_t get_offset_of_CurrentSensitivityHorizontalValue_29() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___CurrentSensitivityHorizontalValue_29)); }
	inline float get_CurrentSensitivityHorizontalValue_29() const { return ___CurrentSensitivityHorizontalValue_29; }
	inline float* get_address_of_CurrentSensitivityHorizontalValue_29() { return &___CurrentSensitivityHorizontalValue_29; }
	inline void set_CurrentSensitivityHorizontalValue_29(float value)
	{
		___CurrentSensitivityHorizontalValue_29 = value;
	}

	inline static int32_t get_offset_of_CurrentSliderSensitivityVerticalValue_30() { return static_cast<int32_t>(offsetof(JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813, ___CurrentSliderSensitivityVerticalValue_30)); }
	inline float get_CurrentSliderSensitivityVerticalValue_30() const { return ___CurrentSliderSensitivityVerticalValue_30; }
	inline float* get_address_of_CurrentSliderSensitivityVerticalValue_30() { return &___CurrentSliderSensitivityVerticalValue_30; }
	inline void set_CurrentSliderSensitivityVerticalValue_30(float value)
	{
		___CurrentSliderSensitivityVerticalValue_30 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.SurfacePulse.HideOnDevice
struct  HideOnDevice_tAA8B26FBB296C8E9D6E223616395BD5CF7E6E034  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardTest
struct  KeyboardTest_tBD60D1BE6455A0A4A9C07AD079A7496BB93B93E8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardTest::keyboard
	NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * ___keyboard_4;

public:
	inline static int32_t get_offset_of_keyboard_4() { return static_cast<int32_t>(offsetof(KeyboardTest_tBD60D1BE6455A0A4A9C07AD079A7496BB93B93E8, ___keyboard_4)); }
	inline NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * get_keyboard_4() const { return ___keyboard_4; }
	inline NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A ** get_address_of_keyboard_4() { return &___keyboard_4; }
	inline void set_keyboard_4(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * value)
	{
		___keyboard_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyboard_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler
struct  BaseFocusHandler_t196351AEAFABA04AA1A8A0CB0A9ACA8E28E7492D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler::focusEnabled
	bool ___focusEnabled_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler::<Focusers>k__BackingField
	List_1_tD30D1EA6B84519E566D4E7728D8BA2E127947D27 * ___U3CFocusersU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_focusEnabled_4() { return static_cast<int32_t>(offsetof(BaseFocusHandler_t196351AEAFABA04AA1A8A0CB0A9ACA8E28E7492D, ___focusEnabled_4)); }
	inline bool get_focusEnabled_4() const { return ___focusEnabled_4; }
	inline bool* get_address_of_focusEnabled_4() { return &___focusEnabled_4; }
	inline void set_focusEnabled_4(bool value)
	{
		___focusEnabled_4 = value;
	}

	inline static int32_t get_offset_of_U3CFocusersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseFocusHandler_t196351AEAFABA04AA1A8A0CB0A9ACA8E28E7492D, ___U3CFocusersU3Ek__BackingField_5)); }
	inline List_1_tD30D1EA6B84519E566D4E7728D8BA2E127947D27 * get_U3CFocusersU3Ek__BackingField_5() const { return ___U3CFocusersU3Ek__BackingField_5; }
	inline List_1_tD30D1EA6B84519E566D4E7728D8BA2E127947D27 ** get_address_of_U3CFocusersU3Ek__BackingField_5() { return &___U3CFocusersU3Ek__BackingField_5; }
	inline void set_U3CFocusersU3Ek__BackingField_5(List_1_tD30D1EA6B84519E566D4E7728D8BA2E127947D27 * value)
	{
		___U3CFocusersU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusersU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct  InputEventData_1_t081849D32B71D6F09C07B3F13DCB927CFB143E1F  : public InputEventData_t89864BBA5E54327F758CE7579CAAE614F5AA8B3A
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	float ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t081849D32B71D6F09C07B3F13DCB927CFB143E1F, ___U3CInputDataU3Ek__BackingField_6)); }
	inline float get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline float* get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(float value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct  InputEventData_1_t0249906C6D032CEE3813326ED398A1081C3DAA20  : public InputEventData_t89864BBA5E54327F758CE7579CAAE614F5AA8B3A
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t0249906C6D032CEE3813326ED398A1081C3DAA20, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct  InputEventData_1_t53D51D39721120AD03070F3C3478413BBF97DC07  : public InputEventData_t89864BBA5E54327F758CE7579CAAE614F5AA8B3A
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t53D51D39721120AD03070F3C3478413BBF97DC07, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct  InputSystemGlobalHandlerListener_t3272AAAD81FE050E8C90BA8A30A8128EC2E9BD88  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_t3272AAAD81FE050E8C90BA8A30A8128EC2E9BD88, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PinchSlider
struct  PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::thumbRoot
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___thumbRoot_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderValue
	float ___sliderValue_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::trackVisuals
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___trackVisuals_6;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::tickMarks
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___tickMarks_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::thumbVisuals
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___thumbVisuals_8;
	// Microsoft.MixedReality.Toolkit.UI.SliderAxis Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderAxis
	int32_t ___sliderAxis_9;
	// System.Nullable`1<Microsoft.MixedReality.Toolkit.UI.SliderAxis> Microsoft.MixedReality.Toolkit.UI.PinchSlider::previousSliderAxis
	Nullable_1_t5504F4622E7BC1ABB425BB32F3BCD2EDE04238F1  ___previousSliderAxis_10;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderStartDistance
	float ___sliderStartDistance_11;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderEndDistance
	float ___sliderEndDistance_12;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnValueUpdated
	SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * ___OnValueUpdated_13;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnInteractionStarted
	SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * ___OnInteractionStarted_14;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnInteractionEnded
	SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * ___OnInteractionEnded_15;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnHoverEntered
	SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * ___OnHoverEntered_16;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnHoverExited
	SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * ___OnHoverExited_17;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::startSliderValue
	float ___startSliderValue_18;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.PinchSlider::startPointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPointerPosition_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.PinchSlider::startSliderPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startSliderPosition_20;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.PinchSlider::activePointer
	RuntimeObject* ___activePointer_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderThumbOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___sliderThumbOffset_22;

public:
	inline static int32_t get_offset_of_thumbRoot_4() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___thumbRoot_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_thumbRoot_4() const { return ___thumbRoot_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_thumbRoot_4() { return &___thumbRoot_4; }
	inline void set_thumbRoot_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___thumbRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbRoot_4), (void*)value);
	}

	inline static int32_t get_offset_of_sliderValue_5() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___sliderValue_5)); }
	inline float get_sliderValue_5() const { return ___sliderValue_5; }
	inline float* get_address_of_sliderValue_5() { return &___sliderValue_5; }
	inline void set_sliderValue_5(float value)
	{
		___sliderValue_5 = value;
	}

	inline static int32_t get_offset_of_trackVisuals_6() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___trackVisuals_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_trackVisuals_6() const { return ___trackVisuals_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_trackVisuals_6() { return &___trackVisuals_6; }
	inline void set_trackVisuals_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___trackVisuals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackVisuals_6), (void*)value);
	}

	inline static int32_t get_offset_of_tickMarks_7() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___tickMarks_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_tickMarks_7() const { return ___tickMarks_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_tickMarks_7() { return &___tickMarks_7; }
	inline void set_tickMarks_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___tickMarks_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tickMarks_7), (void*)value);
	}

	inline static int32_t get_offset_of_thumbVisuals_8() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___thumbVisuals_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_thumbVisuals_8() const { return ___thumbVisuals_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_thumbVisuals_8() { return &___thumbVisuals_8; }
	inline void set_thumbVisuals_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___thumbVisuals_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbVisuals_8), (void*)value);
	}

	inline static int32_t get_offset_of_sliderAxis_9() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___sliderAxis_9)); }
	inline int32_t get_sliderAxis_9() const { return ___sliderAxis_9; }
	inline int32_t* get_address_of_sliderAxis_9() { return &___sliderAxis_9; }
	inline void set_sliderAxis_9(int32_t value)
	{
		___sliderAxis_9 = value;
	}

	inline static int32_t get_offset_of_previousSliderAxis_10() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___previousSliderAxis_10)); }
	inline Nullable_1_t5504F4622E7BC1ABB425BB32F3BCD2EDE04238F1  get_previousSliderAxis_10() const { return ___previousSliderAxis_10; }
	inline Nullable_1_t5504F4622E7BC1ABB425BB32F3BCD2EDE04238F1 * get_address_of_previousSliderAxis_10() { return &___previousSliderAxis_10; }
	inline void set_previousSliderAxis_10(Nullable_1_t5504F4622E7BC1ABB425BB32F3BCD2EDE04238F1  value)
	{
		___previousSliderAxis_10 = value;
	}

	inline static int32_t get_offset_of_sliderStartDistance_11() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___sliderStartDistance_11)); }
	inline float get_sliderStartDistance_11() const { return ___sliderStartDistance_11; }
	inline float* get_address_of_sliderStartDistance_11() { return &___sliderStartDistance_11; }
	inline void set_sliderStartDistance_11(float value)
	{
		___sliderStartDistance_11 = value;
	}

	inline static int32_t get_offset_of_sliderEndDistance_12() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___sliderEndDistance_12)); }
	inline float get_sliderEndDistance_12() const { return ___sliderEndDistance_12; }
	inline float* get_address_of_sliderEndDistance_12() { return &___sliderEndDistance_12; }
	inline void set_sliderEndDistance_12(float value)
	{
		___sliderEndDistance_12 = value;
	}

	inline static int32_t get_offset_of_OnValueUpdated_13() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___OnValueUpdated_13)); }
	inline SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * get_OnValueUpdated_13() const { return ___OnValueUpdated_13; }
	inline SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 ** get_address_of_OnValueUpdated_13() { return &___OnValueUpdated_13; }
	inline void set_OnValueUpdated_13(SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * value)
	{
		___OnValueUpdated_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValueUpdated_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnInteractionStarted_14() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___OnInteractionStarted_14)); }
	inline SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * get_OnInteractionStarted_14() const { return ___OnInteractionStarted_14; }
	inline SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 ** get_address_of_OnInteractionStarted_14() { return &___OnInteractionStarted_14; }
	inline void set_OnInteractionStarted_14(SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * value)
	{
		___OnInteractionStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInteractionStarted_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnInteractionEnded_15() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___OnInteractionEnded_15)); }
	inline SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * get_OnInteractionEnded_15() const { return ___OnInteractionEnded_15; }
	inline SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 ** get_address_of_OnInteractionEnded_15() { return &___OnInteractionEnded_15; }
	inline void set_OnInteractionEnded_15(SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * value)
	{
		___OnInteractionEnded_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInteractionEnded_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnHoverEntered_16() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___OnHoverEntered_16)); }
	inline SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * get_OnHoverEntered_16() const { return ___OnHoverEntered_16; }
	inline SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 ** get_address_of_OnHoverEntered_16() { return &___OnHoverEntered_16; }
	inline void set_OnHoverEntered_16(SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * value)
	{
		___OnHoverEntered_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHoverEntered_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnHoverExited_17() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___OnHoverExited_17)); }
	inline SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * get_OnHoverExited_17() const { return ___OnHoverExited_17; }
	inline SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 ** get_address_of_OnHoverExited_17() { return &___OnHoverExited_17; }
	inline void set_OnHoverExited_17(SliderEvent_t202C2179E103251B48495C745D2CD891F28B2DC0 * value)
	{
		___OnHoverExited_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHoverExited_17), (void*)value);
	}

	inline static int32_t get_offset_of_startSliderValue_18() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___startSliderValue_18)); }
	inline float get_startSliderValue_18() const { return ___startSliderValue_18; }
	inline float* get_address_of_startSliderValue_18() { return &___startSliderValue_18; }
	inline void set_startSliderValue_18(float value)
	{
		___startSliderValue_18 = value;
	}

	inline static int32_t get_offset_of_startPointerPosition_19() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___startPointerPosition_19)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startPointerPosition_19() const { return ___startPointerPosition_19; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startPointerPosition_19() { return &___startPointerPosition_19; }
	inline void set_startPointerPosition_19(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startPointerPosition_19 = value;
	}

	inline static int32_t get_offset_of_startSliderPosition_20() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___startSliderPosition_20)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startSliderPosition_20() const { return ___startSliderPosition_20; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startSliderPosition_20() { return &___startSliderPosition_20; }
	inline void set_startSliderPosition_20(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startSliderPosition_20 = value;
	}

	inline static int32_t get_offset_of_activePointer_21() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___activePointer_21)); }
	inline RuntimeObject* get_activePointer_21() const { return ___activePointer_21; }
	inline RuntimeObject** get_address_of_activePointer_21() { return &___activePointer_21; }
	inline void set_activePointer_21(RuntimeObject* value)
	{
		___activePointer_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointer_21), (void*)value);
	}

	inline static int32_t get_offset_of_sliderThumbOffset_22() { return static_cast<int32_t>(offsetof(PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999, ___sliderThumbOffset_22)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_sliderThumbOffset_22() const { return ___sliderThumbOffset_22; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_sliderThumbOffset_22() { return &___sliderThumbOffset_22; }
	inline void set_sliderThumbOffset_22(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___sliderThumbOffset_22 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Experimental.Dwell.CustomDwellHandler
struct  CustomDwellHandler_tC3D6CECDBC3171DFEEFC7BF9FE6FF990B83F46CC  : public DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Experimental.Dwell.InstantDwellSample
struct  InstantDwellSample_t6CD5706E7E273384C994AA8980F519E70C440D30  : public BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Experimental.Dwell.InstantDwellSample::listItems
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___listItems_8;

public:
	inline static int32_t get_offset_of_listItems_8() { return static_cast<int32_t>(offsetof(InstantDwellSample_t6CD5706E7E273384C994AA8980F519E70C440D30, ___listItems_8)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_listItems_8() const { return ___listItems_8; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_listItems_8() { return &___listItems_8; }
	inline void set_listItems_8(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___listItems_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listItems_8), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.Dwell.ListItemDwell
struct  ListItemDwell_t4A8DD4AEA1AB25990A032042C4C6AA04AA89EF2A  : public BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853
{
public:
	// TMPro.TextMeshProUGUI Microsoft.MixedReality.Toolkit.Experimental.Dwell.ListItemDwell::itemName
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___itemName_8;
	// TMPro.TextMeshProUGUI Microsoft.MixedReality.Toolkit.Experimental.Dwell.ListItemDwell::displayLabel
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___displayLabel_9;

public:
	inline static int32_t get_offset_of_itemName_8() { return static_cast<int32_t>(offsetof(ListItemDwell_t4A8DD4AEA1AB25990A032042C4C6AA04AA89EF2A, ___itemName_8)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_itemName_8() const { return ___itemName_8; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_itemName_8() { return &___itemName_8; }
	inline void set_itemName_8(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___itemName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemName_8), (void*)value);
	}

	inline static int32_t get_offset_of_displayLabel_9() { return static_cast<int32_t>(offsetof(ListItemDwell_t4A8DD4AEA1AB25990A032042C4C6AA04AA89EF2A, ___displayLabel_9)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_displayLabel_9() const { return ___displayLabel_9; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_displayLabel_9() { return &___displayLabel_9; }
	inline void set_displayLabel_9(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___displayLabel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayLabel_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample
struct  ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188  : public BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853
{
public:
	// TMPro.TextMeshProUGUI Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::dwellStatus
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___dwellStatus_8;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::buttonBackground
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___buttonBackground_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::isDwellEnabled
	bool ___isDwellEnabled_10;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::dwellOnColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___dwellOnColor_11;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::dwellOffColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___dwellOffColor_12;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::dwellIntendedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___dwellIntendedColor_13;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::dwellVisualCancelDurationInFrames
	float ___dwellVisualCancelDurationInFrames_14;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::cancelStartScale
	float ___cancelStartScale_15;

public:
	inline static int32_t get_offset_of_dwellStatus_8() { return static_cast<int32_t>(offsetof(ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188, ___dwellStatus_8)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_dwellStatus_8() const { return ___dwellStatus_8; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_dwellStatus_8() { return &___dwellStatus_8; }
	inline void set_dwellStatus_8(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___dwellStatus_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dwellStatus_8), (void*)value);
	}

	inline static int32_t get_offset_of_buttonBackground_9() { return static_cast<int32_t>(offsetof(ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188, ___buttonBackground_9)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_buttonBackground_9() const { return ___buttonBackground_9; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_buttonBackground_9() { return &___buttonBackground_9; }
	inline void set_buttonBackground_9(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___buttonBackground_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonBackground_9), (void*)value);
	}

	inline static int32_t get_offset_of_isDwellEnabled_10() { return static_cast<int32_t>(offsetof(ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188, ___isDwellEnabled_10)); }
	inline bool get_isDwellEnabled_10() const { return ___isDwellEnabled_10; }
	inline bool* get_address_of_isDwellEnabled_10() { return &___isDwellEnabled_10; }
	inline void set_isDwellEnabled_10(bool value)
	{
		___isDwellEnabled_10 = value;
	}

	inline static int32_t get_offset_of_dwellOnColor_11() { return static_cast<int32_t>(offsetof(ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188, ___dwellOnColor_11)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_dwellOnColor_11() const { return ___dwellOnColor_11; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_dwellOnColor_11() { return &___dwellOnColor_11; }
	inline void set_dwellOnColor_11(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___dwellOnColor_11 = value;
	}

	inline static int32_t get_offset_of_dwellOffColor_12() { return static_cast<int32_t>(offsetof(ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188, ___dwellOffColor_12)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_dwellOffColor_12() const { return ___dwellOffColor_12; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_dwellOffColor_12() { return &___dwellOffColor_12; }
	inline void set_dwellOffColor_12(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___dwellOffColor_12 = value;
	}

	inline static int32_t get_offset_of_dwellIntendedColor_13() { return static_cast<int32_t>(offsetof(ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188, ___dwellIntendedColor_13)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_dwellIntendedColor_13() const { return ___dwellIntendedColor_13; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_dwellIntendedColor_13() { return &___dwellIntendedColor_13; }
	inline void set_dwellIntendedColor_13(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___dwellIntendedColor_13 = value;
	}

	inline static int32_t get_offset_of_dwellVisualCancelDurationInFrames_14() { return static_cast<int32_t>(offsetof(ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188, ___dwellVisualCancelDurationInFrames_14)); }
	inline float get_dwellVisualCancelDurationInFrames_14() const { return ___dwellVisualCancelDurationInFrames_14; }
	inline float* get_address_of_dwellVisualCancelDurationInFrames_14() { return &___dwellVisualCancelDurationInFrames_14; }
	inline void set_dwellVisualCancelDurationInFrames_14(float value)
	{
		___dwellVisualCancelDurationInFrames_14 = value;
	}

	inline static int32_t get_offset_of_cancelStartScale_15() { return static_cast<int32_t>(offsetof(ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188, ___cancelStartScale_15)); }
	inline float get_cancelStartScale_15() const { return ___cancelStartScale_15; }
	inline float* get_address_of_cancelStartScale_15() { return &___cancelStartScale_15; }
	inline void set_cancelStartScale_15(float value)
	{
		___cancelStartScale_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard
struct  NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A  : public InputSystemGlobalHandlerListener_t3272AAAD81FE050E8C90BA8A30A8128EC2E9BD88
{
public:
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnTextSubmitted
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___OnTextSubmitted_6;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnTextUpdated
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___OnTextUpdated_7;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnClosed
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___OnClosed_8;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnPrevious
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___OnPrevious_9;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnNext
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___OnNext_10;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnPlacement
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___OnPlacement_11;
	// TMPro.TMP_InputField Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::InputField
	TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * ___InputField_12;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::InputFieldSlide
	AxisSlider_t4B508D589FD86E46D3CE606CC43C12AE58E927FD * ___InputFieldSlide_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::SliderEnabled
	bool ___SliderEnabled_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::SubmitOnEnter
	bool ___SubmitOnEnter_15;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::AlphaKeyboard
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___AlphaKeyboard_16;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::SymbolKeyboard
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___SymbolKeyboard_17;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::AlphaSubKeys
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___AlphaSubKeys_18;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::AlphaWebKeys
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___AlphaWebKeys_19;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::AlphaMailKeys
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___AlphaMailKeys_20;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard_LayoutType Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_LastKeyboardLayout
	int32_t ___m_LastKeyboardLayout_21;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_MaxScale
	float ___m_MaxScale_22;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_MinScale
	float ___m_MinScale_23;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_MaxDistance
	float ___m_MaxDistance_24;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_MinDistance
	float ___m_MinDistance_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::CloseOnInactivity
	bool ___CloseOnInactivity_26;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::CloseOnInactivityTime
	float ___CloseOnInactivityTime_27;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::_closingTime
	float ____closingTime_28;
	// System.Action`1<System.Boolean> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnKeyboardShifted
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___OnKeyboardShifted_29;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnKeyboardValueKeyPressed
	Action_1_t1E00EC8B4CC4A3B70AF03A34346EC09BC6D988EA * ___OnKeyboardValueKeyPressed_30;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnKeyboardFunctionKeyPressed
	Action_1_tF76DF283FF9FFFE71029D3671968356C526C3A8E * ___OnKeyboardFunctionKeyPressed_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_IsShifted
	bool ___m_IsShifted_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_IsCapslocked
	bool ___m_IsCapslocked_33;
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_CaretPosition
	int32_t ___m_CaretPosition_34;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_StartingScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_StartingScale_35;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_ObjectBounds
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_ObjectBounds_36;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::_defaultColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ____defaultColor_37;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::_recordImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ____recordImage_38;
	// UnityEngine.AudioSource Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::_audioSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ____audioSource_39;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationSystem Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::dictationSystem
	RuntimeObject* ___dictationSystem_40;

public:
	inline static int32_t get_offset_of_OnTextSubmitted_6() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___OnTextSubmitted_6)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_OnTextSubmitted_6() const { return ___OnTextSubmitted_6; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_OnTextSubmitted_6() { return &___OnTextSubmitted_6; }
	inline void set_OnTextSubmitted_6(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___OnTextSubmitted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTextSubmitted_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnTextUpdated_7() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___OnTextUpdated_7)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_OnTextUpdated_7() const { return ___OnTextUpdated_7; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_OnTextUpdated_7() { return &___OnTextUpdated_7; }
	inline void set_OnTextUpdated_7(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___OnTextUpdated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTextUpdated_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnClosed_8() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___OnClosed_8)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_OnClosed_8() const { return ___OnClosed_8; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_OnClosed_8() { return &___OnClosed_8; }
	inline void set_OnClosed_8(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___OnClosed_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClosed_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnPrevious_9() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___OnPrevious_9)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_OnPrevious_9() const { return ___OnPrevious_9; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_OnPrevious_9() { return &___OnPrevious_9; }
	inline void set_OnPrevious_9(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___OnPrevious_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPrevious_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnNext_10() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___OnNext_10)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_OnNext_10() const { return ___OnNext_10; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_OnNext_10() { return &___OnNext_10; }
	inline void set_OnNext_10(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___OnNext_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnNext_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnPlacement_11() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___OnPlacement_11)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_OnPlacement_11() const { return ___OnPlacement_11; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_OnPlacement_11() { return &___OnPlacement_11; }
	inline void set_OnPlacement_11(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___OnPlacement_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPlacement_11), (void*)value);
	}

	inline static int32_t get_offset_of_InputField_12() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___InputField_12)); }
	inline TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * get_InputField_12() const { return ___InputField_12; }
	inline TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB ** get_address_of_InputField_12() { return &___InputField_12; }
	inline void set_InputField_12(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * value)
	{
		___InputField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputField_12), (void*)value);
	}

	inline static int32_t get_offset_of_InputFieldSlide_13() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___InputFieldSlide_13)); }
	inline AxisSlider_t4B508D589FD86E46D3CE606CC43C12AE58E927FD * get_InputFieldSlide_13() const { return ___InputFieldSlide_13; }
	inline AxisSlider_t4B508D589FD86E46D3CE606CC43C12AE58E927FD ** get_address_of_InputFieldSlide_13() { return &___InputFieldSlide_13; }
	inline void set_InputFieldSlide_13(AxisSlider_t4B508D589FD86E46D3CE606CC43C12AE58E927FD * value)
	{
		___InputFieldSlide_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputFieldSlide_13), (void*)value);
	}

	inline static int32_t get_offset_of_SliderEnabled_14() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___SliderEnabled_14)); }
	inline bool get_SliderEnabled_14() const { return ___SliderEnabled_14; }
	inline bool* get_address_of_SliderEnabled_14() { return &___SliderEnabled_14; }
	inline void set_SliderEnabled_14(bool value)
	{
		___SliderEnabled_14 = value;
	}

	inline static int32_t get_offset_of_SubmitOnEnter_15() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___SubmitOnEnter_15)); }
	inline bool get_SubmitOnEnter_15() const { return ___SubmitOnEnter_15; }
	inline bool* get_address_of_SubmitOnEnter_15() { return &___SubmitOnEnter_15; }
	inline void set_SubmitOnEnter_15(bool value)
	{
		___SubmitOnEnter_15 = value;
	}

	inline static int32_t get_offset_of_AlphaKeyboard_16() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___AlphaKeyboard_16)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_AlphaKeyboard_16() const { return ___AlphaKeyboard_16; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_AlphaKeyboard_16() { return &___AlphaKeyboard_16; }
	inline void set_AlphaKeyboard_16(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___AlphaKeyboard_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphaKeyboard_16), (void*)value);
	}

	inline static int32_t get_offset_of_SymbolKeyboard_17() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___SymbolKeyboard_17)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_SymbolKeyboard_17() const { return ___SymbolKeyboard_17; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_SymbolKeyboard_17() { return &___SymbolKeyboard_17; }
	inline void set_SymbolKeyboard_17(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___SymbolKeyboard_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SymbolKeyboard_17), (void*)value);
	}

	inline static int32_t get_offset_of_AlphaSubKeys_18() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___AlphaSubKeys_18)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_AlphaSubKeys_18() const { return ___AlphaSubKeys_18; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_AlphaSubKeys_18() { return &___AlphaSubKeys_18; }
	inline void set_AlphaSubKeys_18(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___AlphaSubKeys_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphaSubKeys_18), (void*)value);
	}

	inline static int32_t get_offset_of_AlphaWebKeys_19() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___AlphaWebKeys_19)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_AlphaWebKeys_19() const { return ___AlphaWebKeys_19; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_AlphaWebKeys_19() { return &___AlphaWebKeys_19; }
	inline void set_AlphaWebKeys_19(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___AlphaWebKeys_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphaWebKeys_19), (void*)value);
	}

	inline static int32_t get_offset_of_AlphaMailKeys_20() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___AlphaMailKeys_20)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_AlphaMailKeys_20() const { return ___AlphaMailKeys_20; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_AlphaMailKeys_20() { return &___AlphaMailKeys_20; }
	inline void set_AlphaMailKeys_20(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___AlphaMailKeys_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphaMailKeys_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastKeyboardLayout_21() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___m_LastKeyboardLayout_21)); }
	inline int32_t get_m_LastKeyboardLayout_21() const { return ___m_LastKeyboardLayout_21; }
	inline int32_t* get_address_of_m_LastKeyboardLayout_21() { return &___m_LastKeyboardLayout_21; }
	inline void set_m_LastKeyboardLayout_21(int32_t value)
	{
		___m_LastKeyboardLayout_21 = value;
	}

	inline static int32_t get_offset_of_m_MaxScale_22() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___m_MaxScale_22)); }
	inline float get_m_MaxScale_22() const { return ___m_MaxScale_22; }
	inline float* get_address_of_m_MaxScale_22() { return &___m_MaxScale_22; }
	inline void set_m_MaxScale_22(float value)
	{
		___m_MaxScale_22 = value;
	}

	inline static int32_t get_offset_of_m_MinScale_23() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___m_MinScale_23)); }
	inline float get_m_MinScale_23() const { return ___m_MinScale_23; }
	inline float* get_address_of_m_MinScale_23() { return &___m_MinScale_23; }
	inline void set_m_MinScale_23(float value)
	{
		___m_MinScale_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxDistance_24() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___m_MaxDistance_24)); }
	inline float get_m_MaxDistance_24() const { return ___m_MaxDistance_24; }
	inline float* get_address_of_m_MaxDistance_24() { return &___m_MaxDistance_24; }
	inline void set_m_MaxDistance_24(float value)
	{
		___m_MaxDistance_24 = value;
	}

	inline static int32_t get_offset_of_m_MinDistance_25() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___m_MinDistance_25)); }
	inline float get_m_MinDistance_25() const { return ___m_MinDistance_25; }
	inline float* get_address_of_m_MinDistance_25() { return &___m_MinDistance_25; }
	inline void set_m_MinDistance_25(float value)
	{
		___m_MinDistance_25 = value;
	}

	inline static int32_t get_offset_of_CloseOnInactivity_26() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___CloseOnInactivity_26)); }
	inline bool get_CloseOnInactivity_26() const { return ___CloseOnInactivity_26; }
	inline bool* get_address_of_CloseOnInactivity_26() { return &___CloseOnInactivity_26; }
	inline void set_CloseOnInactivity_26(bool value)
	{
		___CloseOnInactivity_26 = value;
	}

	inline static int32_t get_offset_of_CloseOnInactivityTime_27() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___CloseOnInactivityTime_27)); }
	inline float get_CloseOnInactivityTime_27() const { return ___CloseOnInactivityTime_27; }
	inline float* get_address_of_CloseOnInactivityTime_27() { return &___CloseOnInactivityTime_27; }
	inline void set_CloseOnInactivityTime_27(float value)
	{
		___CloseOnInactivityTime_27 = value;
	}

	inline static int32_t get_offset_of__closingTime_28() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ____closingTime_28)); }
	inline float get__closingTime_28() const { return ____closingTime_28; }
	inline float* get_address_of__closingTime_28() { return &____closingTime_28; }
	inline void set__closingTime_28(float value)
	{
		____closingTime_28 = value;
	}

	inline static int32_t get_offset_of_OnKeyboardShifted_29() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___OnKeyboardShifted_29)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_OnKeyboardShifted_29() const { return ___OnKeyboardShifted_29; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_OnKeyboardShifted_29() { return &___OnKeyboardShifted_29; }
	inline void set_OnKeyboardShifted_29(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___OnKeyboardShifted_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnKeyboardShifted_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnKeyboardValueKeyPressed_30() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___OnKeyboardValueKeyPressed_30)); }
	inline Action_1_t1E00EC8B4CC4A3B70AF03A34346EC09BC6D988EA * get_OnKeyboardValueKeyPressed_30() const { return ___OnKeyboardValueKeyPressed_30; }
	inline Action_1_t1E00EC8B4CC4A3B70AF03A34346EC09BC6D988EA ** get_address_of_OnKeyboardValueKeyPressed_30() { return &___OnKeyboardValueKeyPressed_30; }
	inline void set_OnKeyboardValueKeyPressed_30(Action_1_t1E00EC8B4CC4A3B70AF03A34346EC09BC6D988EA * value)
	{
		___OnKeyboardValueKeyPressed_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnKeyboardValueKeyPressed_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnKeyboardFunctionKeyPressed_31() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___OnKeyboardFunctionKeyPressed_31)); }
	inline Action_1_tF76DF283FF9FFFE71029D3671968356C526C3A8E * get_OnKeyboardFunctionKeyPressed_31() const { return ___OnKeyboardFunctionKeyPressed_31; }
	inline Action_1_tF76DF283FF9FFFE71029D3671968356C526C3A8E ** get_address_of_OnKeyboardFunctionKeyPressed_31() { return &___OnKeyboardFunctionKeyPressed_31; }
	inline void set_OnKeyboardFunctionKeyPressed_31(Action_1_tF76DF283FF9FFFE71029D3671968356C526C3A8E * value)
	{
		___OnKeyboardFunctionKeyPressed_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnKeyboardFunctionKeyPressed_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsShifted_32() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___m_IsShifted_32)); }
	inline bool get_m_IsShifted_32() const { return ___m_IsShifted_32; }
	inline bool* get_address_of_m_IsShifted_32() { return &___m_IsShifted_32; }
	inline void set_m_IsShifted_32(bool value)
	{
		___m_IsShifted_32 = value;
	}

	inline static int32_t get_offset_of_m_IsCapslocked_33() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___m_IsCapslocked_33)); }
	inline bool get_m_IsCapslocked_33() const { return ___m_IsCapslocked_33; }
	inline bool* get_address_of_m_IsCapslocked_33() { return &___m_IsCapslocked_33; }
	inline void set_m_IsCapslocked_33(bool value)
	{
		___m_IsCapslocked_33 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_34() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___m_CaretPosition_34)); }
	inline int32_t get_m_CaretPosition_34() const { return ___m_CaretPosition_34; }
	inline int32_t* get_address_of_m_CaretPosition_34() { return &___m_CaretPosition_34; }
	inline void set_m_CaretPosition_34(int32_t value)
	{
		___m_CaretPosition_34 = value;
	}

	inline static int32_t get_offset_of_m_StartingScale_35() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___m_StartingScale_35)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_StartingScale_35() const { return ___m_StartingScale_35; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_StartingScale_35() { return &___m_StartingScale_35; }
	inline void set_m_StartingScale_35(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_StartingScale_35 = value;
	}

	inline static int32_t get_offset_of_m_ObjectBounds_36() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___m_ObjectBounds_36)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_ObjectBounds_36() const { return ___m_ObjectBounds_36; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_ObjectBounds_36() { return &___m_ObjectBounds_36; }
	inline void set_m_ObjectBounds_36(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_ObjectBounds_36 = value;
	}

	inline static int32_t get_offset_of__defaultColor_37() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ____defaultColor_37)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get__defaultColor_37() const { return ____defaultColor_37; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of__defaultColor_37() { return &____defaultColor_37; }
	inline void set__defaultColor_37(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		____defaultColor_37 = value;
	}

	inline static int32_t get_offset_of__recordImage_38() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ____recordImage_38)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get__recordImage_38() const { return ____recordImage_38; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of__recordImage_38() { return &____recordImage_38; }
	inline void set__recordImage_38(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		____recordImage_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recordImage_38), (void*)value);
	}

	inline static int32_t get_offset_of__audioSource_39() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ____audioSource_39)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get__audioSource_39() const { return ____audioSource_39; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of__audioSource_39() { return &____audioSource_39; }
	inline void set__audioSource_39(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		____audioSource_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSource_39), (void*)value);
	}

	inline static int32_t get_offset_of_dictationSystem_40() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A, ___dictationSystem_40)); }
	inline RuntimeObject* get_dictationSystem_40() const { return ___dictationSystem_40; }
	inline RuntimeObject** get_address_of_dictationSystem_40() { return &___dictationSystem_40; }
	inline void set_dictationSystem_40(RuntimeObject* value)
	{
		___dictationSystem_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationSystem_40), (void*)value);
	}
};

struct NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::<Instance>k__BackingField
	NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * ___U3CInstanceU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A_StaticFields, ___U3CInstanceU3Ek__BackingField_5)); }
	inline NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * get_U3CInstanceU3Ek__BackingField_5() const { return ___U3CInstanceU3Ek__BackingField_5; }
	inline NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A ** get_address_of_U3CInstanceU3Ek__BackingField_5() { return &___U3CInstanceU3Ek__BackingField_5; }
	inline void set_U3CInstanceU3Ek__BackingField_5(NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * value)
	{
		___U3CInstanceU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct  HandTrackingInputEventData_t22545DD1196AA39351413C3E71A83E68722814F6  : public InputEventData_1_t53D51D39721120AD03070F3C3478413BBF97DC07
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(HandTrackingInputEventData_t22545DD1196AA39351413C3E71A83E68722814F6, ___U3CControllerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_7() const { return ___U3CControllerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_7() { return &___U3CControllerU3Ek__BackingField_7; }
	inline void set_U3CControllerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom
struct  HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E  : public BaseFocusHandler_t196351AEAFABA04AA1A8A0CB0A9ACA8E28E7492D
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::isEnabled
	bool ___isEnabled_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::enableZoom
	bool ___enableZoom_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::lockHorizontal
	bool ___lockHorizontal_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::lockVertical
	bool ___lockVertical_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::unlimitedPan
	bool ___unlimitedPan_10;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::maxPanHorizontal
	float ___maxPanHorizontal_11;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::maxPanVertical
	float ___maxPanVertical_12;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::minScale
	float ___minScale_13;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::maxScale
	float ___maxScale_14;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::momentumHorizontal
	float ___momentumHorizontal_15;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::momentumVertical
	float ___momentumVertical_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::panZoomSmoothing
	float ___panZoomSmoothing_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::centerPoint
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___centerPoint_18;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::leftPoint
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___leftPoint_19;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::rightPoint
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___rightPoint_20;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::proximityLightCenterColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___proximityLightCenterColor_21;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::currentScale
	float ___currentScale_22;
	// Microsoft.MixedReality.Toolkit.UI.PanUnityEvent Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::PanStarted
	PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * ___PanStarted_23;
	// Microsoft.MixedReality.Toolkit.UI.PanUnityEvent Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::PanStopped
	PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * ___PanStopped_24;
	// Microsoft.MixedReality.Toolkit.UI.PanUnityEvent Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::PanUpdated
	PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * ___PanUpdated_25;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_26;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::meshFilter
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___meshFilter_27;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::boxCollider
	BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider_28;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::previousContactRatio
	float ___previousContactRatio_29;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::initialTouchDistance
	float ___initialTouchDistance_30;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::lastTouchDistance
	float ___lastTouchDistance_31;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::totalUVOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___totalUVOffset_32;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::totalUVScale
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___totalUVScale_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::affordancesVisible
	bool ___affordancesVisible_34;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::runningAverageSmoothing
	float ___runningAverageSmoothing_35;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_37;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::proximityLightCenterColorID
	int32_t ___proximityLightCenterColorID_38;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::defaultProximityLightCenterColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___defaultProximityLightCenterColor_39;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::unTransformedUVs
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___unTransformedUVs_40;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom_HandPanData> Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::handDataMap
	Dictionary_2_t29AD4F6F068EA5B4E17B8989CEF3A2F9C3F3B636 * ___handDataMap_41;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::uvs
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___uvs_42;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::uvsOrig
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___uvsOrig_43;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom::oldIsTargetPositionLockedOnFocusLock
	bool ___oldIsTargetPositionLockedOnFocusLock_44;

public:
	inline static int32_t get_offset_of_isEnabled_6() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___isEnabled_6)); }
	inline bool get_isEnabled_6() const { return ___isEnabled_6; }
	inline bool* get_address_of_isEnabled_6() { return &___isEnabled_6; }
	inline void set_isEnabled_6(bool value)
	{
		___isEnabled_6 = value;
	}

	inline static int32_t get_offset_of_enableZoom_7() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___enableZoom_7)); }
	inline bool get_enableZoom_7() const { return ___enableZoom_7; }
	inline bool* get_address_of_enableZoom_7() { return &___enableZoom_7; }
	inline void set_enableZoom_7(bool value)
	{
		___enableZoom_7 = value;
	}

	inline static int32_t get_offset_of_lockHorizontal_8() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___lockHorizontal_8)); }
	inline bool get_lockHorizontal_8() const { return ___lockHorizontal_8; }
	inline bool* get_address_of_lockHorizontal_8() { return &___lockHorizontal_8; }
	inline void set_lockHorizontal_8(bool value)
	{
		___lockHorizontal_8 = value;
	}

	inline static int32_t get_offset_of_lockVertical_9() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___lockVertical_9)); }
	inline bool get_lockVertical_9() const { return ___lockVertical_9; }
	inline bool* get_address_of_lockVertical_9() { return &___lockVertical_9; }
	inline void set_lockVertical_9(bool value)
	{
		___lockVertical_9 = value;
	}

	inline static int32_t get_offset_of_unlimitedPan_10() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___unlimitedPan_10)); }
	inline bool get_unlimitedPan_10() const { return ___unlimitedPan_10; }
	inline bool* get_address_of_unlimitedPan_10() { return &___unlimitedPan_10; }
	inline void set_unlimitedPan_10(bool value)
	{
		___unlimitedPan_10 = value;
	}

	inline static int32_t get_offset_of_maxPanHorizontal_11() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___maxPanHorizontal_11)); }
	inline float get_maxPanHorizontal_11() const { return ___maxPanHorizontal_11; }
	inline float* get_address_of_maxPanHorizontal_11() { return &___maxPanHorizontal_11; }
	inline void set_maxPanHorizontal_11(float value)
	{
		___maxPanHorizontal_11 = value;
	}

	inline static int32_t get_offset_of_maxPanVertical_12() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___maxPanVertical_12)); }
	inline float get_maxPanVertical_12() const { return ___maxPanVertical_12; }
	inline float* get_address_of_maxPanVertical_12() { return &___maxPanVertical_12; }
	inline void set_maxPanVertical_12(float value)
	{
		___maxPanVertical_12 = value;
	}

	inline static int32_t get_offset_of_minScale_13() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___minScale_13)); }
	inline float get_minScale_13() const { return ___minScale_13; }
	inline float* get_address_of_minScale_13() { return &___minScale_13; }
	inline void set_minScale_13(float value)
	{
		___minScale_13 = value;
	}

	inline static int32_t get_offset_of_maxScale_14() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___maxScale_14)); }
	inline float get_maxScale_14() const { return ___maxScale_14; }
	inline float* get_address_of_maxScale_14() { return &___maxScale_14; }
	inline void set_maxScale_14(float value)
	{
		___maxScale_14 = value;
	}

	inline static int32_t get_offset_of_momentumHorizontal_15() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___momentumHorizontal_15)); }
	inline float get_momentumHorizontal_15() const { return ___momentumHorizontal_15; }
	inline float* get_address_of_momentumHorizontal_15() { return &___momentumHorizontal_15; }
	inline void set_momentumHorizontal_15(float value)
	{
		___momentumHorizontal_15 = value;
	}

	inline static int32_t get_offset_of_momentumVertical_16() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___momentumVertical_16)); }
	inline float get_momentumVertical_16() const { return ___momentumVertical_16; }
	inline float* get_address_of_momentumVertical_16() { return &___momentumVertical_16; }
	inline void set_momentumVertical_16(float value)
	{
		___momentumVertical_16 = value;
	}

	inline static int32_t get_offset_of_panZoomSmoothing_17() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___panZoomSmoothing_17)); }
	inline float get_panZoomSmoothing_17() const { return ___panZoomSmoothing_17; }
	inline float* get_address_of_panZoomSmoothing_17() { return &___panZoomSmoothing_17; }
	inline void set_panZoomSmoothing_17(float value)
	{
		___panZoomSmoothing_17 = value;
	}

	inline static int32_t get_offset_of_centerPoint_18() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___centerPoint_18)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_centerPoint_18() const { return ___centerPoint_18; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_centerPoint_18() { return &___centerPoint_18; }
	inline void set_centerPoint_18(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___centerPoint_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centerPoint_18), (void*)value);
	}

	inline static int32_t get_offset_of_leftPoint_19() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___leftPoint_19)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_leftPoint_19() const { return ___leftPoint_19; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_leftPoint_19() { return &___leftPoint_19; }
	inline void set_leftPoint_19(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___leftPoint_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftPoint_19), (void*)value);
	}

	inline static int32_t get_offset_of_rightPoint_20() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___rightPoint_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_rightPoint_20() const { return ___rightPoint_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_rightPoint_20() { return &___rightPoint_20; }
	inline void set_rightPoint_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___rightPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightPoint_20), (void*)value);
	}

	inline static int32_t get_offset_of_proximityLightCenterColor_21() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___proximityLightCenterColor_21)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_proximityLightCenterColor_21() const { return ___proximityLightCenterColor_21; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_proximityLightCenterColor_21() { return &___proximityLightCenterColor_21; }
	inline void set_proximityLightCenterColor_21(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___proximityLightCenterColor_21 = value;
	}

	inline static int32_t get_offset_of_currentScale_22() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___currentScale_22)); }
	inline float get_currentScale_22() const { return ___currentScale_22; }
	inline float* get_address_of_currentScale_22() { return &___currentScale_22; }
	inline void set_currentScale_22(float value)
	{
		___currentScale_22 = value;
	}

	inline static int32_t get_offset_of_PanStarted_23() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___PanStarted_23)); }
	inline PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * get_PanStarted_23() const { return ___PanStarted_23; }
	inline PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 ** get_address_of_PanStarted_23() { return &___PanStarted_23; }
	inline void set_PanStarted_23(PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * value)
	{
		___PanStarted_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PanStarted_23), (void*)value);
	}

	inline static int32_t get_offset_of_PanStopped_24() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___PanStopped_24)); }
	inline PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * get_PanStopped_24() const { return ___PanStopped_24; }
	inline PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 ** get_address_of_PanStopped_24() { return &___PanStopped_24; }
	inline void set_PanStopped_24(PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * value)
	{
		___PanStopped_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PanStopped_24), (void*)value);
	}

	inline static int32_t get_offset_of_PanUpdated_25() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___PanUpdated_25)); }
	inline PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * get_PanUpdated_25() const { return ___PanUpdated_25; }
	inline PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 ** get_address_of_PanUpdated_25() { return &___PanUpdated_25; }
	inline void set_PanUpdated_25(PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * value)
	{
		___PanUpdated_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PanUpdated_25), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_26() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___mesh_26)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_mesh_26() const { return ___mesh_26; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_mesh_26() { return &___mesh_26; }
	inline void set_mesh_26(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___mesh_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_26), (void*)value);
	}

	inline static int32_t get_offset_of_meshFilter_27() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___meshFilter_27)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_meshFilter_27() const { return ___meshFilter_27; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_meshFilter_27() { return &___meshFilter_27; }
	inline void set_meshFilter_27(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___meshFilter_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFilter_27), (void*)value);
	}

	inline static int32_t get_offset_of_boxCollider_28() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___boxCollider_28)); }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * get_boxCollider_28() const { return ___boxCollider_28; }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA ** get_address_of_boxCollider_28() { return &___boxCollider_28; }
	inline void set_boxCollider_28(BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * value)
	{
		___boxCollider_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider_28), (void*)value);
	}

	inline static int32_t get_offset_of_previousContactRatio_29() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___previousContactRatio_29)); }
	inline float get_previousContactRatio_29() const { return ___previousContactRatio_29; }
	inline float* get_address_of_previousContactRatio_29() { return &___previousContactRatio_29; }
	inline void set_previousContactRatio_29(float value)
	{
		___previousContactRatio_29 = value;
	}

	inline static int32_t get_offset_of_initialTouchDistance_30() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___initialTouchDistance_30)); }
	inline float get_initialTouchDistance_30() const { return ___initialTouchDistance_30; }
	inline float* get_address_of_initialTouchDistance_30() { return &___initialTouchDistance_30; }
	inline void set_initialTouchDistance_30(float value)
	{
		___initialTouchDistance_30 = value;
	}

	inline static int32_t get_offset_of_lastTouchDistance_31() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___lastTouchDistance_31)); }
	inline float get_lastTouchDistance_31() const { return ___lastTouchDistance_31; }
	inline float* get_address_of_lastTouchDistance_31() { return &___lastTouchDistance_31; }
	inline void set_lastTouchDistance_31(float value)
	{
		___lastTouchDistance_31 = value;
	}

	inline static int32_t get_offset_of_totalUVOffset_32() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___totalUVOffset_32)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_totalUVOffset_32() const { return ___totalUVOffset_32; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_totalUVOffset_32() { return &___totalUVOffset_32; }
	inline void set_totalUVOffset_32(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___totalUVOffset_32 = value;
	}

	inline static int32_t get_offset_of_totalUVScale_33() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___totalUVScale_33)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_totalUVScale_33() const { return ___totalUVScale_33; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_totalUVScale_33() { return &___totalUVScale_33; }
	inline void set_totalUVScale_33(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___totalUVScale_33 = value;
	}

	inline static int32_t get_offset_of_affordancesVisible_34() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___affordancesVisible_34)); }
	inline bool get_affordancesVisible_34() const { return ___affordancesVisible_34; }
	inline bool* get_address_of_affordancesVisible_34() { return &___affordancesVisible_34; }
	inline void set_affordancesVisible_34(bool value)
	{
		___affordancesVisible_34 = value;
	}

	inline static int32_t get_offset_of_runningAverageSmoothing_35() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___runningAverageSmoothing_35)); }
	inline float get_runningAverageSmoothing_35() const { return ___runningAverageSmoothing_35; }
	inline float* get_address_of_runningAverageSmoothing_35() { return &___runningAverageSmoothing_35; }
	inline void set_runningAverageSmoothing_35(float value)
	{
		___runningAverageSmoothing_35 = value;
	}

	inline static int32_t get_offset_of_currentMaterial_37() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___currentMaterial_37)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_37() const { return ___currentMaterial_37; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_37() { return &___currentMaterial_37; }
	inline void set_currentMaterial_37(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_37), (void*)value);
	}

	inline static int32_t get_offset_of_proximityLightCenterColorID_38() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___proximityLightCenterColorID_38)); }
	inline int32_t get_proximityLightCenterColorID_38() const { return ___proximityLightCenterColorID_38; }
	inline int32_t* get_address_of_proximityLightCenterColorID_38() { return &___proximityLightCenterColorID_38; }
	inline void set_proximityLightCenterColorID_38(int32_t value)
	{
		___proximityLightCenterColorID_38 = value;
	}

	inline static int32_t get_offset_of_defaultProximityLightCenterColor_39() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___defaultProximityLightCenterColor_39)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_defaultProximityLightCenterColor_39() const { return ___defaultProximityLightCenterColor_39; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_defaultProximityLightCenterColor_39() { return &___defaultProximityLightCenterColor_39; }
	inline void set_defaultProximityLightCenterColor_39(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___defaultProximityLightCenterColor_39 = value;
	}

	inline static int32_t get_offset_of_unTransformedUVs_40() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___unTransformedUVs_40)); }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * get_unTransformedUVs_40() const { return ___unTransformedUVs_40; }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB ** get_address_of_unTransformedUVs_40() { return &___unTransformedUVs_40; }
	inline void set_unTransformedUVs_40(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * value)
	{
		___unTransformedUVs_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unTransformedUVs_40), (void*)value);
	}

	inline static int32_t get_offset_of_handDataMap_41() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___handDataMap_41)); }
	inline Dictionary_2_t29AD4F6F068EA5B4E17B8989CEF3A2F9C3F3B636 * get_handDataMap_41() const { return ___handDataMap_41; }
	inline Dictionary_2_t29AD4F6F068EA5B4E17B8989CEF3A2F9C3F3B636 ** get_address_of_handDataMap_41() { return &___handDataMap_41; }
	inline void set_handDataMap_41(Dictionary_2_t29AD4F6F068EA5B4E17B8989CEF3A2F9C3F3B636 * value)
	{
		___handDataMap_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handDataMap_41), (void*)value);
	}

	inline static int32_t get_offset_of_uvs_42() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___uvs_42)); }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * get_uvs_42() const { return ___uvs_42; }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB ** get_address_of_uvs_42() { return &___uvs_42; }
	inline void set_uvs_42(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * value)
	{
		___uvs_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs_42), (void*)value);
	}

	inline static int32_t get_offset_of_uvsOrig_43() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___uvsOrig_43)); }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * get_uvsOrig_43() const { return ___uvsOrig_43; }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB ** get_address_of_uvsOrig_43() { return &___uvsOrig_43; }
	inline void set_uvsOrig_43(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * value)
	{
		___uvsOrig_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvsOrig_43), (void*)value);
	}

	inline static int32_t get_offset_of_oldIsTargetPositionLockedOnFocusLock_44() { return static_cast<int32_t>(offsetof(HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E, ___oldIsTargetPositionLockedOnFocusLock_44)); }
	inline bool get_oldIsTargetPositionLockedOnFocusLock_44() const { return ___oldIsTargetPositionLockedOnFocusLock_44; }
	inline bool* get_address_of_oldIsTargetPositionLockedOnFocusLock_44() { return &___oldIsTargetPositionLockedOnFocusLock_44; }
	inline void set_oldIsTargetPositionLockedOnFocusLock_44(bool value)
	{
		___oldIsTargetPositionLockedOnFocusLock_44 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
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
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// TMPro.TMP_InputField
struct  TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 * ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 * ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4 * ___m_LayoutGroup_33;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_34;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_35;
	// TMPro.TMP_InputField_ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_36;
	// TMPro.TMP_InputField_InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_37;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_38;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_39;
	// TMPro.TMP_InputField_LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_40;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_41;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_42;
	// TMPro.TMP_InputField_CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_43;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_44;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_45;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_46;
	// TMPro.TMP_InputField_SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * ___m_OnEndEdit_47;
	// TMPro.TMP_InputField_SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * ___m_OnSubmit_48;
	// TMPro.TMP_InputField_SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * ___m_OnSelect_49;
	// TMPro.TMP_InputField_SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * ___m_OnDeselect_50;
	// TMPro.TMP_InputField_TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * ___m_OnTextSelection_51;
	// TMPro.TMP_InputField_TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * ___m_OnEndTextSelection_52;
	// TMPro.TMP_InputField_OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_t1610FEF044826EE0837528C1E90FCDFC45B3D7AD * ___m_OnValueChanged_53;
	// TMPro.TMP_InputField_TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tF41EB6E5E2B26213D1C0CE6573498CA6ACB3CA1F * ___m_OnTouchScreenKeyboardStatusChanged_54;
	// TMPro.TMP_InputField_OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863 * ___m_OnValidateInput_55;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_CaretColor_56;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_57;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectionColor_58;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_59;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_60;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_61;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_62;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_63;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_64;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_67;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___caretRectTrans_68;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_CursorVerts_69;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CachedInputRenderer_70;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_LastPosition_71;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_Mesh_72;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_73;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_74;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_75;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_76;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_79;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_BlinkCoroutine_80;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_81;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DragCoroutine_82;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_83;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_84;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_85;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * ___m_WaitForSecondsRealtime_86;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_87;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_88;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_89;
	// System.Boolean TMPro.TMP_InputField::m_IsScrollbarUpdateRequired
	bool ___m_IsScrollbarUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_IsUpdatingScrollbarValues
	bool ___m_IsUpdatingScrollbarValues_91;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_92;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_93;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_94;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_95;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_97;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_98;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_99;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_GlobalFontAsset_100;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_102;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_103;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_104;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_105;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PreviouslySelectedObject_106;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_107;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_108;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_109;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD * ___m_InputValidator_110;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_111;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_113;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_114;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ProcessingEvent_115;

public:
	inline static int32_t get_offset_of_m_SoftKeyboard_20() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_SoftKeyboard_20)); }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * get_m_SoftKeyboard_20() const { return ___m_SoftKeyboard_20; }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 ** get_address_of_m_SoftKeyboard_20() { return &___m_SoftKeyboard_20; }
	inline void set_m_SoftKeyboard_20(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * value)
	{
		___m_SoftKeyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SoftKeyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_RectTransform_22() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_RectTransform_22)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_22() const { return ___m_RectTransform_22; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_22() { return &___m_RectTransform_22; }
	inline void set_m_RectTransform_22(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextViewport_23() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TextViewport_23)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_TextViewport_23() const { return ___m_TextViewport_23; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_TextViewport_23() { return &___m_TextViewport_23; }
	inline void set_m_TextViewport_23(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_TextViewport_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextViewport_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectMask_24() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TextComponentRectMask_24)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_TextComponentRectMask_24() const { return ___m_TextComponentRectMask_24; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_TextComponentRectMask_24() { return &___m_TextComponentRectMask_24; }
	inline void set_m_TextComponentRectMask_24(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_TextComponentRectMask_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponentRectMask_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextViewportRectMask_25() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TextViewportRectMask_25)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_TextViewportRectMask_25() const { return ___m_TextViewportRectMask_25; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_TextViewportRectMask_25() { return &___m_TextViewportRectMask_25; }
	inline void set_m_TextViewportRectMask_25(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_TextViewportRectMask_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextViewportRectMask_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedViewportRect_26() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CachedViewportRect_26)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_CachedViewportRect_26() const { return ___m_CachedViewportRect_26; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_CachedViewportRect_26() { return &___m_CachedViewportRect_26; }
	inline void set_m_CachedViewportRect_26(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_CachedViewportRect_26 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_27() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TextComponent_27)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_TextComponent_27() const { return ___m_TextComponent_27; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_TextComponent_27() { return &___m_TextComponent_27; }
	inline void set_m_TextComponent_27(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_TextComponent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectTransform_28() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TextComponentRectTransform_28)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_TextComponentRectTransform_28() const { return ___m_TextComponentRectTransform_28; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_TextComponentRectTransform_28() { return &___m_TextComponentRectTransform_28; }
	inline void set_m_TextComponentRectTransform_28(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_TextComponentRectTransform_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponentRectTransform_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_29() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_Placeholder_29)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_Placeholder_29() const { return ___m_Placeholder_29; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_Placeholder_29() { return &___m_Placeholder_29; }
	inline void set_m_Placeholder_29(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_Placeholder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_30() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_VerticalScrollbar_30)); }
	inline Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 * get_m_VerticalScrollbar_30() const { return ___m_VerticalScrollbar_30; }
	inline Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 ** get_address_of_m_VerticalScrollbar_30() { return &___m_VerticalScrollbar_30; }
	inline void set_m_VerticalScrollbar_30(Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 * value)
	{
		___m_VerticalScrollbar_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbar_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarEventHandler_31() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_VerticalScrollbarEventHandler_31)); }
	inline TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 * get_m_VerticalScrollbarEventHandler_31() const { return ___m_VerticalScrollbarEventHandler_31; }
	inline TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 ** get_address_of_m_VerticalScrollbarEventHandler_31() { return &___m_VerticalScrollbarEventHandler_31; }
	inline void set_m_VerticalScrollbarEventHandler_31(TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 * value)
	{
		___m_VerticalScrollbarEventHandler_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbarEventHandler_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsDrivenByLayoutComponents_32() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsDrivenByLayoutComponents_32)); }
	inline bool get_m_IsDrivenByLayoutComponents_32() const { return ___m_IsDrivenByLayoutComponents_32; }
	inline bool* get_address_of_m_IsDrivenByLayoutComponents_32() { return &___m_IsDrivenByLayoutComponents_32; }
	inline void set_m_IsDrivenByLayoutComponents_32(bool value)
	{
		___m_IsDrivenByLayoutComponents_32 = value;
	}

	inline static int32_t get_offset_of_m_LayoutGroup_33() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_LayoutGroup_33)); }
	inline LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4 * get_m_LayoutGroup_33() const { return ___m_LayoutGroup_33; }
	inline LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4 ** get_address_of_m_LayoutGroup_33() { return &___m_LayoutGroup_33; }
	inline void set_m_LayoutGroup_33(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4 * value)
	{
		___m_LayoutGroup_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutGroup_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollPosition_34() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ScrollPosition_34)); }
	inline float get_m_ScrollPosition_34() const { return ___m_ScrollPosition_34; }
	inline float* get_address_of_m_ScrollPosition_34() { return &___m_ScrollPosition_34; }
	inline void set_m_ScrollPosition_34(float value)
	{
		___m_ScrollPosition_34 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_35() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ScrollSensitivity_35)); }
	inline float get_m_ScrollSensitivity_35() const { return ___m_ScrollSensitivity_35; }
	inline float* get_address_of_m_ScrollSensitivity_35() { return &___m_ScrollSensitivity_35; }
	inline void set_m_ScrollSensitivity_35(float value)
	{
		___m_ScrollSensitivity_35 = value;
	}

	inline static int32_t get_offset_of_m_ContentType_36() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ContentType_36)); }
	inline int32_t get_m_ContentType_36() const { return ___m_ContentType_36; }
	inline int32_t* get_address_of_m_ContentType_36() { return &___m_ContentType_36; }
	inline void set_m_ContentType_36(int32_t value)
	{
		___m_ContentType_36 = value;
	}

	inline static int32_t get_offset_of_m_InputType_37() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_InputType_37)); }
	inline int32_t get_m_InputType_37() const { return ___m_InputType_37; }
	inline int32_t* get_address_of_m_InputType_37() { return &___m_InputType_37; }
	inline void set_m_InputType_37(int32_t value)
	{
		___m_InputType_37 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_38() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_AsteriskChar_38)); }
	inline Il2CppChar get_m_AsteriskChar_38() const { return ___m_AsteriskChar_38; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_38() { return &___m_AsteriskChar_38; }
	inline void set_m_AsteriskChar_38(Il2CppChar value)
	{
		___m_AsteriskChar_38 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_39() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_KeyboardType_39)); }
	inline int32_t get_m_KeyboardType_39() const { return ___m_KeyboardType_39; }
	inline int32_t* get_address_of_m_KeyboardType_39() { return &___m_KeyboardType_39; }
	inline void set_m_KeyboardType_39(int32_t value)
	{
		___m_KeyboardType_39 = value;
	}

	inline static int32_t get_offset_of_m_LineType_40() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_LineType_40)); }
	inline int32_t get_m_LineType_40() const { return ___m_LineType_40; }
	inline int32_t* get_address_of_m_LineType_40() { return &___m_LineType_40; }
	inline void set_m_LineType_40(int32_t value)
	{
		___m_LineType_40 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_41() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_HideMobileInput_41)); }
	inline bool get_m_HideMobileInput_41() const { return ___m_HideMobileInput_41; }
	inline bool* get_address_of_m_HideMobileInput_41() { return &___m_HideMobileInput_41; }
	inline void set_m_HideMobileInput_41(bool value)
	{
		___m_HideMobileInput_41 = value;
	}

	inline static int32_t get_offset_of_m_HideSoftKeyboard_42() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_HideSoftKeyboard_42)); }
	inline bool get_m_HideSoftKeyboard_42() const { return ___m_HideSoftKeyboard_42; }
	inline bool* get_address_of_m_HideSoftKeyboard_42() { return &___m_HideSoftKeyboard_42; }
	inline void set_m_HideSoftKeyboard_42(bool value)
	{
		___m_HideSoftKeyboard_42 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_43() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CharacterValidation_43)); }
	inline int32_t get_m_CharacterValidation_43() const { return ___m_CharacterValidation_43; }
	inline int32_t* get_address_of_m_CharacterValidation_43() { return &___m_CharacterValidation_43; }
	inline void set_m_CharacterValidation_43(int32_t value)
	{
		___m_CharacterValidation_43 = value;
	}

	inline static int32_t get_offset_of_m_RegexValue_44() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_RegexValue_44)); }
	inline String_t* get_m_RegexValue_44() const { return ___m_RegexValue_44; }
	inline String_t** get_address_of_m_RegexValue_44() { return &___m_RegexValue_44; }
	inline void set_m_RegexValue_44(String_t* value)
	{
		___m_RegexValue_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegexValue_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlobalPointSize_45() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_GlobalPointSize_45)); }
	inline float get_m_GlobalPointSize_45() const { return ___m_GlobalPointSize_45; }
	inline float* get_address_of_m_GlobalPointSize_45() { return &___m_GlobalPointSize_45; }
	inline void set_m_GlobalPointSize_45(float value)
	{
		___m_GlobalPointSize_45 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_46() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CharacterLimit_46)); }
	inline int32_t get_m_CharacterLimit_46() const { return ___m_CharacterLimit_46; }
	inline int32_t* get_address_of_m_CharacterLimit_46() { return &___m_CharacterLimit_46; }
	inline void set_m_CharacterLimit_46(int32_t value)
	{
		___m_CharacterLimit_46 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_47() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnEndEdit_47)); }
	inline SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * get_m_OnEndEdit_47() const { return ___m_OnEndEdit_47; }
	inline SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC ** get_address_of_m_OnEndEdit_47() { return &___m_OnEndEdit_47; }
	inline void set_m_OnEndEdit_47(SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * value)
	{
		___m_OnEndEdit_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSubmit_48() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnSubmit_48)); }
	inline SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * get_m_OnSubmit_48() const { return ___m_OnSubmit_48; }
	inline SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC ** get_address_of_m_OnSubmit_48() { return &___m_OnSubmit_48; }
	inline void set_m_OnSubmit_48(SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * value)
	{
		___m_OnSubmit_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSubmit_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelect_49() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnSelect_49)); }
	inline SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * get_m_OnSelect_49() const { return ___m_OnSelect_49; }
	inline SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A ** get_address_of_m_OnSelect_49() { return &___m_OnSelect_49; }
	inline void set_m_OnSelect_49(SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * value)
	{
		___m_OnSelect_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelect_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDeselect_50() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnDeselect_50)); }
	inline SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * get_m_OnDeselect_50() const { return ___m_OnDeselect_50; }
	inline SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A ** get_address_of_m_OnDeselect_50() { return &___m_OnDeselect_50; }
	inline void set_m_OnDeselect_50(SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * value)
	{
		___m_OnDeselect_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDeselect_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTextSelection_51() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnTextSelection_51)); }
	inline TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * get_m_OnTextSelection_51() const { return ___m_OnTextSelection_51; }
	inline TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 ** get_address_of_m_OnTextSelection_51() { return &___m_OnTextSelection_51; }
	inline void set_m_OnTextSelection_51(TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * value)
	{
		___m_OnTextSelection_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTextSelection_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEndTextSelection_52() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnEndTextSelection_52)); }
	inline TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * get_m_OnEndTextSelection_52() const { return ___m_OnEndTextSelection_52; }
	inline TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 ** get_address_of_m_OnEndTextSelection_52() { return &___m_OnEndTextSelection_52; }
	inline void set_m_OnEndTextSelection_52(TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * value)
	{
		___m_OnEndTextSelection_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndTextSelection_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_53() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnValueChanged_53)); }
	inline OnChangeEvent_t1610FEF044826EE0837528C1E90FCDFC45B3D7AD * get_m_OnValueChanged_53() const { return ___m_OnValueChanged_53; }
	inline OnChangeEvent_t1610FEF044826EE0837528C1E90FCDFC45B3D7AD ** get_address_of_m_OnValueChanged_53() { return &___m_OnValueChanged_53; }
	inline void set_m_OnValueChanged_53(OnChangeEvent_t1610FEF044826EE0837528C1E90FCDFC45B3D7AD * value)
	{
		___m_OnValueChanged_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTouchScreenKeyboardStatusChanged_54() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnTouchScreenKeyboardStatusChanged_54)); }
	inline TouchScreenKeyboardEvent_tF41EB6E5E2B26213D1C0CE6573498CA6ACB3CA1F * get_m_OnTouchScreenKeyboardStatusChanged_54() const { return ___m_OnTouchScreenKeyboardStatusChanged_54; }
	inline TouchScreenKeyboardEvent_tF41EB6E5E2B26213D1C0CE6573498CA6ACB3CA1F ** get_address_of_m_OnTouchScreenKeyboardStatusChanged_54() { return &___m_OnTouchScreenKeyboardStatusChanged_54; }
	inline void set_m_OnTouchScreenKeyboardStatusChanged_54(TouchScreenKeyboardEvent_tF41EB6E5E2B26213D1C0CE6573498CA6ACB3CA1F * value)
	{
		___m_OnTouchScreenKeyboardStatusChanged_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTouchScreenKeyboardStatusChanged_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_55() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnValidateInput_55)); }
	inline OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863 * get_m_OnValidateInput_55() const { return ___m_OnValidateInput_55; }
	inline OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863 ** get_address_of_m_OnValidateInput_55() { return &___m_OnValidateInput_55; }
	inline void set_m_OnValidateInput_55(OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863 * value)
	{
		___m_OnValidateInput_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_56() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretColor_56)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_CaretColor_56() const { return ___m_CaretColor_56; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_CaretColor_56() { return &___m_CaretColor_56; }
	inline void set_m_CaretColor_56(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_CaretColor_56 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_57() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CustomCaretColor_57)); }
	inline bool get_m_CustomCaretColor_57() const { return ___m_CustomCaretColor_57; }
	inline bool* get_address_of_m_CustomCaretColor_57() { return &___m_CustomCaretColor_57; }
	inline void set_m_CustomCaretColor_57(bool value)
	{
		___m_CustomCaretColor_57 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_58() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_SelectionColor_58)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectionColor_58() const { return ___m_SelectionColor_58; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectionColor_58() { return &___m_SelectionColor_58; }
	inline void set_m_SelectionColor_58(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectionColor_58 = value;
	}

	inline static int32_t get_offset_of_m_Text_59() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_Text_59)); }
	inline String_t* get_m_Text_59() const { return ___m_Text_59; }
	inline String_t** get_address_of_m_Text_59() { return &___m_Text_59; }
	inline void set_m_Text_59(String_t* value)
	{
		___m_Text_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_60() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretBlinkRate_60)); }
	inline float get_m_CaretBlinkRate_60() const { return ___m_CaretBlinkRate_60; }
	inline float* get_address_of_m_CaretBlinkRate_60() { return &___m_CaretBlinkRate_60; }
	inline void set_m_CaretBlinkRate_60(float value)
	{
		___m_CaretBlinkRate_60 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_61() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretWidth_61)); }
	inline int32_t get_m_CaretWidth_61() const { return ___m_CaretWidth_61; }
	inline int32_t* get_address_of_m_CaretWidth_61() { return &___m_CaretWidth_61; }
	inline void set_m_CaretWidth_61(int32_t value)
	{
		___m_CaretWidth_61 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_62() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ReadOnly_62)); }
	inline bool get_m_ReadOnly_62() const { return ___m_ReadOnly_62; }
	inline bool* get_address_of_m_ReadOnly_62() { return &___m_ReadOnly_62; }
	inline void set_m_ReadOnly_62(bool value)
	{
		___m_ReadOnly_62 = value;
	}

	inline static int32_t get_offset_of_m_RichText_63() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_RichText_63)); }
	inline bool get_m_RichText_63() const { return ___m_RichText_63; }
	inline bool* get_address_of_m_RichText_63() { return &___m_RichText_63; }
	inline void set_m_RichText_63(bool value)
	{
		___m_RichText_63 = value;
	}

	inline static int32_t get_offset_of_m_StringPosition_64() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_StringPosition_64)); }
	inline int32_t get_m_StringPosition_64() const { return ___m_StringPosition_64; }
	inline int32_t* get_address_of_m_StringPosition_64() { return &___m_StringPosition_64; }
	inline void set_m_StringPosition_64(int32_t value)
	{
		___m_StringPosition_64 = value;
	}

	inline static int32_t get_offset_of_m_StringSelectPosition_65() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_StringSelectPosition_65)); }
	inline int32_t get_m_StringSelectPosition_65() const { return ___m_StringSelectPosition_65; }
	inline int32_t* get_address_of_m_StringSelectPosition_65() { return &___m_StringSelectPosition_65; }
	inline void set_m_StringSelectPosition_65(int32_t value)
	{
		___m_StringSelectPosition_65 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_66() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretPosition_66)); }
	inline int32_t get_m_CaretPosition_66() const { return ___m_CaretPosition_66; }
	inline int32_t* get_address_of_m_CaretPosition_66() { return &___m_CaretPosition_66; }
	inline void set_m_CaretPosition_66(int32_t value)
	{
		___m_CaretPosition_66 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_67() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretSelectPosition_67)); }
	inline int32_t get_m_CaretSelectPosition_67() const { return ___m_CaretSelectPosition_67; }
	inline int32_t* get_address_of_m_CaretSelectPosition_67() { return &___m_CaretSelectPosition_67; }
	inline void set_m_CaretSelectPosition_67(int32_t value)
	{
		___m_CaretSelectPosition_67 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_68() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___caretRectTrans_68)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_caretRectTrans_68() const { return ___caretRectTrans_68; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_caretRectTrans_68() { return &___caretRectTrans_68; }
	inline void set_caretRectTrans_68(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___caretRectTrans_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_68), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_69() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CursorVerts_69)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_CursorVerts_69() const { return ___m_CursorVerts_69; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_CursorVerts_69() { return &___m_CursorVerts_69; }
	inline void set_m_CursorVerts_69(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_CursorVerts_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_69), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_70() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CachedInputRenderer_70)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CachedInputRenderer_70() const { return ___m_CachedInputRenderer_70; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CachedInputRenderer_70() { return &___m_CachedInputRenderer_70; }
	inline void set_m_CachedInputRenderer_70(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CachedInputRenderer_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_70), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastPosition_71() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_LastPosition_71)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_LastPosition_71() const { return ___m_LastPosition_71; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_LastPosition_71() { return &___m_LastPosition_71; }
	inline void set_m_LastPosition_71(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_LastPosition_71 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_72() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_Mesh_72)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_Mesh_72() const { return ___m_Mesh_72; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_Mesh_72() { return &___m_Mesh_72; }
	inline void set_m_Mesh_72(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_Mesh_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_72), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_73() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_AllowInput_73)); }
	inline bool get_m_AllowInput_73() const { return ___m_AllowInput_73; }
	inline bool* get_address_of_m_AllowInput_73() { return &___m_AllowInput_73; }
	inline void set_m_AllowInput_73(bool value)
	{
		___m_AllowInput_73 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_74() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ShouldActivateNextUpdate_74)); }
	inline bool get_m_ShouldActivateNextUpdate_74() const { return ___m_ShouldActivateNextUpdate_74; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_74() { return &___m_ShouldActivateNextUpdate_74; }
	inline void set_m_ShouldActivateNextUpdate_74(bool value)
	{
		___m_ShouldActivateNextUpdate_74 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_75() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_UpdateDrag_75)); }
	inline bool get_m_UpdateDrag_75() const { return ___m_UpdateDrag_75; }
	inline bool* get_address_of_m_UpdateDrag_75() { return &___m_UpdateDrag_75; }
	inline void set_m_UpdateDrag_75(bool value)
	{
		___m_UpdateDrag_75 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_76() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_DragPositionOutOfBounds_76)); }
	inline bool get_m_DragPositionOutOfBounds_76() const { return ___m_DragPositionOutOfBounds_76; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_76() { return &___m_DragPositionOutOfBounds_76; }
	inline void set_m_DragPositionOutOfBounds_76(bool value)
	{
		___m_DragPositionOutOfBounds_76 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_79() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretVisible_79)); }
	inline bool get_m_CaretVisible_79() const { return ___m_CaretVisible_79; }
	inline bool* get_address_of_m_CaretVisible_79() { return &___m_CaretVisible_79; }
	inline void set_m_CaretVisible_79(bool value)
	{
		___m_CaretVisible_79 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_80() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_BlinkCoroutine_80)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_BlinkCoroutine_80() const { return ___m_BlinkCoroutine_80; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_BlinkCoroutine_80() { return &___m_BlinkCoroutine_80; }
	inline void set_m_BlinkCoroutine_80(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_BlinkCoroutine_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_80), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_81() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_BlinkStartTime_81)); }
	inline float get_m_BlinkStartTime_81() const { return ___m_BlinkStartTime_81; }
	inline float* get_address_of_m_BlinkStartTime_81() { return &___m_BlinkStartTime_81; }
	inline void set_m_BlinkStartTime_81(float value)
	{
		___m_BlinkStartTime_81 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_82() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_DragCoroutine_82)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DragCoroutine_82() const { return ___m_DragCoroutine_82; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DragCoroutine_82() { return &___m_DragCoroutine_82; }
	inline void set_m_DragCoroutine_82(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DragCoroutine_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_82), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_83() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OriginalText_83)); }
	inline String_t* get_m_OriginalText_83() const { return ___m_OriginalText_83; }
	inline String_t** get_address_of_m_OriginalText_83() { return &___m_OriginalText_83; }
	inline void set_m_OriginalText_83(String_t* value)
	{
		___m_OriginalText_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_83), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_84() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_WasCanceled_84)); }
	inline bool get_m_WasCanceled_84() const { return ___m_WasCanceled_84; }
	inline bool* get_address_of_m_WasCanceled_84() { return &___m_WasCanceled_84; }
	inline void set_m_WasCanceled_84(bool value)
	{
		___m_WasCanceled_84 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_85() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_HasDoneFocusTransition_85)); }
	inline bool get_m_HasDoneFocusTransition_85() const { return ___m_HasDoneFocusTransition_85; }
	inline bool* get_address_of_m_HasDoneFocusTransition_85() { return &___m_HasDoneFocusTransition_85; }
	inline void set_m_HasDoneFocusTransition_85(bool value)
	{
		___m_HasDoneFocusTransition_85 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_86() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_WaitForSecondsRealtime_86)); }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * get_m_WaitForSecondsRealtime_86() const { return ___m_WaitForSecondsRealtime_86; }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 ** get_address_of_m_WaitForSecondsRealtime_86() { return &___m_WaitForSecondsRealtime_86; }
	inline void set_m_WaitForSecondsRealtime_86(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * value)
	{
		___m_WaitForSecondsRealtime_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_86), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventCallback_87() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_PreventCallback_87)); }
	inline bool get_m_PreventCallback_87() const { return ___m_PreventCallback_87; }
	inline bool* get_address_of_m_PreventCallback_87() { return &___m_PreventCallback_87; }
	inline void set_m_PreventCallback_87(bool value)
	{
		___m_PreventCallback_87 = value;
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_88() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TouchKeyboardAllowsInPlaceEditing_88)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_88() const { return ___m_TouchKeyboardAllowsInPlaceEditing_88; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_88() { return &___m_TouchKeyboardAllowsInPlaceEditing_88; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_88(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_88 = value;
	}

	inline static int32_t get_offset_of_m_IsTextComponentUpdateRequired_89() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsTextComponentUpdateRequired_89)); }
	inline bool get_m_IsTextComponentUpdateRequired_89() const { return ___m_IsTextComponentUpdateRequired_89; }
	inline bool* get_address_of_m_IsTextComponentUpdateRequired_89() { return &___m_IsTextComponentUpdateRequired_89; }
	inline void set_m_IsTextComponentUpdateRequired_89(bool value)
	{
		___m_IsTextComponentUpdateRequired_89 = value;
	}

	inline static int32_t get_offset_of_m_IsScrollbarUpdateRequired_90() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsScrollbarUpdateRequired_90)); }
	inline bool get_m_IsScrollbarUpdateRequired_90() const { return ___m_IsScrollbarUpdateRequired_90; }
	inline bool* get_address_of_m_IsScrollbarUpdateRequired_90() { return &___m_IsScrollbarUpdateRequired_90; }
	inline void set_m_IsScrollbarUpdateRequired_90(bool value)
	{
		___m_IsScrollbarUpdateRequired_90 = value;
	}

	inline static int32_t get_offset_of_m_IsUpdatingScrollbarValues_91() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsUpdatingScrollbarValues_91)); }
	inline bool get_m_IsUpdatingScrollbarValues_91() const { return ___m_IsUpdatingScrollbarValues_91; }
	inline bool* get_address_of_m_IsUpdatingScrollbarValues_91() { return &___m_IsUpdatingScrollbarValues_91; }
	inline void set_m_IsUpdatingScrollbarValues_91(bool value)
	{
		___m_IsUpdatingScrollbarValues_91 = value;
	}

	inline static int32_t get_offset_of_m_isLastKeyBackspace_92() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_isLastKeyBackspace_92)); }
	inline bool get_m_isLastKeyBackspace_92() const { return ___m_isLastKeyBackspace_92; }
	inline bool* get_address_of_m_isLastKeyBackspace_92() { return &___m_isLastKeyBackspace_92; }
	inline void set_m_isLastKeyBackspace_92(bool value)
	{
		___m_isLastKeyBackspace_92 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownClickStartTime_93() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_PointerDownClickStartTime_93)); }
	inline float get_m_PointerDownClickStartTime_93() const { return ___m_PointerDownClickStartTime_93; }
	inline float* get_address_of_m_PointerDownClickStartTime_93() { return &___m_PointerDownClickStartTime_93; }
	inline void set_m_PointerDownClickStartTime_93(float value)
	{
		___m_PointerDownClickStartTime_93 = value;
	}

	inline static int32_t get_offset_of_m_KeyDownStartTime_94() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_KeyDownStartTime_94)); }
	inline float get_m_KeyDownStartTime_94() const { return ___m_KeyDownStartTime_94; }
	inline float* get_address_of_m_KeyDownStartTime_94() { return &___m_KeyDownStartTime_94; }
	inline void set_m_KeyDownStartTime_94(float value)
	{
		___m_KeyDownStartTime_94 = value;
	}

	inline static int32_t get_offset_of_m_DoubleClickDelay_95() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_DoubleClickDelay_95)); }
	inline float get_m_DoubleClickDelay_95() const { return ___m_DoubleClickDelay_95; }
	inline float* get_address_of_m_DoubleClickDelay_95() { return &___m_DoubleClickDelay_95; }
	inline void set_m_DoubleClickDelay_95(float value)
	{
		___m_DoubleClickDelay_95 = value;
	}

	inline static int32_t get_offset_of_m_IsCompositionActive_97() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsCompositionActive_97)); }
	inline bool get_m_IsCompositionActive_97() const { return ___m_IsCompositionActive_97; }
	inline bool* get_address_of_m_IsCompositionActive_97() { return &___m_IsCompositionActive_97; }
	inline void set_m_IsCompositionActive_97(bool value)
	{
		___m_IsCompositionActive_97 = value;
	}

	inline static int32_t get_offset_of_m_ShouldUpdateIMEWindowPosition_98() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ShouldUpdateIMEWindowPosition_98)); }
	inline bool get_m_ShouldUpdateIMEWindowPosition_98() const { return ___m_ShouldUpdateIMEWindowPosition_98; }
	inline bool* get_address_of_m_ShouldUpdateIMEWindowPosition_98() { return &___m_ShouldUpdateIMEWindowPosition_98; }
	inline void set_m_ShouldUpdateIMEWindowPosition_98(bool value)
	{
		___m_ShouldUpdateIMEWindowPosition_98 = value;
	}

	inline static int32_t get_offset_of_m_PreviousIMEInsertionLine_99() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_PreviousIMEInsertionLine_99)); }
	inline int32_t get_m_PreviousIMEInsertionLine_99() const { return ___m_PreviousIMEInsertionLine_99; }
	inline int32_t* get_address_of_m_PreviousIMEInsertionLine_99() { return &___m_PreviousIMEInsertionLine_99; }
	inline void set_m_PreviousIMEInsertionLine_99(int32_t value)
	{
		___m_PreviousIMEInsertionLine_99 = value;
	}

	inline static int32_t get_offset_of_m_GlobalFontAsset_100() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_GlobalFontAsset_100)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_GlobalFontAsset_100() const { return ___m_GlobalFontAsset_100; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_GlobalFontAsset_100() { return &___m_GlobalFontAsset_100; }
	inline void set_m_GlobalFontAsset_100(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_GlobalFontAsset_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlobalFontAsset_100), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocusSelectAll_101() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnFocusSelectAll_101)); }
	inline bool get_m_OnFocusSelectAll_101() const { return ___m_OnFocusSelectAll_101; }
	inline bool* get_address_of_m_OnFocusSelectAll_101() { return &___m_OnFocusSelectAll_101; }
	inline void set_m_OnFocusSelectAll_101(bool value)
	{
		___m_OnFocusSelectAll_101 = value;
	}

	inline static int32_t get_offset_of_m_isSelectAll_102() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_isSelectAll_102)); }
	inline bool get_m_isSelectAll_102() const { return ___m_isSelectAll_102; }
	inline bool* get_address_of_m_isSelectAll_102() { return &___m_isSelectAll_102; }
	inline void set_m_isSelectAll_102(bool value)
	{
		___m_isSelectAll_102 = value;
	}

	inline static int32_t get_offset_of_m_ResetOnDeActivation_103() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ResetOnDeActivation_103)); }
	inline bool get_m_ResetOnDeActivation_103() const { return ___m_ResetOnDeActivation_103; }
	inline bool* get_address_of_m_ResetOnDeActivation_103() { return &___m_ResetOnDeActivation_103; }
	inline void set_m_ResetOnDeActivation_103(bool value)
	{
		___m_ResetOnDeActivation_103 = value;
	}

	inline static int32_t get_offset_of_m_SelectionStillActive_104() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_SelectionStillActive_104)); }
	inline bool get_m_SelectionStillActive_104() const { return ___m_SelectionStillActive_104; }
	inline bool* get_address_of_m_SelectionStillActive_104() { return &___m_SelectionStillActive_104; }
	inline void set_m_SelectionStillActive_104(bool value)
	{
		___m_SelectionStillActive_104 = value;
	}

	inline static int32_t get_offset_of_m_ReleaseSelection_105() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ReleaseSelection_105)); }
	inline bool get_m_ReleaseSelection_105() const { return ___m_ReleaseSelection_105; }
	inline bool* get_address_of_m_ReleaseSelection_105() { return &___m_ReleaseSelection_105; }
	inline void set_m_ReleaseSelection_105(bool value)
	{
		___m_ReleaseSelection_105 = value;
	}

	inline static int32_t get_offset_of_m_PreviouslySelectedObject_106() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_PreviouslySelectedObject_106)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PreviouslySelectedObject_106() const { return ___m_PreviouslySelectedObject_106; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PreviouslySelectedObject_106() { return &___m_PreviouslySelectedObject_106; }
	inline void set_m_PreviouslySelectedObject_106(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PreviouslySelectedObject_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreviouslySelectedObject_106), (void*)value);
	}

	inline static int32_t get_offset_of_m_RestoreOriginalTextOnEscape_107() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_RestoreOriginalTextOnEscape_107)); }
	inline bool get_m_RestoreOriginalTextOnEscape_107() const { return ___m_RestoreOriginalTextOnEscape_107; }
	inline bool* get_address_of_m_RestoreOriginalTextOnEscape_107() { return &___m_RestoreOriginalTextOnEscape_107; }
	inline void set_m_RestoreOriginalTextOnEscape_107(bool value)
	{
		___m_RestoreOriginalTextOnEscape_107 = value;
	}

	inline static int32_t get_offset_of_m_isRichTextEditingAllowed_108() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_isRichTextEditingAllowed_108)); }
	inline bool get_m_isRichTextEditingAllowed_108() const { return ___m_isRichTextEditingAllowed_108; }
	inline bool* get_address_of_m_isRichTextEditingAllowed_108() { return &___m_isRichTextEditingAllowed_108; }
	inline void set_m_isRichTextEditingAllowed_108(bool value)
	{
		___m_isRichTextEditingAllowed_108 = value;
	}

	inline static int32_t get_offset_of_m_LineLimit_109() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_LineLimit_109)); }
	inline int32_t get_m_LineLimit_109() const { return ___m_LineLimit_109; }
	inline int32_t* get_address_of_m_LineLimit_109() { return &___m_LineLimit_109; }
	inline void set_m_LineLimit_109(int32_t value)
	{
		___m_LineLimit_109 = value;
	}

	inline static int32_t get_offset_of_m_InputValidator_110() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_InputValidator_110)); }
	inline TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD * get_m_InputValidator_110() const { return ___m_InputValidator_110; }
	inline TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD ** get_address_of_m_InputValidator_110() { return &___m_InputValidator_110; }
	inline void set_m_InputValidator_110(TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD * value)
	{
		___m_InputValidator_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputValidator_110), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSelected_111() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_isSelected_111)); }
	inline bool get_m_isSelected_111() const { return ___m_isSelected_111; }
	inline bool* get_address_of_m_isSelected_111() { return &___m_isSelected_111; }
	inline void set_m_isSelected_111(bool value)
	{
		___m_isSelected_111 = value;
	}

	inline static int32_t get_offset_of_m_IsStringPositionDirty_112() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsStringPositionDirty_112)); }
	inline bool get_m_IsStringPositionDirty_112() const { return ___m_IsStringPositionDirty_112; }
	inline bool* get_address_of_m_IsStringPositionDirty_112() { return &___m_IsStringPositionDirty_112; }
	inline void set_m_IsStringPositionDirty_112(bool value)
	{
		___m_IsStringPositionDirty_112 = value;
	}

	inline static int32_t get_offset_of_m_IsCaretPositionDirty_113() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsCaretPositionDirty_113)); }
	inline bool get_m_IsCaretPositionDirty_113() const { return ___m_IsCaretPositionDirty_113; }
	inline bool* get_address_of_m_IsCaretPositionDirty_113() { return &___m_IsCaretPositionDirty_113; }
	inline void set_m_IsCaretPositionDirty_113(bool value)
	{
		___m_IsCaretPositionDirty_113 = value;
	}

	inline static int32_t get_offset_of_m_forceRectTransformAdjustment_114() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_forceRectTransformAdjustment_114)); }
	inline bool get_m_forceRectTransformAdjustment_114() const { return ___m_forceRectTransformAdjustment_114; }
	inline bool* get_address_of_m_forceRectTransformAdjustment_114() { return &___m_forceRectTransformAdjustment_114; }
	inline void set_m_forceRectTransformAdjustment_114(bool value)
	{
		___m_forceRectTransformAdjustment_114 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_115() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ProcessingEvent_115)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ProcessingEvent_115() const { return ___m_ProcessingEvent_115; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ProcessingEvent_115() { return &___m_ProcessingEvent_115; }
	inline void set_m_ProcessingEvent_115(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ProcessingEvent_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_115), (void*)value);
	}
};

struct TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB_StaticFields
{
public:
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_35;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_36;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_37;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_fontAsset_38;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_currentFontAsset_39;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_40;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_sharedMaterial_41;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_currentMaterial_42;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_materialReferences_43;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * ___m_materialReferenceIndexLookup_44;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___m_materialReferenceStack_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_46;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontSharedMaterials_47;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_fontMaterial_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontMaterials_49;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_50;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_fontColor32_51;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_fontColor_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_underlineColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_strikethroughColor_55;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_56;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_57;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  ___m_fontColorGradient_58;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_fontColorGradientPreset_59;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_spriteAsset_60;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_61;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_62;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_spriteColor_63;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * ___m_StyleSheet_64;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * ___m_TextStyle_65;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_66;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_67;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_faceColor_68;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_outlineColor_69;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_70;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_71;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_72;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_73;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_sizeStack_74;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_75;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_76;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___m_FontWeightStack_77;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_78;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_79;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_80;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_81;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_82;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_83;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_84;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_85;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_86;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_87;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___m_fontStyleStack_88;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_89;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_90;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_91;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_93;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___m_lineJustificationStack_94;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_textContainerLocalCorners_95;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_96;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_97;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_98;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_99;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_100;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_101;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_102;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_104;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_105;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_106;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_107;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_108;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_109;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_110;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_111;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_112;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_113;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_114;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_linkedTextComponent_115;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___parentLinkedComponent_116;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_117;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_118;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_119;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_120;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_121;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_122;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_123;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_124;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_125;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_126;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_127;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_128;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_129;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_130;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_131;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_132;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_133;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_134;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_135;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_136;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_137;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_138;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_140;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_141;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_142;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_143;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_margin_144;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_145;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_146;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_147;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_148;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_149;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___m_textInfo_150;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_151;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_152;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_transform_153;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_rectTransform_154;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousRectTransformSize_155;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousPivotPosition_156;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_157;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_158;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_mesh_159;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_160;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * ___OnPreRenderText_163;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * ___m_spriteAnimator_164;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_165;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_166;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_167;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_168;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_169;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_170;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * ___m_LayoutElement_171;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_172;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_173;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_174;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_175;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_177;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_178;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_179;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_181;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_182;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_183;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_184;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_attributeParameterValues_189;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_InternalParsingBuffer
	UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* ___m_InternalParsingBuffer_197;
	// System.Int32 TMPro.TMP_Text::m_InternalParsingBufferSize
	int32_t ___m_InternalParsingBufferSize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___m_internalCharacterInfo_199;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_input_CharArray_200;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_201;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedWordWrapState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLineState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedEllipsisState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLastValidState_206;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedSoftLineBreakState_207;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  ___m_EllipsisInsertionCandidateStack_208;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_209;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_213;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_214;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_215;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_216;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_217;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_218;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_219;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_220;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_221;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_222;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_224;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_225;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_226;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___m_meshExtents_227;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_htmlColor_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_colorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_underlineColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_strikethroughColorStack_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___m_HighlightStateStack_232;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_colorGradientPreset_233;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___m_colorGradientStack_234;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_235;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_236;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* ___m_TextStyleStacks_238;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___m_ItalicAngleStack_240;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_241;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___m_actionStack_242;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_243;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_244;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_baselineOffsetStack_245;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_246;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_247;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___m_cached_TextElement_248;
	// TMPro.TMP_Text_SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  ___m_Ellipsis_249;
	// TMPro.TMP_Text_SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  ___m_Underline_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_defaultSpriteAsset_251;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_currentSpriteAsset_252;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_253;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_254;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_255;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* ___k_Power_257;

public:
	inline static int32_t get_offset_of_m_text_35() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_text_35)); }
	inline String_t* get_m_text_35() const { return ___m_text_35; }
	inline String_t** get_address_of_m_text_35() { return &___m_text_35; }
	inline void set_m_text_35(String_t* value)
	{
		___m_text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_36() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextPreprocessor_36)); }
	inline RuntimeObject* get_m_TextPreprocessor_36() const { return ___m_TextPreprocessor_36; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_36() { return &___m_TextPreprocessor_36; }
	inline void set_m_TextPreprocessor_36(RuntimeObject* value)
	{
		___m_TextPreprocessor_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_37() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRightToLeft_37)); }
	inline bool get_m_isRightToLeft_37() const { return ___m_isRightToLeft_37; }
	inline bool* get_address_of_m_isRightToLeft_37() { return &___m_isRightToLeft_37; }
	inline void set_m_isRightToLeft_37(bool value)
	{
		___m_isRightToLeft_37 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_38() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontAsset_38)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_fontAsset_38() const { return ___m_fontAsset_38; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_fontAsset_38() { return &___m_fontAsset_38; }
	inline void set_m_fontAsset_38(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_fontAsset_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_39() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontAsset_39)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_currentFontAsset_39() const { return ___m_currentFontAsset_39; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_currentFontAsset_39() { return &___m_currentFontAsset_39; }
	inline void set_m_currentFontAsset_39(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_currentFontAsset_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_40() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isSDFShader_40)); }
	inline bool get_m_isSDFShader_40() const { return ___m_isSDFShader_40; }
	inline bool* get_address_of_m_isSDFShader_40() { return &___m_isSDFShader_40; }
	inline void set_m_isSDFShader_40(bool value)
	{
		___m_isSDFShader_40 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_41() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sharedMaterial_41)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_sharedMaterial_41() const { return ___m_sharedMaterial_41; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_sharedMaterial_41() { return &___m_sharedMaterial_41; }
	inline void set_m_sharedMaterial_41(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_sharedMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterial_42)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_currentMaterial_42() const { return ___m_currentMaterial_42; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_currentMaterial_42() { return &___m_currentMaterial_42; }
	inline void set_m_currentMaterial_42(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_currentMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_43() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferences_43)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_materialReferences_43() const { return ___m_materialReferences_43; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_materialReferences_43() { return &___m_materialReferences_43; }
	inline void set_m_materialReferences_43(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_materialReferences_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_44() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceIndexLookup_44)); }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * get_m_materialReferenceIndexLookup_44() const { return ___m_materialReferenceIndexLookup_44; }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F ** get_address_of_m_materialReferenceIndexLookup_44() { return &___m_materialReferenceIndexLookup_44; }
	inline void set_m_materialReferenceIndexLookup_44(Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * value)
	{
		___m_materialReferenceIndexLookup_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceStack_45)); }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  get_m_materialReferenceStack_45() const { return ___m_materialReferenceStack_45; }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A * get_address_of_m_materialReferenceStack_45() { return &___m_materialReferenceStack_45; }
	inline void set_m_materialReferenceStack_45(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  value)
	{
		___m_materialReferenceStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_45))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_46() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterialIndex_46)); }
	inline int32_t get_m_currentMaterialIndex_46() const { return ___m_currentMaterialIndex_46; }
	inline int32_t* get_address_of_m_currentMaterialIndex_46() { return &___m_currentMaterialIndex_46; }
	inline void set_m_currentMaterialIndex_46(int32_t value)
	{
		___m_currentMaterialIndex_46 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_47() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSharedMaterials_47)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontSharedMaterials_47() const { return ___m_fontSharedMaterials_47; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontSharedMaterials_47() { return &___m_fontSharedMaterials_47; }
	inline void set_m_fontSharedMaterials_47(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontSharedMaterials_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_48() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterial_48)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_fontMaterial_48() const { return ___m_fontMaterial_48; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_fontMaterial_48() { return &___m_fontMaterial_48; }
	inline void set_m_fontMaterial_48(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_fontMaterial_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_49() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterials_49)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontMaterials_49() const { return ___m_fontMaterials_49; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontMaterials_49() { return &___m_fontMaterials_49; }
	inline void set_m_fontMaterials_49(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontMaterials_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_50() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaterialDirty_50)); }
	inline bool get_m_isMaterialDirty_50() const { return ___m_isMaterialDirty_50; }
	inline bool* get_address_of_m_isMaterialDirty_50() { return &___m_isMaterialDirty_50; }
	inline void set_m_isMaterialDirty_50(bool value)
	{
		___m_isMaterialDirty_50 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_51() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor32_51)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_fontColor32_51() const { return ___m_fontColor32_51; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_fontColor32_51() { return &___m_fontColor32_51; }
	inline void set_m_fontColor32_51(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_fontColor32_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_52() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor_52)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_fontColor_52() const { return ___m_fontColor_52; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_fontColor_52() { return &___m_fontColor_52; }
	inline void set_m_fontColor_52(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_fontColor_52 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColor_54)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_underlineColor_54() const { return ___m_underlineColor_54; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_underlineColor_54() { return &___m_underlineColor_54; }
	inline void set_m_underlineColor_54(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_underlineColor_54 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColor_55)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_strikethroughColor_55() const { return ___m_strikethroughColor_55; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_strikethroughColor_55() { return &___m_strikethroughColor_55; }
	inline void set_m_strikethroughColor_55(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_strikethroughColor_55 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_56() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableVertexGradient_56)); }
	inline bool get_m_enableVertexGradient_56() const { return ___m_enableVertexGradient_56; }
	inline bool* get_address_of_m_enableVertexGradient_56() { return &___m_enableVertexGradient_56; }
	inline void set_m_enableVertexGradient_56(bool value)
	{
		___m_enableVertexGradient_56 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_57() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorMode_57)); }
	inline int32_t get_m_colorMode_57() const { return ___m_colorMode_57; }
	inline int32_t* get_address_of_m_colorMode_57() { return &___m_colorMode_57; }
	inline void set_m_colorMode_57(int32_t value)
	{
		___m_colorMode_57 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradient_58)); }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  get_m_fontColorGradient_58() const { return ___m_fontColorGradient_58; }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A * get_address_of_m_fontColorGradient_58() { return &___m_fontColorGradient_58; }
	inline void set_m_fontColorGradient_58(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  value)
	{
		___m_fontColorGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_59() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradientPreset_59)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_fontColorGradientPreset_59() const { return ___m_fontColorGradientPreset_59; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_fontColorGradientPreset_59() { return &___m_fontColorGradientPreset_59; }
	inline void set_m_fontColorGradientPreset_59(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_fontColorGradientPreset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAsset_60)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_spriteAsset_60() const { return ___m_spriteAsset_60; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_spriteAsset_60() { return &___m_spriteAsset_60; }
	inline void set_m_spriteAsset_60(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_spriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_61() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintAllSprites_61)); }
	inline bool get_m_tintAllSprites_61() const { return ___m_tintAllSprites_61; }
	inline bool* get_address_of_m_tintAllSprites_61() { return &___m_tintAllSprites_61; }
	inline void set_m_tintAllSprites_61(bool value)
	{
		___m_tintAllSprites_61 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_62() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintSprite_62)); }
	inline bool get_m_tintSprite_62() const { return ___m_tintSprite_62; }
	inline bool* get_address_of_m_tintSprite_62() { return &___m_tintSprite_62; }
	inline void set_m_tintSprite_62(bool value)
	{
		___m_tintSprite_62 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_63() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteColor_63)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_spriteColor_63() const { return ___m_spriteColor_63; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_spriteColor_63() { return &___m_spriteColor_63; }
	inline void set_m_spriteColor_63(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_spriteColor_63 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_64() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_StyleSheet_64)); }
	inline TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * get_m_StyleSheet_64() const { return ___m_StyleSheet_64; }
	inline TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 ** get_address_of_m_StyleSheet_64() { return &___m_StyleSheet_64; }
	inline void set_m_StyleSheet_64(TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * value)
	{
		___m_StyleSheet_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_65() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyle_65)); }
	inline TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * get_m_TextStyle_65() const { return ___m_TextStyle_65; }
	inline TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD ** get_address_of_m_TextStyle_65() { return &___m_TextStyle_65; }
	inline void set_m_TextStyle_65(TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * value)
	{
		___m_TextStyle_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_66() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleHashCode_66)); }
	inline int32_t get_m_TextStyleHashCode_66() const { return ___m_TextStyleHashCode_66; }
	inline int32_t* get_address_of_m_TextStyleHashCode_66() { return &___m_TextStyleHashCode_66; }
	inline void set_m_TextStyleHashCode_66(int32_t value)
	{
		___m_TextStyleHashCode_66 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_67() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overrideHtmlColors_67)); }
	inline bool get_m_overrideHtmlColors_67() const { return ___m_overrideHtmlColors_67; }
	inline bool* get_address_of_m_overrideHtmlColors_67() { return &___m_overrideHtmlColors_67; }
	inline void set_m_overrideHtmlColors_67(bool value)
	{
		___m_overrideHtmlColors_67 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_68() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_faceColor_68)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_faceColor_68() const { return ___m_faceColor_68; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_faceColor_68() { return &___m_faceColor_68; }
	inline void set_m_faceColor_68(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_faceColor_68 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_69() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineColor_69)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_outlineColor_69() const { return ___m_outlineColor_69; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_outlineColor_69() { return &___m_outlineColor_69; }
	inline void set_m_outlineColor_69(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_outlineColor_69 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_70() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineWidth_70)); }
	inline float get_m_outlineWidth_70() const { return ___m_outlineWidth_70; }
	inline float* get_address_of_m_outlineWidth_70() { return &___m_outlineWidth_70; }
	inline void set_m_outlineWidth_70(float value)
	{
		___m_outlineWidth_70 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_71() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSize_71)); }
	inline float get_m_fontSize_71() const { return ___m_fontSize_71; }
	inline float* get_address_of_m_fontSize_71() { return &___m_fontSize_71; }
	inline void set_m_fontSize_71(float value)
	{
		___m_fontSize_71 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontSize_72)); }
	inline float get_m_currentFontSize_72() const { return ___m_currentFontSize_72; }
	inline float* get_address_of_m_currentFontSize_72() { return &___m_currentFontSize_72; }
	inline void set_m_currentFontSize_72(float value)
	{
		___m_currentFontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_73() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeBase_73)); }
	inline float get_m_fontSizeBase_73() const { return ___m_fontSizeBase_73; }
	inline float* get_address_of_m_fontSizeBase_73() { return &___m_fontSizeBase_73; }
	inline void set_m_fontSizeBase_73(float value)
	{
		___m_fontSizeBase_73 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_74() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sizeStack_74)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_sizeStack_74() const { return ___m_sizeStack_74; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_sizeStack_74() { return &___m_sizeStack_74; }
	inline void set_m_sizeStack_74(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_sizeStack_74 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_74))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_75() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontWeight_75)); }
	inline int32_t get_m_fontWeight_75() const { return ___m_fontWeight_75; }
	inline int32_t* get_address_of_m_fontWeight_75() { return &___m_fontWeight_75; }
	inline void set_m_fontWeight_75(int32_t value)
	{
		___m_fontWeight_75 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_76() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightInternal_76)); }
	inline int32_t get_m_FontWeightInternal_76() const { return ___m_FontWeightInternal_76; }
	inline int32_t* get_address_of_m_FontWeightInternal_76() { return &___m_FontWeightInternal_76; }
	inline void set_m_FontWeightInternal_76(int32_t value)
	{
		___m_FontWeightInternal_76 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_77() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightStack_77)); }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  get_m_FontWeightStack_77() const { return ___m_FontWeightStack_77; }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 * get_address_of_m_FontWeightStack_77() { return &___m_FontWeightStack_77; }
	inline void set_m_FontWeightStack_77(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  value)
	{
		___m_FontWeightStack_77 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_77))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_78() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableAutoSizing_78)); }
	inline bool get_m_enableAutoSizing_78() const { return ___m_enableAutoSizing_78; }
	inline bool* get_address_of_m_enableAutoSizing_78() { return &___m_enableAutoSizing_78; }
	inline void set_m_enableAutoSizing_78(bool value)
	{
		___m_enableAutoSizing_78 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_79() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxFontSize_79)); }
	inline float get_m_maxFontSize_79() const { return ___m_maxFontSize_79; }
	inline float* get_address_of_m_maxFontSize_79() { return &___m_maxFontSize_79; }
	inline void set_m_maxFontSize_79(float value)
	{
		___m_maxFontSize_79 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_80() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minFontSize_80)); }
	inline float get_m_minFontSize_80() const { return ___m_minFontSize_80; }
	inline float* get_address_of_m_minFontSize_80() { return &___m_minFontSize_80; }
	inline void set_m_minFontSize_80(float value)
	{
		___m_minFontSize_80 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_81() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_AutoSizeIterationCount_81)); }
	inline int32_t get_m_AutoSizeIterationCount_81() const { return ___m_AutoSizeIterationCount_81; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_81() { return &___m_AutoSizeIterationCount_81; }
	inline void set_m_AutoSizeIterationCount_81(int32_t value)
	{
		___m_AutoSizeIterationCount_81 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_82() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_AutoSizeMaxIterationCount_82)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_82() const { return ___m_AutoSizeMaxIterationCount_82; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_82() { return &___m_AutoSizeMaxIterationCount_82; }
	inline void set_m_AutoSizeMaxIterationCount_82(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_82 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_83() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsAutoSizePointSizeSet_83)); }
	inline bool get_m_IsAutoSizePointSizeSet_83() const { return ___m_IsAutoSizePointSizeSet_83; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_83() { return &___m_IsAutoSizePointSizeSet_83; }
	inline void set_m_IsAutoSizePointSizeSet_83(bool value)
	{
		___m_IsAutoSizePointSizeSet_83 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_84() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMin_84)); }
	inline float get_m_fontSizeMin_84() const { return ___m_fontSizeMin_84; }
	inline float* get_address_of_m_fontSizeMin_84() { return &___m_fontSizeMin_84; }
	inline void set_m_fontSizeMin_84(float value)
	{
		___m_fontSizeMin_84 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_85() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMax_85)); }
	inline float get_m_fontSizeMax_85() const { return ___m_fontSizeMax_85; }
	inline float* get_address_of_m_fontSizeMax_85() { return &___m_fontSizeMax_85; }
	inline void set_m_fontSizeMax_85(float value)
	{
		___m_fontSizeMax_85 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_86() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyle_86)); }
	inline int32_t get_m_fontStyle_86() const { return ___m_fontStyle_86; }
	inline int32_t* get_address_of_m_fontStyle_86() { return &___m_fontStyle_86; }
	inline void set_m_fontStyle_86(int32_t value)
	{
		___m_fontStyle_86 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_87() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontStyleInternal_87)); }
	inline int32_t get_m_FontStyleInternal_87() const { return ___m_FontStyleInternal_87; }
	inline int32_t* get_address_of_m_FontStyleInternal_87() { return &___m_FontStyleInternal_87; }
	inline void set_m_FontStyleInternal_87(int32_t value)
	{
		___m_FontStyleInternal_87 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_88() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyleStack_88)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_m_fontStyleStack_88() const { return ___m_fontStyleStack_88; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_m_fontStyleStack_88() { return &___m_fontStyleStack_88; }
	inline void set_m_fontStyleStack_88(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___m_fontStyleStack_88 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_89() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingBold_89)); }
	inline bool get_m_isUsingBold_89() const { return ___m_isUsingBold_89; }
	inline bool* get_address_of_m_isUsingBold_89() { return &___m_isUsingBold_89; }
	inline void set_m_isUsingBold_89(bool value)
	{
		___m_isUsingBold_89 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_90() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_HorizontalAlignment_90)); }
	inline int32_t get_m_HorizontalAlignment_90() const { return ___m_HorizontalAlignment_90; }
	inline int32_t* get_address_of_m_HorizontalAlignment_90() { return &___m_HorizontalAlignment_90; }
	inline void set_m_HorizontalAlignment_90(int32_t value)
	{
		___m_HorizontalAlignment_90 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_91() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VerticalAlignment_91)); }
	inline int32_t get_m_VerticalAlignment_91() const { return ___m_VerticalAlignment_91; }
	inline int32_t* get_address_of_m_VerticalAlignment_91() { return &___m_VerticalAlignment_91; }
	inline void set_m_VerticalAlignment_91(int32_t value)
	{
		___m_VerticalAlignment_91 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textAlignment_92)); }
	inline int32_t get_m_textAlignment_92() const { return ___m_textAlignment_92; }
	inline int32_t* get_address_of_m_textAlignment_92() { return &___m_textAlignment_92; }
	inline void set_m_textAlignment_92(int32_t value)
	{
		___m_textAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_93() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustification_93)); }
	inline int32_t get_m_lineJustification_93() const { return ___m_lineJustification_93; }
	inline int32_t* get_address_of_m_lineJustification_93() { return &___m_lineJustification_93; }
	inline void set_m_lineJustification_93(int32_t value)
	{
		___m_lineJustification_93 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_94() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustificationStack_94)); }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  get_m_lineJustificationStack_94() const { return ___m_lineJustificationStack_94; }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 * get_address_of_m_lineJustificationStack_94() { return &___m_lineJustificationStack_94; }
	inline void set_m_lineJustificationStack_94(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  value)
	{
		___m_lineJustificationStack_94 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_94))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_95() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textContainerLocalCorners_95)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_textContainerLocalCorners_95() const { return ___m_textContainerLocalCorners_95; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_textContainerLocalCorners_95() { return &___m_textContainerLocalCorners_95; }
	inline void set_m_textContainerLocalCorners_95(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_textContainerLocalCorners_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_95), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_96() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterSpacing_96)); }
	inline float get_m_characterSpacing_96() const { return ___m_characterSpacing_96; }
	inline float* get_address_of_m_characterSpacing_96() { return &___m_characterSpacing_96; }
	inline void set_m_characterSpacing_96(float value)
	{
		___m_characterSpacing_96 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_97() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cSpacing_97)); }
	inline float get_m_cSpacing_97() const { return ___m_cSpacing_97; }
	inline float* get_address_of_m_cSpacing_97() { return &___m_cSpacing_97; }
	inline void set_m_cSpacing_97(float value)
	{
		___m_cSpacing_97 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_monoSpacing_98)); }
	inline float get_m_monoSpacing_98() const { return ___m_monoSpacing_98; }
	inline float* get_address_of_m_monoSpacing_98() { return &___m_monoSpacing_98; }
	inline void set_m_monoSpacing_98(float value)
	{
		___m_monoSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordSpacing_99)); }
	inline float get_m_wordSpacing_99() const { return ___m_wordSpacing_99; }
	inline float* get_address_of_m_wordSpacing_99() { return &___m_wordSpacing_99; }
	inline void set_m_wordSpacing_99(float value)
	{
		___m_wordSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacing_100)); }
	inline float get_m_lineSpacing_100() const { return ___m_lineSpacing_100; }
	inline float* get_address_of_m_lineSpacing_100() { return &___m_lineSpacing_100; }
	inline void set_m_lineSpacing_100(float value)
	{
		___m_lineSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_101() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingDelta_101)); }
	inline float get_m_lineSpacingDelta_101() const { return ___m_lineSpacingDelta_101; }
	inline float* get_address_of_m_lineSpacingDelta_101() { return &___m_lineSpacingDelta_101; }
	inline void set_m_lineSpacingDelta_101(float value)
	{
		___m_lineSpacingDelta_101 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_102() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineHeight_102)); }
	inline float get_m_lineHeight_102() const { return ___m_lineHeight_102; }
	inline float* get_address_of_m_lineHeight_102() { return &___m_lineHeight_102; }
	inline void set_m_lineHeight_102(float value)
	{
		___m_lineHeight_102 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_103() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsDrivenLineSpacing_103)); }
	inline bool get_m_IsDrivenLineSpacing_103() const { return ___m_IsDrivenLineSpacing_103; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_103() { return &___m_IsDrivenLineSpacing_103; }
	inline void set_m_IsDrivenLineSpacing_103(bool value)
	{
		___m_IsDrivenLineSpacing_103 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_104() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingMax_104)); }
	inline float get_m_lineSpacingMax_104() const { return ___m_lineSpacingMax_104; }
	inline float* get_address_of_m_lineSpacingMax_104() { return &___m_lineSpacingMax_104; }
	inline void set_m_lineSpacingMax_104(float value)
	{
		___m_lineSpacingMax_104 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_105() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_paragraphSpacing_105)); }
	inline float get_m_paragraphSpacing_105() const { return ___m_paragraphSpacing_105; }
	inline float* get_address_of_m_paragraphSpacing_105() { return &___m_paragraphSpacing_105; }
	inline void set_m_paragraphSpacing_105(float value)
	{
		___m_paragraphSpacing_105 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_106() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthMaxAdj_106)); }
	inline float get_m_charWidthMaxAdj_106() const { return ___m_charWidthMaxAdj_106; }
	inline float* get_address_of_m_charWidthMaxAdj_106() { return &___m_charWidthMaxAdj_106; }
	inline void set_m_charWidthMaxAdj_106(float value)
	{
		___m_charWidthMaxAdj_106 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_107() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthAdjDelta_107)); }
	inline float get_m_charWidthAdjDelta_107() const { return ___m_charWidthAdjDelta_107; }
	inline float* get_address_of_m_charWidthAdjDelta_107() { return &___m_charWidthAdjDelta_107; }
	inline void set_m_charWidthAdjDelta_107(float value)
	{
		___m_charWidthAdjDelta_107 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_108() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableWordWrapping_108)); }
	inline bool get_m_enableWordWrapping_108() const { return ___m_enableWordWrapping_108; }
	inline bool* get_address_of_m_enableWordWrapping_108() { return &___m_enableWordWrapping_108; }
	inline void set_m_enableWordWrapping_108(bool value)
	{
		___m_enableWordWrapping_108 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_109() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCharacterWrappingEnabled_109)); }
	inline bool get_m_isCharacterWrappingEnabled_109() const { return ___m_isCharacterWrappingEnabled_109; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_109() { return &___m_isCharacterWrappingEnabled_109; }
	inline void set_m_isCharacterWrappingEnabled_109(bool value)
	{
		___m_isCharacterWrappingEnabled_109 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_110() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNonBreakingSpace_110)); }
	inline bool get_m_isNonBreakingSpace_110() const { return ___m_isNonBreakingSpace_110; }
	inline bool* get_address_of_m_isNonBreakingSpace_110() { return &___m_isNonBreakingSpace_110; }
	inline void set_m_isNonBreakingSpace_110(bool value)
	{
		___m_isNonBreakingSpace_110 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_111() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isIgnoringAlignment_111)); }
	inline bool get_m_isIgnoringAlignment_111() const { return ___m_isIgnoringAlignment_111; }
	inline bool* get_address_of_m_isIgnoringAlignment_111() { return &___m_isIgnoringAlignment_111; }
	inline void set_m_isIgnoringAlignment_111(bool value)
	{
		___m_isIgnoringAlignment_111 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_112() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordWrappingRatios_112)); }
	inline float get_m_wordWrappingRatios_112() const { return ___m_wordWrappingRatios_112; }
	inline float* get_address_of_m_wordWrappingRatios_112() { return &___m_wordWrappingRatios_112; }
	inline void set_m_wordWrappingRatios_112(float value)
	{
		___m_wordWrappingRatios_112 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_113() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overflowMode_113)); }
	inline int32_t get_m_overflowMode_113() const { return ___m_overflowMode_113; }
	inline int32_t* get_address_of_m_overflowMode_113() { return &___m_overflowMode_113; }
	inline void set_m_overflowMode_113(int32_t value)
	{
		___m_overflowMode_113 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_114() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstOverflowCharacterIndex_114)); }
	inline int32_t get_m_firstOverflowCharacterIndex_114() const { return ___m_firstOverflowCharacterIndex_114; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_114() { return &___m_firstOverflowCharacterIndex_114; }
	inline void set_m_firstOverflowCharacterIndex_114(int32_t value)
	{
		___m_firstOverflowCharacterIndex_114 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_115() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_linkedTextComponent_115)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_linkedTextComponent_115() const { return ___m_linkedTextComponent_115; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_linkedTextComponent_115() { return &___m_linkedTextComponent_115; }
	inline void set_m_linkedTextComponent_115(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_linkedTextComponent_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_115), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_116() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___parentLinkedComponent_116)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_parentLinkedComponent_116() const { return ___parentLinkedComponent_116; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_parentLinkedComponent_116() { return &___parentLinkedComponent_116; }
	inline void set_parentLinkedComponent_116(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___parentLinkedComponent_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_116), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_117() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isTextTruncated_117)); }
	inline bool get_m_isTextTruncated_117() const { return ___m_isTextTruncated_117; }
	inline bool* get_address_of_m_isTextTruncated_117() { return &___m_isTextTruncated_117; }
	inline void set_m_isTextTruncated_117(bool value)
	{
		___m_isTextTruncated_117 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_118() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableKerning_118)); }
	inline bool get_m_enableKerning_118() const { return ___m_enableKerning_118; }
	inline bool* get_address_of_m_enableKerning_118() { return &___m_enableKerning_118; }
	inline void set_m_enableKerning_118(bool value)
	{
		___m_enableKerning_118 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_119() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_GlyphHorizontalAdvanceAdjustment_119)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_119() const { return ___m_GlyphHorizontalAdvanceAdjustment_119; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_119() { return &___m_GlyphHorizontalAdvanceAdjustment_119; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_119(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_119 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_120() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableExtraPadding_120)); }
	inline bool get_m_enableExtraPadding_120() const { return ___m_enableExtraPadding_120; }
	inline bool* get_address_of_m_enableExtraPadding_120() { return &___m_enableExtraPadding_120; }
	inline void set_m_enableExtraPadding_120(bool value)
	{
		___m_enableExtraPadding_120 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_121() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___checkPaddingRequired_121)); }
	inline bool get_checkPaddingRequired_121() const { return ___checkPaddingRequired_121; }
	inline bool* get_address_of_checkPaddingRequired_121() { return &___checkPaddingRequired_121; }
	inline void set_checkPaddingRequired_121(bool value)
	{
		___checkPaddingRequired_121 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_122() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRichText_122)); }
	inline bool get_m_isRichText_122() const { return ___m_isRichText_122; }
	inline bool* get_address_of_m_isRichText_122() { return &___m_isRichText_122; }
	inline void set_m_isRichText_122(bool value)
	{
		___m_isRichText_122 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_123() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_parseCtrlCharacters_123)); }
	inline bool get_m_parseCtrlCharacters_123() const { return ___m_parseCtrlCharacters_123; }
	inline bool* get_address_of_m_parseCtrlCharacters_123() { return &___m_parseCtrlCharacters_123; }
	inline void set_m_parseCtrlCharacters_123(bool value)
	{
		___m_parseCtrlCharacters_123 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_124() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOverlay_124)); }
	inline bool get_m_isOverlay_124() const { return ___m_isOverlay_124; }
	inline bool* get_address_of_m_isOverlay_124() { return &___m_isOverlay_124; }
	inline void set_m_isOverlay_124(bool value)
	{
		___m_isOverlay_124 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_125() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOrthographic_125)); }
	inline bool get_m_isOrthographic_125() const { return ___m_isOrthographic_125; }
	inline bool* get_address_of_m_isOrthographic_125() { return &___m_isOrthographic_125; }
	inline void set_m_isOrthographic_125(bool value)
	{
		___m_isOrthographic_125 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_126() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCullingEnabled_126)); }
	inline bool get_m_isCullingEnabled_126() const { return ___m_isCullingEnabled_126; }
	inline bool* get_address_of_m_isCullingEnabled_126() { return &___m_isCullingEnabled_126; }
	inline void set_m_isCullingEnabled_126(bool value)
	{
		___m_isCullingEnabled_126 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_127() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaskingEnabled_127)); }
	inline bool get_m_isMaskingEnabled_127() const { return ___m_isMaskingEnabled_127; }
	inline bool* get_address_of_m_isMaskingEnabled_127() { return &___m_isMaskingEnabled_127; }
	inline void set_m_isMaskingEnabled_127(bool value)
	{
		___m_isMaskingEnabled_127 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_128() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___isMaskUpdateRequired_128)); }
	inline bool get_isMaskUpdateRequired_128() const { return ___isMaskUpdateRequired_128; }
	inline bool* get_address_of_isMaskUpdateRequired_128() { return &___isMaskUpdateRequired_128; }
	inline void set_isMaskUpdateRequired_128(bool value)
	{
		___isMaskUpdateRequired_128 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_129() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreCulling_129)); }
	inline bool get_m_ignoreCulling_129() const { return ___m_ignoreCulling_129; }
	inline bool* get_address_of_m_ignoreCulling_129() { return &___m_ignoreCulling_129; }
	inline void set_m_ignoreCulling_129(bool value)
	{
		___m_ignoreCulling_129 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_130() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_horizontalMapping_130)); }
	inline int32_t get_m_horizontalMapping_130() const { return ___m_horizontalMapping_130; }
	inline int32_t* get_address_of_m_horizontalMapping_130() { return &___m_horizontalMapping_130; }
	inline void set_m_horizontalMapping_130(int32_t value)
	{
		___m_horizontalMapping_130 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_131() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticalMapping_131)); }
	inline int32_t get_m_verticalMapping_131() const { return ___m_verticalMapping_131; }
	inline int32_t* get_address_of_m_verticalMapping_131() { return &___m_verticalMapping_131; }
	inline void set_m_verticalMapping_131(int32_t value)
	{
		___m_verticalMapping_131 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_132() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_uvLineOffset_132)); }
	inline float get_m_uvLineOffset_132() const { return ___m_uvLineOffset_132; }
	inline float* get_address_of_m_uvLineOffset_132() { return &___m_uvLineOffset_132; }
	inline void set_m_uvLineOffset_132(float value)
	{
		___m_uvLineOffset_132 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_133() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderMode_133)); }
	inline int32_t get_m_renderMode_133() const { return ___m_renderMode_133; }
	inline int32_t* get_address_of_m_renderMode_133() { return &___m_renderMode_133; }
	inline void set_m_renderMode_133(int32_t value)
	{
		___m_renderMode_133 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_134() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_geometrySortingOrder_134)); }
	inline int32_t get_m_geometrySortingOrder_134() const { return ___m_geometrySortingOrder_134; }
	inline int32_t* get_address_of_m_geometrySortingOrder_134() { return &___m_geometrySortingOrder_134; }
	inline void set_m_geometrySortingOrder_134(int32_t value)
	{
		___m_geometrySortingOrder_134 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_135() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsTextObjectScaleStatic_135)); }
	inline bool get_m_IsTextObjectScaleStatic_135() const { return ___m_IsTextObjectScaleStatic_135; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_135() { return &___m_IsTextObjectScaleStatic_135; }
	inline void set_m_IsTextObjectScaleStatic_135(bool value)
	{
		___m_IsTextObjectScaleStatic_135 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_136() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VertexBufferAutoSizeReduction_136)); }
	inline bool get_m_VertexBufferAutoSizeReduction_136() const { return ___m_VertexBufferAutoSizeReduction_136; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_136() { return &___m_VertexBufferAutoSizeReduction_136; }
	inline void set_m_VertexBufferAutoSizeReduction_136(bool value)
	{
		___m_VertexBufferAutoSizeReduction_136 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_137() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacter_137)); }
	inline int32_t get_m_firstVisibleCharacter_137() const { return ___m_firstVisibleCharacter_137; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_137() { return &___m_firstVisibleCharacter_137; }
	inline void set_m_firstVisibleCharacter_137(int32_t value)
	{
		___m_firstVisibleCharacter_137 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_138() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleCharacters_138)); }
	inline int32_t get_m_maxVisibleCharacters_138() const { return ___m_maxVisibleCharacters_138; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_138() { return &___m_maxVisibleCharacters_138; }
	inline void set_m_maxVisibleCharacters_138(int32_t value)
	{
		___m_maxVisibleCharacters_138 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_139() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleWords_139)); }
	inline int32_t get_m_maxVisibleWords_139() const { return ___m_maxVisibleWords_139; }
	inline int32_t* get_address_of_m_maxVisibleWords_139() { return &___m_maxVisibleWords_139; }
	inline void set_m_maxVisibleWords_139(int32_t value)
	{
		___m_maxVisibleWords_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_140() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleLines_140)); }
	inline int32_t get_m_maxVisibleLines_140() const { return ___m_maxVisibleLines_140; }
	inline int32_t* get_address_of_m_maxVisibleLines_140() { return &___m_maxVisibleLines_140; }
	inline void set_m_maxVisibleLines_140(int32_t value)
	{
		___m_maxVisibleLines_140 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_141() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_useMaxVisibleDescender_141)); }
	inline bool get_m_useMaxVisibleDescender_141() const { return ___m_useMaxVisibleDescender_141; }
	inline bool* get_address_of_m_useMaxVisibleDescender_141() { return &___m_useMaxVisibleDescender_141; }
	inline void set_m_useMaxVisibleDescender_141(bool value)
	{
		___m_useMaxVisibleDescender_141 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_142() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageToDisplay_142)); }
	inline int32_t get_m_pageToDisplay_142() const { return ___m_pageToDisplay_142; }
	inline int32_t* get_address_of_m_pageToDisplay_142() { return &___m_pageToDisplay_142; }
	inline void set_m_pageToDisplay_142(int32_t value)
	{
		___m_pageToDisplay_142 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_143() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNewPage_143)); }
	inline bool get_m_isNewPage_143() const { return ___m_isNewPage_143; }
	inline bool* get_address_of_m_isNewPage_143() { return &___m_isNewPage_143; }
	inline void set_m_isNewPage_143(bool value)
	{
		___m_isNewPage_143 = value;
	}

	inline static int32_t get_offset_of_m_margin_144() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_margin_144)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_margin_144() const { return ___m_margin_144; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_margin_144() { return &___m_margin_144; }
	inline void set_m_margin_144(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_margin_144 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_145() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginLeft_145)); }
	inline float get_m_marginLeft_145() const { return ___m_marginLeft_145; }
	inline float* get_address_of_m_marginLeft_145() { return &___m_marginLeft_145; }
	inline void set_m_marginLeft_145(float value)
	{
		___m_marginLeft_145 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_146() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginRight_146)); }
	inline float get_m_marginRight_146() const { return ___m_marginRight_146; }
	inline float* get_address_of_m_marginRight_146() { return &___m_marginRight_146; }
	inline void set_m_marginRight_146(float value)
	{
		___m_marginRight_146 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_147() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginWidth_147)); }
	inline float get_m_marginWidth_147() const { return ___m_marginWidth_147; }
	inline float* get_address_of_m_marginWidth_147() { return &___m_marginWidth_147; }
	inline void set_m_marginWidth_147(float value)
	{
		___m_marginWidth_147 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginHeight_148)); }
	inline float get_m_marginHeight_148() const { return ___m_marginHeight_148; }
	inline float* get_address_of_m_marginHeight_148() { return &___m_marginHeight_148; }
	inline void set_m_marginHeight_148(float value)
	{
		___m_marginHeight_148 = value;
	}

	inline static int32_t get_offset_of_m_width_149() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_width_149)); }
	inline float get_m_width_149() const { return ___m_width_149; }
	inline float* get_address_of_m_width_149() { return &___m_width_149; }
	inline void set_m_width_149(float value)
	{
		___m_width_149 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_150() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textInfo_150)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_m_textInfo_150() const { return ___m_textInfo_150; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_m_textInfo_150() { return &___m_textInfo_150; }
	inline void set_m_textInfo_150(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___m_textInfo_150 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_150), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_151() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_havePropertiesChanged_151)); }
	inline bool get_m_havePropertiesChanged_151() const { return ___m_havePropertiesChanged_151; }
	inline bool* get_address_of_m_havePropertiesChanged_151() { return &___m_havePropertiesChanged_151; }
	inline void set_m_havePropertiesChanged_151(bool value)
	{
		___m_havePropertiesChanged_151 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_152() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingLegacyAnimationComponent_152)); }
	inline bool get_m_isUsingLegacyAnimationComponent_152() const { return ___m_isUsingLegacyAnimationComponent_152; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_152() { return &___m_isUsingLegacyAnimationComponent_152; }
	inline void set_m_isUsingLegacyAnimationComponent_152(bool value)
	{
		___m_isUsingLegacyAnimationComponent_152 = value;
	}

	inline static int32_t get_offset_of_m_transform_153() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_transform_153)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_transform_153() const { return ___m_transform_153; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_transform_153() { return &___m_transform_153; }
	inline void set_m_transform_153(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_transform_153 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_153), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_154() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_rectTransform_154)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_rectTransform_154() const { return ___m_rectTransform_154; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_rectTransform_154() { return &___m_rectTransform_154; }
	inline void set_m_rectTransform_154(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_rectTransform_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_155() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PreviousRectTransformSize_155)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousRectTransformSize_155() const { return ___m_PreviousRectTransformSize_155; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousRectTransformSize_155() { return &___m_PreviousRectTransformSize_155; }
	inline void set_m_PreviousRectTransformSize_155(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousRectTransformSize_155 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_156() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PreviousPivotPosition_156)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousPivotPosition_156() const { return ___m_PreviousPivotPosition_156; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousPivotPosition_156() { return &___m_PreviousPivotPosition_156; }
	inline void set_m_PreviousPivotPosition_156(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousPivotPosition_156 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_157() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___U3CautoSizeTextContainerU3Ek__BackingField_157)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_157() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_157; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_157() { return &___U3CautoSizeTextContainerU3Ek__BackingField_157; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_157(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_157 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_158() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_autoSizeTextContainer_158)); }
	inline bool get_m_autoSizeTextContainer_158() const { return ___m_autoSizeTextContainer_158; }
	inline bool* get_address_of_m_autoSizeTextContainer_158() { return &___m_autoSizeTextContainer_158; }
	inline void set_m_autoSizeTextContainer_158(bool value)
	{
		___m_autoSizeTextContainer_158 = value;
	}

	inline static int32_t get_offset_of_m_mesh_159() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_mesh_159)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_mesh_159() const { return ___m_mesh_159; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_mesh_159() { return &___m_mesh_159; }
	inline void set_m_mesh_159(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_mesh_159 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_159), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_160() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isVolumetricText_160)); }
	inline bool get_m_isVolumetricText_160() const { return ___m_isVolumetricText_160; }
	inline bool* get_address_of_m_isVolumetricText_160() { return &___m_isVolumetricText_160; }
	inline void set_m_isVolumetricText_160(bool value)
	{
		___m_isVolumetricText_160 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_163() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___OnPreRenderText_163)); }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * get_OnPreRenderText_163() const { return ___OnPreRenderText_163; }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD ** get_address_of_OnPreRenderText_163() { return &___OnPreRenderText_163; }
	inline void set_OnPreRenderText_163(Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * value)
	{
		___OnPreRenderText_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_163), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_164() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimator_164)); }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * get_m_spriteAnimator_164() const { return ___m_spriteAnimator_164; }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 ** get_address_of_m_spriteAnimator_164() { return &___m_spriteAnimator_164; }
	inline void set_m_spriteAnimator_164(TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * value)
	{
		___m_spriteAnimator_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_165() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleHeight_165)); }
	inline float get_m_flexibleHeight_165() const { return ___m_flexibleHeight_165; }
	inline float* get_address_of_m_flexibleHeight_165() { return &___m_flexibleHeight_165; }
	inline void set_m_flexibleHeight_165(float value)
	{
		___m_flexibleHeight_165 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_166() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleWidth_166)); }
	inline float get_m_flexibleWidth_166() const { return ___m_flexibleWidth_166; }
	inline float* get_address_of_m_flexibleWidth_166() { return &___m_flexibleWidth_166; }
	inline void set_m_flexibleWidth_166(float value)
	{
		___m_flexibleWidth_166 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_167() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minWidth_167)); }
	inline float get_m_minWidth_167() const { return ___m_minWidth_167; }
	inline float* get_address_of_m_minWidth_167() { return &___m_minWidth_167; }
	inline void set_m_minWidth_167(float value)
	{
		___m_minWidth_167 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_168() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minHeight_168)); }
	inline float get_m_minHeight_168() const { return ___m_minHeight_168; }
	inline float* get_address_of_m_minHeight_168() { return &___m_minHeight_168; }
	inline void set_m_minHeight_168(float value)
	{
		___m_minHeight_168 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_169() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxWidth_169)); }
	inline float get_m_maxWidth_169() const { return ___m_maxWidth_169; }
	inline float* get_address_of_m_maxWidth_169() { return &___m_maxWidth_169; }
	inline void set_m_maxWidth_169(float value)
	{
		___m_maxWidth_169 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_170() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxHeight_170)); }
	inline float get_m_maxHeight_170() const { return ___m_maxHeight_170; }
	inline float* get_address_of_m_maxHeight_170() { return &___m_maxHeight_170; }
	inline void set_m_maxHeight_170(float value)
	{
		___m_maxHeight_170 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_171() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_LayoutElement_171)); }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * get_m_LayoutElement_171() const { return ___m_LayoutElement_171; }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B ** get_address_of_m_LayoutElement_171() { return &___m_LayoutElement_171; }
	inline void set_m_LayoutElement_171(LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * value)
	{
		___m_LayoutElement_171 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_171), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_172() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredWidth_172)); }
	inline float get_m_preferredWidth_172() const { return ___m_preferredWidth_172; }
	inline float* get_address_of_m_preferredWidth_172() { return &___m_preferredWidth_172; }
	inline void set_m_preferredWidth_172(float value)
	{
		___m_preferredWidth_172 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_173() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedWidth_173)); }
	inline float get_m_renderedWidth_173() const { return ___m_renderedWidth_173; }
	inline float* get_address_of_m_renderedWidth_173() { return &___m_renderedWidth_173; }
	inline void set_m_renderedWidth_173(float value)
	{
		___m_renderedWidth_173 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_174() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredWidthDirty_174)); }
	inline bool get_m_isPreferredWidthDirty_174() const { return ___m_isPreferredWidthDirty_174; }
	inline bool* get_address_of_m_isPreferredWidthDirty_174() { return &___m_isPreferredWidthDirty_174; }
	inline void set_m_isPreferredWidthDirty_174(bool value)
	{
		___m_isPreferredWidthDirty_174 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_175() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredHeight_175)); }
	inline float get_m_preferredHeight_175() const { return ___m_preferredHeight_175; }
	inline float* get_address_of_m_preferredHeight_175() { return &___m_preferredHeight_175; }
	inline void set_m_preferredHeight_175(float value)
	{
		___m_preferredHeight_175 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_176() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedHeight_176)); }
	inline float get_m_renderedHeight_176() const { return ___m_renderedHeight_176; }
	inline float* get_address_of_m_renderedHeight_176() { return &___m_renderedHeight_176; }
	inline void set_m_renderedHeight_176(float value)
	{
		___m_renderedHeight_176 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_177() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredHeightDirty_177)); }
	inline bool get_m_isPreferredHeightDirty_177() const { return ___m_isPreferredHeightDirty_177; }
	inline bool* get_address_of_m_isPreferredHeightDirty_177() { return &___m_isPreferredHeightDirty_177; }
	inline void set_m_isPreferredHeightDirty_177(bool value)
	{
		___m_isPreferredHeightDirty_177 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_178() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculatingPreferredValues_178)); }
	inline bool get_m_isCalculatingPreferredValues_178() const { return ___m_isCalculatingPreferredValues_178; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_178() { return &___m_isCalculatingPreferredValues_178; }
	inline void set_m_isCalculatingPreferredValues_178(bool value)
	{
		___m_isCalculatingPreferredValues_178 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_179() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutPriority_179)); }
	inline int32_t get_m_layoutPriority_179() const { return ___m_layoutPriority_179; }
	inline int32_t* get_address_of_m_layoutPriority_179() { return &___m_layoutPriority_179; }
	inline void set_m_layoutPriority_179(int32_t value)
	{
		___m_layoutPriority_179 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_180() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLayoutDirty_180)); }
	inline bool get_m_isLayoutDirty_180() const { return ___m_isLayoutDirty_180; }
	inline bool* get_address_of_m_isLayoutDirty_180() { return &___m_isLayoutDirty_180; }
	inline void set_m_isLayoutDirty_180(bool value)
	{
		___m_isLayoutDirty_180 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_181() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isAwake_181)); }
	inline bool get_m_isAwake_181() const { return ___m_isAwake_181; }
	inline bool* get_address_of_m_isAwake_181() { return &___m_isAwake_181; }
	inline void set_m_isAwake_181(bool value)
	{
		___m_isAwake_181 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_182() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isWaitingOnResourceLoad_182)); }
	inline bool get_m_isWaitingOnResourceLoad_182() const { return ___m_isWaitingOnResourceLoad_182; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_182() { return &___m_isWaitingOnResourceLoad_182; }
	inline void set_m_isWaitingOnResourceLoad_182(bool value)
	{
		___m_isWaitingOnResourceLoad_182 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_183() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isInputParsingRequired_183)); }
	inline bool get_m_isInputParsingRequired_183() const { return ___m_isInputParsingRequired_183; }
	inline bool* get_address_of_m_isInputParsingRequired_183() { return &___m_isInputParsingRequired_183; }
	inline void set_m_isInputParsingRequired_183(bool value)
	{
		___m_isInputParsingRequired_183 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_184() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_inputSource_184)); }
	inline int32_t get_m_inputSource_184() const { return ___m_inputSource_184; }
	inline int32_t* get_address_of_m_inputSource_184() { return &___m_inputSource_184; }
	inline void set_m_inputSource_184(int32_t value)
	{
		___m_inputSource_184 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_185() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScale_185)); }
	inline float get_m_fontScale_185() const { return ___m_fontScale_185; }
	inline float* get_address_of_m_fontScale_185() { return &___m_fontScale_185; }
	inline void set_m_fontScale_185(float value)
	{
		___m_fontScale_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_186() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScaleMultiplier_186)); }
	inline float get_m_fontScaleMultiplier_186() const { return ___m_fontScaleMultiplier_186; }
	inline float* get_address_of_m_fontScaleMultiplier_186() { return &___m_fontScaleMultiplier_186; }
	inline void set_m_fontScaleMultiplier_186(float value)
	{
		___m_fontScaleMultiplier_186 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_187() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlTag_187)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_htmlTag_187() const { return ___m_htmlTag_187; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_htmlTag_187() { return &___m_htmlTag_187; }
	inline void set_m_htmlTag_187(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_htmlTag_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_188() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xmlAttribute_188)); }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* get_m_xmlAttribute_188() const { return ___m_xmlAttribute_188; }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652** get_address_of_m_xmlAttribute_188() { return &___m_xmlAttribute_188; }
	inline void set_m_xmlAttribute_188(RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* value)
	{
		___m_xmlAttribute_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_189() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_attributeParameterValues_189)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_attributeParameterValues_189() const { return ___m_attributeParameterValues_189; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_attributeParameterValues_189() { return &___m_attributeParameterValues_189; }
	inline void set_m_attributeParameterValues_189(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_attributeParameterValues_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_189), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_LineIndent_190)); }
	inline float get_tag_LineIndent_190() const { return ___tag_LineIndent_190; }
	inline float* get_address_of_tag_LineIndent_190() { return &___tag_LineIndent_190; }
	inline void set_tag_LineIndent_190(float value)
	{
		___tag_LineIndent_190 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_Indent_191)); }
	inline float get_tag_Indent_191() const { return ___tag_Indent_191; }
	inline float* get_address_of_tag_Indent_191() { return &___tag_Indent_191; }
	inline void set_tag_Indent_191(float value)
	{
		___tag_Indent_191 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_192() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_indentStack_192)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_indentStack_192() const { return ___m_indentStack_192; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_indentStack_192() { return &___m_indentStack_192; }
	inline void set_m_indentStack_192(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_indentStack_192 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_192))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_193() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_NoParsing_193)); }
	inline bool get_tag_NoParsing_193() const { return ___tag_NoParsing_193; }
	inline bool* get_address_of_tag_NoParsing_193() { return &___tag_NoParsing_193; }
	inline void set_tag_NoParsing_193(bool value)
	{
		___tag_NoParsing_193 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_194() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isParsingText_194)); }
	inline bool get_m_isParsingText_194() const { return ___m_isParsingText_194; }
	inline bool* get_address_of_m_isParsingText_194() { return &___m_isParsingText_194; }
	inline void set_m_isParsingText_194(bool value)
	{
		___m_isParsingText_194 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_195() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FXMatrix_195)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_FXMatrix_195() const { return ___m_FXMatrix_195; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_FXMatrix_195() { return &___m_FXMatrix_195; }
	inline void set_m_FXMatrix_195(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_FXMatrix_195 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_196() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isFXMatrixSet_196)); }
	inline bool get_m_isFXMatrixSet_196() const { return ___m_isFXMatrixSet_196; }
	inline bool* get_address_of_m_isFXMatrixSet_196() { return &___m_isFXMatrixSet_196; }
	inline void set_m_isFXMatrixSet_196(bool value)
	{
		___m_isFXMatrixSet_196 = value;
	}

	inline static int32_t get_offset_of_m_InternalParsingBuffer_197() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_InternalParsingBuffer_197)); }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* get_m_InternalParsingBuffer_197() const { return ___m_InternalParsingBuffer_197; }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505** get_address_of_m_InternalParsingBuffer_197() { return &___m_InternalParsingBuffer_197; }
	inline void set_m_InternalParsingBuffer_197(UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* value)
	{
		___m_InternalParsingBuffer_197 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalParsingBuffer_197), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalParsingBufferSize_198() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_InternalParsingBufferSize_198)); }
	inline int32_t get_m_InternalParsingBufferSize_198() const { return ___m_InternalParsingBufferSize_198; }
	inline int32_t* get_address_of_m_InternalParsingBufferSize_198() { return &___m_InternalParsingBufferSize_198; }
	inline void set_m_InternalParsingBufferSize_198(int32_t value)
	{
		___m_InternalParsingBufferSize_198 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_199() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_internalCharacterInfo_199)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_m_internalCharacterInfo_199() const { return ___m_internalCharacterInfo_199; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_m_internalCharacterInfo_199() { return &___m_internalCharacterInfo_199; }
	inline void set_m_internalCharacterInfo_199(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___m_internalCharacterInfo_199 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_199), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_200() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_input_CharArray_200)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_input_CharArray_200() const { return ___m_input_CharArray_200; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_input_CharArray_200() { return &___m_input_CharArray_200; }
	inline void set_m_input_CharArray_200(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_input_CharArray_200 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_200), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_201() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charArray_Length_201)); }
	inline int32_t get_m_charArray_Length_201() const { return ___m_charArray_Length_201; }
	inline int32_t* get_address_of_m_charArray_Length_201() { return &___m_charArray_Length_201; }
	inline void set_m_charArray_Length_201(int32_t value)
	{
		___m_charArray_Length_201 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_202() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_totalCharacterCount_202)); }
	inline int32_t get_m_totalCharacterCount_202() const { return ___m_totalCharacterCount_202; }
	inline int32_t* get_address_of_m_totalCharacterCount_202() { return &___m_totalCharacterCount_202; }
	inline void set_m_totalCharacterCount_202(int32_t value)
	{
		___m_totalCharacterCount_202 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedWordWrapState_203)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedWordWrapState_203() const { return ___m_SavedWordWrapState_203; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedWordWrapState_203() { return &___m_SavedWordWrapState_203; }
	inline void set_m_SavedWordWrapState_203(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedWordWrapState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLineState_204)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLineState_204() const { return ___m_SavedLineState_204; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLineState_204() { return &___m_SavedLineState_204; }
	inline void set_m_SavedLineState_204(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLineState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedEllipsisState_205)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedEllipsisState_205() const { return ___m_SavedEllipsisState_205; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedEllipsisState_205() { return &___m_SavedEllipsisState_205; }
	inline void set_m_SavedEllipsisState_205(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedEllipsisState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_206() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLastValidState_206)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLastValidState_206() const { return ___m_SavedLastValidState_206; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLastValidState_206() { return &___m_SavedLastValidState_206; }
	inline void set_m_SavedLastValidState_206(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLastValidState_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_207() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedSoftLineBreakState_207)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedSoftLineBreakState_207() const { return ___m_SavedSoftLineBreakState_207; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedSoftLineBreakState_207() { return &___m_SavedSoftLineBreakState_207; }
	inline void set_m_SavedSoftLineBreakState_207(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedSoftLineBreakState_207 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_208() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_EllipsisInsertionCandidateStack_208)); }
	inline TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  get_m_EllipsisInsertionCandidateStack_208() const { return ___m_EllipsisInsertionCandidateStack_208; }
	inline TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E * get_address_of_m_EllipsisInsertionCandidateStack_208() { return &___m_EllipsisInsertionCandidateStack_208; }
	inline void set_m_EllipsisInsertionCandidateStack_208(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  value)
	{
		___m_EllipsisInsertionCandidateStack_208 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_208))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_209() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterCount_209)); }
	inline int32_t get_m_characterCount_209() const { return ___m_characterCount_209; }
	inline int32_t* get_address_of_m_characterCount_209() { return &___m_characterCount_209; }
	inline void set_m_characterCount_209(int32_t value)
	{
		___m_characterCount_209 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstCharacterOfLine_210)); }
	inline int32_t get_m_firstCharacterOfLine_210() const { return ___m_firstCharacterOfLine_210; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_210() { return &___m_firstCharacterOfLine_210; }
	inline void set_m_firstCharacterOfLine_210(int32_t value)
	{
		___m_firstCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacterOfLine_211)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_211() const { return ___m_firstVisibleCharacterOfLine_211; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_211() { return &___m_firstVisibleCharacterOfLine_211; }
	inline void set_m_firstVisibleCharacterOfLine_211(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_212() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastCharacterOfLine_212)); }
	inline int32_t get_m_lastCharacterOfLine_212() const { return ___m_lastCharacterOfLine_212; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_212() { return &___m_lastCharacterOfLine_212; }
	inline void set_m_lastCharacterOfLine_212(int32_t value)
	{
		___m_lastCharacterOfLine_212 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_213() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastVisibleCharacterOfLine_213)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_213() const { return ___m_lastVisibleCharacterOfLine_213; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_213() { return &___m_lastVisibleCharacterOfLine_213; }
	inline void set_m_lastVisibleCharacterOfLine_213(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_213 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_214() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineNumber_214)); }
	inline int32_t get_m_lineNumber_214() const { return ___m_lineNumber_214; }
	inline int32_t* get_address_of_m_lineNumber_214() { return &___m_lineNumber_214; }
	inline void set_m_lineNumber_214(int32_t value)
	{
		___m_lineNumber_214 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_215() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineVisibleCharacterCount_215)); }
	inline int32_t get_m_lineVisibleCharacterCount_215() const { return ___m_lineVisibleCharacterCount_215; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_215() { return &___m_lineVisibleCharacterCount_215; }
	inline void set_m_lineVisibleCharacterCount_215(int32_t value)
	{
		___m_lineVisibleCharacterCount_215 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_216() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageNumber_216)); }
	inline int32_t get_m_pageNumber_216() const { return ___m_pageNumber_216; }
	inline int32_t* get_address_of_m_pageNumber_216() { return &___m_pageNumber_216; }
	inline void set_m_pageNumber_216(int32_t value)
	{
		___m_pageNumber_216 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_217() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PageAscender_217)); }
	inline float get_m_PageAscender_217() const { return ___m_PageAscender_217; }
	inline float* get_address_of_m_PageAscender_217() { return &___m_PageAscender_217; }
	inline void set_m_PageAscender_217(float value)
	{
		___m_PageAscender_217 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxTextAscender_218)); }
	inline float get_m_maxTextAscender_218() const { return ___m_maxTextAscender_218; }
	inline float* get_address_of_m_maxTextAscender_218() { return &___m_maxTextAscender_218; }
	inline void set_m_maxTextAscender_218(float value)
	{
		___m_maxTextAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_219() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxCapHeight_219)); }
	inline float get_m_maxCapHeight_219() const { return ___m_maxCapHeight_219; }
	inline float* get_address_of_m_maxCapHeight_219() { return &___m_maxCapHeight_219; }
	inline void set_m_maxCapHeight_219(float value)
	{
		___m_maxCapHeight_219 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ElementAscender_220)); }
	inline float get_m_ElementAscender_220() const { return ___m_ElementAscender_220; }
	inline float* get_address_of_m_ElementAscender_220() { return &___m_ElementAscender_220; }
	inline void set_m_ElementAscender_220(float value)
	{
		___m_ElementAscender_220 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ElementDescender_221)); }
	inline float get_m_ElementDescender_221() const { return ___m_ElementDescender_221; }
	inline float* get_address_of_m_ElementDescender_221() { return &___m_ElementDescender_221; }
	inline void set_m_ElementDescender_221(float value)
	{
		___m_ElementDescender_221 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineAscender_222)); }
	inline float get_m_maxLineAscender_222() const { return ___m_maxLineAscender_222; }
	inline float* get_address_of_m_maxLineAscender_222() { return &___m_maxLineAscender_222; }
	inline void set_m_maxLineAscender_222(float value)
	{
		___m_maxLineAscender_222 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineDescender_223)); }
	inline float get_m_maxLineDescender_223() const { return ___m_maxLineDescender_223; }
	inline float* get_address_of_m_maxLineDescender_223() { return &___m_maxLineDescender_223; }
	inline void set_m_maxLineDescender_223(float value)
	{
		___m_maxLineDescender_223 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_224() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineAscender_224)); }
	inline float get_m_startOfLineAscender_224() const { return ___m_startOfLineAscender_224; }
	inline float* get_address_of_m_startOfLineAscender_224() { return &___m_startOfLineAscender_224; }
	inline void set_m_startOfLineAscender_224(float value)
	{
		___m_startOfLineAscender_224 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_225() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineDescender_225)); }
	inline float get_m_startOfLineDescender_225() const { return ___m_startOfLineDescender_225; }
	inline float* get_address_of_m_startOfLineDescender_225() { return &___m_startOfLineDescender_225; }
	inline void set_m_startOfLineDescender_225(float value)
	{
		___m_startOfLineDescender_225 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_226() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineOffset_226)); }
	inline float get_m_lineOffset_226() const { return ___m_lineOffset_226; }
	inline float* get_address_of_m_lineOffset_226() { return &___m_lineOffset_226; }
	inline void set_m_lineOffset_226(float value)
	{
		___m_lineOffset_226 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_227() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_meshExtents_227)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_m_meshExtents_227() const { return ___m_meshExtents_227; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_m_meshExtents_227() { return &___m_meshExtents_227; }
	inline void set_m_meshExtents_227(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___m_meshExtents_227 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_228() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlColor_228)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_htmlColor_228() const { return ___m_htmlColor_228; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_htmlColor_228() { return &___m_htmlColor_228; }
	inline void set_m_htmlColor_228(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_htmlColor_228 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorStack_229)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_colorStack_229() const { return ___m_colorStack_229; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_colorStack_229() { return &___m_colorStack_229; }
	inline void set_m_colorStack_229(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_colorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColorStack_230)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_underlineColorStack_230() const { return ___m_underlineColorStack_230; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_underlineColorStack_230() { return &___m_underlineColorStack_230; }
	inline void set_m_underlineColorStack_230(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_underlineColorStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColorStack_231)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_strikethroughColorStack_231() const { return ___m_strikethroughColorStack_231; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_strikethroughColorStack_231() { return &___m_strikethroughColorStack_231; }
	inline void set_m_strikethroughColorStack_231(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_strikethroughColorStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_231))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_HighlightStateStack_232)); }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  get_m_HighlightStateStack_232() const { return ___m_HighlightStateStack_232; }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 * get_address_of_m_HighlightStateStack_232() { return &___m_HighlightStateStack_232; }
	inline void set_m_HighlightStateStack_232(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  value)
	{
		___m_HighlightStateStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_232))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_233() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPreset_233)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_colorGradientPreset_233() const { return ___m_colorGradientPreset_233; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_colorGradientPreset_233() { return &___m_colorGradientPreset_233; }
	inline void set_m_colorGradientPreset_233(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_colorGradientPreset_233 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_233), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_234() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientStack_234)); }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  get_m_colorGradientStack_234() const { return ___m_colorGradientStack_234; }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C * get_address_of_m_colorGradientStack_234() { return &___m_colorGradientStack_234; }
	inline void set_m_colorGradientStack_234(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  value)
	{
		___m_colorGradientStack_234 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_234))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_234))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_235() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPresetIsTinted_235)); }
	inline bool get_m_colorGradientPresetIsTinted_235() const { return ___m_colorGradientPresetIsTinted_235; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_235() { return &___m_colorGradientPresetIsTinted_235; }
	inline void set_m_colorGradientPresetIsTinted_235(bool value)
	{
		___m_colorGradientPresetIsTinted_235 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_236() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tabSpacing_236)); }
	inline float get_m_tabSpacing_236() const { return ___m_tabSpacing_236; }
	inline float* get_address_of_m_tabSpacing_236() { return &___m_tabSpacing_236; }
	inline void set_m_tabSpacing_236(float value)
	{
		___m_tabSpacing_236 = value;
	}

	inline static int32_t get_offset_of_m_spacing_237() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spacing_237)); }
	inline float get_m_spacing_237() const { return ___m_spacing_237; }
	inline float* get_address_of_m_spacing_237() { return &___m_spacing_237; }
	inline void set_m_spacing_237(float value)
	{
		___m_spacing_237 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_238() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleStacks_238)); }
	inline TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* get_m_TextStyleStacks_238() const { return ___m_TextStyleStacks_238; }
	inline TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29** get_address_of_m_TextStyleStacks_238() { return &___m_TextStyleStacks_238; }
	inline void set_m_TextStyleStacks_238(TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* value)
	{
		___m_TextStyleStacks_238 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_238), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_239() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleStackDepth_239)); }
	inline int32_t get_m_TextStyleStackDepth_239() const { return ___m_TextStyleStackDepth_239; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_239() { return &___m_TextStyleStackDepth_239; }
	inline void set_m_TextStyleStackDepth_239(int32_t value)
	{
		___m_TextStyleStackDepth_239 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_240() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ItalicAngleStack_240)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_m_ItalicAngleStack_240() const { return ___m_ItalicAngleStack_240; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_m_ItalicAngleStack_240() { return &___m_ItalicAngleStack_240; }
	inline void set_m_ItalicAngleStack_240(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___m_ItalicAngleStack_240 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_240))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_241() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ItalicAngle_241)); }
	inline int32_t get_m_ItalicAngle_241() const { return ___m_ItalicAngle_241; }
	inline int32_t* get_address_of_m_ItalicAngle_241() { return &___m_ItalicAngle_241; }
	inline void set_m_ItalicAngle_241(int32_t value)
	{
		___m_ItalicAngle_241 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_242() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_actionStack_242)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_m_actionStack_242() const { return ___m_actionStack_242; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_m_actionStack_242() { return &___m_actionStack_242; }
	inline void set_m_actionStack_242(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___m_actionStack_242 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_242))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_243() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_padding_243)); }
	inline float get_m_padding_243() const { return ___m_padding_243; }
	inline float* get_address_of_m_padding_243() { return &___m_padding_243; }
	inline void set_m_padding_243(float value)
	{
		___m_padding_243 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_244() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffset_244)); }
	inline float get_m_baselineOffset_244() const { return ___m_baselineOffset_244; }
	inline float* get_address_of_m_baselineOffset_244() { return &___m_baselineOffset_244; }
	inline void set_m_baselineOffset_244(float value)
	{
		___m_baselineOffset_244 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_245() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffsetStack_245)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_baselineOffsetStack_245() const { return ___m_baselineOffsetStack_245; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_baselineOffsetStack_245() { return &___m_baselineOffsetStack_245; }
	inline void set_m_baselineOffsetStack_245(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_baselineOffsetStack_245 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_245))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_246() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xAdvance_246)); }
	inline float get_m_xAdvance_246() const { return ___m_xAdvance_246; }
	inline float* get_address_of_m_xAdvance_246() { return &___m_xAdvance_246; }
	inline void set_m_xAdvance_246(float value)
	{
		___m_xAdvance_246 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_247() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textElementType_247)); }
	inline int32_t get_m_textElementType_247() const { return ___m_textElementType_247; }
	inline int32_t* get_address_of_m_textElementType_247() { return &___m_textElementType_247; }
	inline void set_m_textElementType_247(int32_t value)
	{
		___m_textElementType_247 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_248() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_TextElement_248)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_m_cached_TextElement_248() const { return ___m_cached_TextElement_248; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_m_cached_TextElement_248() { return &___m_cached_TextElement_248; }
	inline void set_m_cached_TextElement_248(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___m_cached_TextElement_248 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_248), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_249() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_Ellipsis_249)); }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  get_m_Ellipsis_249() const { return ___m_Ellipsis_249; }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF * get_address_of_m_Ellipsis_249() { return &___m_Ellipsis_249; }
	inline void set_m_Ellipsis_249(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  value)
	{
		___m_Ellipsis_249 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_249))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_249))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_249))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_250() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_Underline_250)); }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  get_m_Underline_250() const { return ___m_Underline_250; }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF * get_address_of_m_Underline_250() { return &___m_Underline_250; }
	inline void set_m_Underline_250(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  value)
	{
		___m_Underline_250 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_250))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_250))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_250))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_251() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_defaultSpriteAsset_251)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_defaultSpriteAsset_251() const { return ___m_defaultSpriteAsset_251; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_defaultSpriteAsset_251() { return &___m_defaultSpriteAsset_251; }
	inline void set_m_defaultSpriteAsset_251(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_defaultSpriteAsset_251 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_251), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_252() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentSpriteAsset_252)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_currentSpriteAsset_252() const { return ___m_currentSpriteAsset_252; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_currentSpriteAsset_252() { return &___m_currentSpriteAsset_252; }
	inline void set_m_currentSpriteAsset_252(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_currentSpriteAsset_252 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_252), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_253() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteCount_253)); }
	inline int32_t get_m_spriteCount_253() const { return ___m_spriteCount_253; }
	inline int32_t* get_address_of_m_spriteCount_253() { return &___m_spriteCount_253; }
	inline void set_m_spriteCount_253(int32_t value)
	{
		___m_spriteCount_253 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_254() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteIndex_254)); }
	inline int32_t get_m_spriteIndex_254() const { return ___m_spriteIndex_254; }
	inline int32_t* get_address_of_m_spriteIndex_254() { return &___m_spriteIndex_254; }
	inline void set_m_spriteIndex_254(int32_t value)
	{
		___m_spriteIndex_254 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_255() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimationID_255)); }
	inline int32_t get_m_spriteAnimationID_255() const { return ___m_spriteAnimationID_255; }
	inline int32_t* get_address_of_m_spriteAnimationID_255() { return &___m_spriteAnimationID_255; }
	inline void set_m_spriteAnimationID_255(int32_t value)
	{
		___m_spriteAnimationID_255 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_256() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreActiveState_256)); }
	inline bool get_m_ignoreActiveState_256() const { return ___m_ignoreActiveState_256; }
	inline bool* get_address_of_m_ignoreActiveState_256() { return &___m_ignoreActiveState_256; }
	inline void set_m_ignoreActiveState_256(bool value)
	{
		___m_ignoreActiveState_256 = value;
	}

	inline static int32_t get_offset_of_k_Power_257() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___k_Power_257)); }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* get_k_Power_257() const { return ___k_Power_257; }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F** get_address_of_k_Power_257() { return &___k_Power_257; }
	inline void set_k_Power_257(DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* value)
	{
		___k_Power_257 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_257), (void*)value);
	}
};

struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_colorWhite_53;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * ___OnFontAssetRequest_161;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * ___OnSpriteAssetRequest_162;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargePositiveVector2_258;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargeNegativeVector2_259;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_260;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_261;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_262;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_263;

public:
	inline static int32_t get_offset_of_s_colorWhite_53() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___s_colorWhite_53)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_colorWhite_53() const { return ___s_colorWhite_53; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_colorWhite_53() { return &___s_colorWhite_53; }
	inline void set_s_colorWhite_53(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_colorWhite_53 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_161() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___OnFontAssetRequest_161)); }
	inline Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * get_OnFontAssetRequest_161() const { return ___OnFontAssetRequest_161; }
	inline Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 ** get_address_of_OnFontAssetRequest_161() { return &___OnFontAssetRequest_161; }
	inline void set_OnFontAssetRequest_161(Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * value)
	{
		___OnFontAssetRequest_161 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_161), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_162() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___OnSpriteAssetRequest_162)); }
	inline Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * get_OnSpriteAssetRequest_162() const { return ___OnSpriteAssetRequest_162; }
	inline Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 ** get_address_of_OnSpriteAssetRequest_162() { return &___OnSpriteAssetRequest_162; }
	inline void set_OnSpriteAssetRequest_162(Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * value)
	{
		___OnSpriteAssetRequest_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_162), (void*)value);
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_258() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveVector2_258)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargePositiveVector2_258() const { return ___k_LargePositiveVector2_258; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargePositiveVector2_258() { return &___k_LargePositiveVector2_258; }
	inline void set_k_LargePositiveVector2_258(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargePositiveVector2_258 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeVector2_259)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargeNegativeVector2_259() const { return ___k_LargeNegativeVector2_259; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargeNegativeVector2_259() { return &___k_LargeNegativeVector2_259; }
	inline void set_k_LargeNegativeVector2_259(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargeNegativeVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_260() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveFloat_260)); }
	inline float get_k_LargePositiveFloat_260() const { return ___k_LargePositiveFloat_260; }
	inline float* get_address_of_k_LargePositiveFloat_260() { return &___k_LargePositiveFloat_260; }
	inline void set_k_LargePositiveFloat_260(float value)
	{
		___k_LargePositiveFloat_260 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeFloat_261)); }
	inline float get_k_LargeNegativeFloat_261() const { return ___k_LargeNegativeFloat_261; }
	inline float* get_address_of_k_LargeNegativeFloat_261() { return &___k_LargeNegativeFloat_261; }
	inline void set_k_LargeNegativeFloat_261(float value)
	{
		___k_LargeNegativeFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_262() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveInt_262)); }
	inline int32_t get_k_LargePositiveInt_262() const { return ___k_LargePositiveInt_262; }
	inline int32_t* get_address_of_k_LargePositiveInt_262() { return &___k_LargePositiveInt_262; }
	inline void set_k_LargePositiveInt_262(int32_t value)
	{
		___k_LargePositiveInt_262 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeInt_263)); }
	inline int32_t get_k_LargeNegativeInt_263() const { return ___k_LargeNegativeInt_263; }
	inline int32_t* get_address_of_k_LargeNegativeInt_263() { return &___k_LargeNegativeInt_263; }
	inline void set_k_LargeNegativeInt_263(int32_t value)
	{
		___k_LargeNegativeInt_263 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_36;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_37;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_38;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_39;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_40;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_41;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_42;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_43;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_44;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_45;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_46;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_47;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_48;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_49;

public:
	inline static int32_t get_offset_of_m_Sprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_36() const { return ___m_Sprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_36() { return &___m_Sprite_36; }
	inline void set_m_Sprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_37)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_37() const { return ___m_OverrideSprite_37; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_37() { return &___m_OverrideSprite_37; }
	inline void set_m_OverrideSprite_37(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_38)); }
	inline int32_t get_m_Type_38() const { return ___m_Type_38; }
	inline int32_t* get_address_of_m_Type_38() { return &___m_Type_38; }
	inline void set_m_Type_38(int32_t value)
	{
		___m_Type_38 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_39)); }
	inline bool get_m_PreserveAspect_39() const { return ___m_PreserveAspect_39; }
	inline bool* get_address_of_m_PreserveAspect_39() { return &___m_PreserveAspect_39; }
	inline void set_m_PreserveAspect_39(bool value)
	{
		___m_PreserveAspect_39 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_40)); }
	inline bool get_m_FillCenter_40() const { return ___m_FillCenter_40; }
	inline bool* get_address_of_m_FillCenter_40() { return &___m_FillCenter_40; }
	inline void set_m_FillCenter_40(bool value)
	{
		___m_FillCenter_40 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_41)); }
	inline int32_t get_m_FillMethod_41() const { return ___m_FillMethod_41; }
	inline int32_t* get_address_of_m_FillMethod_41() { return &___m_FillMethod_41; }
	inline void set_m_FillMethod_41(int32_t value)
	{
		___m_FillMethod_41 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_42)); }
	inline float get_m_FillAmount_42() const { return ___m_FillAmount_42; }
	inline float* get_address_of_m_FillAmount_42() { return &___m_FillAmount_42; }
	inline void set_m_FillAmount_42(float value)
	{
		___m_FillAmount_42 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_43)); }
	inline bool get_m_FillClockwise_43() const { return ___m_FillClockwise_43; }
	inline bool* get_address_of_m_FillClockwise_43() { return &___m_FillClockwise_43; }
	inline void set_m_FillClockwise_43(bool value)
	{
		___m_FillClockwise_43 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_44)); }
	inline int32_t get_m_FillOrigin_44() const { return ___m_FillOrigin_44; }
	inline int32_t* get_address_of_m_FillOrigin_44() { return &___m_FillOrigin_44; }
	inline void set_m_FillOrigin_44(int32_t value)
	{
		___m_FillOrigin_44 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_45)); }
	inline float get_m_AlphaHitTestMinimumThreshold_45() const { return ___m_AlphaHitTestMinimumThreshold_45; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_45() { return &___m_AlphaHitTestMinimumThreshold_45; }
	inline void set_m_AlphaHitTestMinimumThreshold_45(float value)
	{
		___m_AlphaHitTestMinimumThreshold_45 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_46)); }
	inline bool get_m_Tracked_46() const { return ___m_Tracked_46; }
	inline bool* get_address_of_m_Tracked_46() { return &___m_Tracked_46; }
	inline void set_m_Tracked_46(bool value)
	{
		___m_Tracked_46 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_47)); }
	inline bool get_m_UseSpriteMesh_47() const { return ___m_UseSpriteMesh_47; }
	inline bool* get_address_of_m_UseSpriteMesh_47() { return &___m_UseSpriteMesh_47; }
	inline void set_m_UseSpriteMesh_47(bool value)
	{
		___m_UseSpriteMesh_47 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PixelsPerUnitMultiplier_48)); }
	inline float get_m_PixelsPerUnitMultiplier_48() const { return ___m_PixelsPerUnitMultiplier_48; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_48() { return &___m_PixelsPerUnitMultiplier_48; }
	inline void set_m_PixelsPerUnitMultiplier_48(float value)
	{
		___m_PixelsPerUnitMultiplier_48 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_49)); }
	inline float get_m_CachedReferencePixelsPerUnit_49() const { return ___m_CachedReferencePixelsPerUnit_49; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_49() { return &___m_CachedReferencePixelsPerUnit_49; }
	inline void set_m_CachedReferencePixelsPerUnit_49(float value)
	{
		___m_CachedReferencePixelsPerUnit_49 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_35;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_50;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_51;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_53;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 * ___m_TrackedTexturelessImages_54;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_55;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_35)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_35() const { return ___s_ETC1DefaultUI_35; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_35() { return &___s_ETC1DefaultUI_35; }
	inline void set_s_ETC1DefaultUI_35(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_50)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_50() const { return ___s_VertScratch_50; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_50() { return &___s_VertScratch_50; }
	inline void set_s_VertScratch_50(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_51)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_51() const { return ___s_UVScratch_51; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_51() { return &___s_UVScratch_51; }
	inline void set_s_UVScratch_51(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_52)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_52() const { return ___s_Xy_52; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_52() { return &___s_Xy_52; }
	inline void set_s_Xy_52(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_53)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_53() const { return ___s_Uv_53; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_53() { return &___s_Uv_53; }
	inline void set_s_Uv_53(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_54)); }
	inline List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 * get_m_TrackedTexturelessImages_54() const { return ___m_TrackedTexturelessImages_54; }
	inline List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 ** get_address_of_m_TrackedTexturelessImages_54() { return &___m_TrackedTexturelessImages_54; }
	inline void set_m_TrackedTexturelessImages_54(List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 * value)
	{
		___m_TrackedTexturelessImages_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_54), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_55() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_55)); }
	inline bool get_s_Initialized_55() const { return ___s_Initialized_55; }
	inline bool* get_address_of_s_Initialized_55() { return &___s_Initialized_55; }
	inline void set_s_Initialized_55(bool value)
	{
		___s_Initialized_55 = value;
	}
};


// TMPro.TextMeshPro
struct  TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2  : public TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7
{
public:
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_264;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_265;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___m_renderer_266;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_meshFilter_267;
	// UnityEngine.CanvasRenderer TMPro.TextMeshPro::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_268;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_269;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_270;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_271;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t1847E144072AA6E3FEB91A5E855C564CE48448FD* ___m_subTextObjects_272;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_273;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_EnvMapMatrix_274;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_RectTransformCorners_275;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_276;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_277;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_278;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * ___OnPreRenderText_279;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_280;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_264() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_hasFontAssetChanged_264)); }
	inline bool get_m_hasFontAssetChanged_264() const { return ___m_hasFontAssetChanged_264; }
	inline bool* get_address_of_m_hasFontAssetChanged_264() { return &___m_hasFontAssetChanged_264; }
	inline void set_m_hasFontAssetChanged_264(bool value)
	{
		___m_hasFontAssetChanged_264 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_265() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_previousLossyScaleY_265)); }
	inline float get_m_previousLossyScaleY_265() const { return ___m_previousLossyScaleY_265; }
	inline float* get_address_of_m_previousLossyScaleY_265() { return &___m_previousLossyScaleY_265; }
	inline void set_m_previousLossyScaleY_265(float value)
	{
		___m_previousLossyScaleY_265 = value;
	}

	inline static int32_t get_offset_of_m_renderer_266() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_renderer_266)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_m_renderer_266() const { return ___m_renderer_266; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_m_renderer_266() { return &___m_renderer_266; }
	inline void set_m_renderer_266(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___m_renderer_266 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_renderer_266), (void*)value);
	}

	inline static int32_t get_offset_of_m_meshFilter_267() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_meshFilter_267)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_meshFilter_267() const { return ___m_meshFilter_267; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_meshFilter_267() { return &___m_meshFilter_267; }
	inline void set_m_meshFilter_267(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_meshFilter_267 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_meshFilter_267), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_268() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_CanvasRenderer_268)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_268() const { return ___m_CanvasRenderer_268; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_268() { return &___m_CanvasRenderer_268; }
	inline void set_m_CanvasRenderer_268(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_269() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_isFirstAllocation_269)); }
	inline bool get_m_isFirstAllocation_269() const { return ___m_isFirstAllocation_269; }
	inline bool* get_address_of_m_isFirstAllocation_269() { return &___m_isFirstAllocation_269; }
	inline void set_m_isFirstAllocation_269(bool value)
	{
		___m_isFirstAllocation_269 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_270() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_max_characters_270)); }
	inline int32_t get_m_max_characters_270() const { return ___m_max_characters_270; }
	inline int32_t* get_address_of_m_max_characters_270() { return &___m_max_characters_270; }
	inline void set_m_max_characters_270(int32_t value)
	{
		___m_max_characters_270 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_271() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_max_numberOfLines_271)); }
	inline int32_t get_m_max_numberOfLines_271() const { return ___m_max_numberOfLines_271; }
	inline int32_t* get_address_of_m_max_numberOfLines_271() { return &___m_max_numberOfLines_271; }
	inline void set_m_max_numberOfLines_271(int32_t value)
	{
		___m_max_numberOfLines_271 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_272() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_subTextObjects_272)); }
	inline TMP_SubMeshU5BU5D_t1847E144072AA6E3FEB91A5E855C564CE48448FD* get_m_subTextObjects_272() const { return ___m_subTextObjects_272; }
	inline TMP_SubMeshU5BU5D_t1847E144072AA6E3FEB91A5E855C564CE48448FD** get_address_of_m_subTextObjects_272() { return &___m_subTextObjects_272; }
	inline void set_m_subTextObjects_272(TMP_SubMeshU5BU5D_t1847E144072AA6E3FEB91A5E855C564CE48448FD* value)
	{
		___m_subTextObjects_272 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_272), (void*)value);
	}

	inline static int32_t get_offset_of_m_maskType_273() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_maskType_273)); }
	inline int32_t get_m_maskType_273() const { return ___m_maskType_273; }
	inline int32_t* get_address_of_m_maskType_273() { return &___m_maskType_273; }
	inline void set_m_maskType_273(int32_t value)
	{
		___m_maskType_273 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_274() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_EnvMapMatrix_274)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_EnvMapMatrix_274() const { return ___m_EnvMapMatrix_274; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_EnvMapMatrix_274() { return &___m_EnvMapMatrix_274; }
	inline void set_m_EnvMapMatrix_274(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_EnvMapMatrix_274 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_275() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_RectTransformCorners_275)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_RectTransformCorners_275() const { return ___m_RectTransformCorners_275; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_RectTransformCorners_275() { return &___m_RectTransformCorners_275; }
	inline void set_m_RectTransformCorners_275(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_RectTransformCorners_275 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_275), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_276() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_isRegisteredForEvents_276)); }
	inline bool get_m_isRegisteredForEvents_276() const { return ___m_isRegisteredForEvents_276; }
	inline bool* get_address_of_m_isRegisteredForEvents_276() { return &___m_isRegisteredForEvents_276; }
	inline void set_m_isRegisteredForEvents_276(bool value)
	{
		___m_isRegisteredForEvents_276 = value;
	}

	inline static int32_t get_offset_of__SortingLayerID_277() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ____SortingLayerID_277)); }
	inline int32_t get__SortingLayerID_277() const { return ____SortingLayerID_277; }
	inline int32_t* get_address_of__SortingLayerID_277() { return &____SortingLayerID_277; }
	inline void set__SortingLayerID_277(int32_t value)
	{
		____SortingLayerID_277 = value;
	}

	inline static int32_t get_offset_of__SortingOrder_278() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ____SortingOrder_278)); }
	inline int32_t get__SortingOrder_278() const { return ____SortingOrder_278; }
	inline int32_t* get_address_of__SortingOrder_278() { return &____SortingOrder_278; }
	inline void set__SortingOrder_278(int32_t value)
	{
		____SortingOrder_278 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_279() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___OnPreRenderText_279)); }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * get_OnPreRenderText_279() const { return ___OnPreRenderText_279; }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD ** get_address_of_OnPreRenderText_279() { return &___OnPreRenderText_279; }
	inline void set_OnPreRenderText_279(Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * value)
	{
		___OnPreRenderText_279 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_279), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentAutoSizeMode_280() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_currentAutoSizeMode_280)); }
	inline bool get_m_currentAutoSizeMode_280() const { return ___m_currentAutoSizeMode_280; }
	inline bool* get_address_of_m_currentAutoSizeMode_280() { return &___m_currentAutoSizeMode_280; }
	inline void set_m_currentAutoSizeMode_280(bool value)
	{
		___m_currentAutoSizeMode_280 = value;
	}
};


// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438  : public TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_264;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* ___m_subTextObjects_265;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_266;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_RectTransformCorners_267;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_canvasRenderer_268;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_canvas_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_270;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_271;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_baseMaterial_272;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_273;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_maskOffset_274;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_EnvMapMatrix_275;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_276;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_277;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DelayedGraphicRebuild_278;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DelayedMaterialRebuild_279;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_ClipRect_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_281;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * ___OnPreRenderText_282;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_264() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_hasFontAssetChanged_264)); }
	inline bool get_m_hasFontAssetChanged_264() const { return ___m_hasFontAssetChanged_264; }
	inline bool* get_address_of_m_hasFontAssetChanged_264() { return &___m_hasFontAssetChanged_264; }
	inline void set_m_hasFontAssetChanged_264(bool value)
	{
		___m_hasFontAssetChanged_264 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_265() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_subTextObjects_265)); }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* get_m_subTextObjects_265() const { return ___m_subTextObjects_265; }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E** get_address_of_m_subTextObjects_265() { return &___m_subTextObjects_265; }
	inline void set_m_subTextObjects_265(TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* value)
	{
		___m_subTextObjects_265 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_265), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_266() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_previousLossyScaleY_266)); }
	inline float get_m_previousLossyScaleY_266() const { return ___m_previousLossyScaleY_266; }
	inline float* get_address_of_m_previousLossyScaleY_266() { return &___m_previousLossyScaleY_266; }
	inline void set_m_previousLossyScaleY_266(float value)
	{
		___m_previousLossyScaleY_266 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_267() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_RectTransformCorners_267)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_RectTransformCorners_267() const { return ___m_RectTransformCorners_267; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_RectTransformCorners_267() { return &___m_RectTransformCorners_267; }
	inline void set_m_RectTransformCorners_267(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_RectTransformCorners_267 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_267), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_268() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvasRenderer_268)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_canvasRenderer_268() const { return ___m_canvasRenderer_268; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_canvasRenderer_268() { return &___m_canvasRenderer_268; }
	inline void set_m_canvasRenderer_268(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_canvasRenderer_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvasRenderer_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvas_269() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvas_269)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_canvas_269() const { return ___m_canvas_269; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_canvas_269() { return &___m_canvas_269; }
	inline void set_m_canvas_269(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_canvas_269 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvas_269), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_270() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isFirstAllocation_270)); }
	inline bool get_m_isFirstAllocation_270() const { return ___m_isFirstAllocation_270; }
	inline bool* get_address_of_m_isFirstAllocation_270() { return &___m_isFirstAllocation_270; }
	inline void set_m_isFirstAllocation_270(bool value)
	{
		___m_isFirstAllocation_270 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_271() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_max_characters_271)); }
	inline int32_t get_m_max_characters_271() const { return ___m_max_characters_271; }
	inline int32_t* get_address_of_m_max_characters_271() { return &___m_max_characters_271; }
	inline void set_m_max_characters_271(int32_t value)
	{
		___m_max_characters_271 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_272() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_baseMaterial_272)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_baseMaterial_272() const { return ___m_baseMaterial_272; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_baseMaterial_272() { return &___m_baseMaterial_272; }
	inline void set_m_baseMaterial_272(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_baseMaterial_272 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_baseMaterial_272), (void*)value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_273() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isScrollRegionSet_273)); }
	inline bool get_m_isScrollRegionSet_273() const { return ___m_isScrollRegionSet_273; }
	inline bool* get_address_of_m_isScrollRegionSet_273() { return &___m_isScrollRegionSet_273; }
	inline void set_m_isScrollRegionSet_273(bool value)
	{
		___m_isScrollRegionSet_273 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_274() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_maskOffset_274)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_maskOffset_274() const { return ___m_maskOffset_274; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_maskOffset_274() { return &___m_maskOffset_274; }
	inline void set_m_maskOffset_274(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_maskOffset_274 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_275() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_EnvMapMatrix_275)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_EnvMapMatrix_275() const { return ___m_EnvMapMatrix_275; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_EnvMapMatrix_275() { return &___m_EnvMapMatrix_275; }
	inline void set_m_EnvMapMatrix_275(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_EnvMapMatrix_275 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_276() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRegisteredForEvents_276)); }
	inline bool get_m_isRegisteredForEvents_276() const { return ___m_isRegisteredForEvents_276; }
	inline bool* get_address_of_m_isRegisteredForEvents_276() { return &___m_isRegisteredForEvents_276; }
	inline void set_m_isRegisteredForEvents_276(bool value)
	{
		___m_isRegisteredForEvents_276 = value;
	}

	inline static int32_t get_offset_of_m_isRebuildingLayout_277() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRebuildingLayout_277)); }
	inline bool get_m_isRebuildingLayout_277() const { return ___m_isRebuildingLayout_277; }
	inline bool* get_address_of_m_isRebuildingLayout_277() { return &___m_isRebuildingLayout_277; }
	inline void set_m_isRebuildingLayout_277(bool value)
	{
		___m_isRebuildingLayout_277 = value;
	}

	inline static int32_t get_offset_of_m_DelayedGraphicRebuild_278() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_DelayedGraphicRebuild_278)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DelayedGraphicRebuild_278() const { return ___m_DelayedGraphicRebuild_278; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DelayedGraphicRebuild_278() { return &___m_DelayedGraphicRebuild_278; }
	inline void set_m_DelayedGraphicRebuild_278(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DelayedGraphicRebuild_278 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedGraphicRebuild_278), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelayedMaterialRebuild_279() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_DelayedMaterialRebuild_279)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DelayedMaterialRebuild_279() const { return ___m_DelayedMaterialRebuild_279; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DelayedMaterialRebuild_279() { return &___m_DelayedMaterialRebuild_279; }
	inline void set_m_DelayedMaterialRebuild_279(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DelayedMaterialRebuild_279 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedMaterialRebuild_279), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClipRect_280() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_ClipRect_280)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_ClipRect_280() const { return ___m_ClipRect_280; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_ClipRect_280() { return &___m_ClipRect_280; }
	inline void set_m_ClipRect_280(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_ClipRect_280 = value;
	}

	inline static int32_t get_offset_of_m_ValidRect_281() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_ValidRect_281)); }
	inline bool get_m_ValidRect_281() const { return ___m_ValidRect_281; }
	inline bool* get_address_of_m_ValidRect_281() { return &___m_ValidRect_281; }
	inline void set_m_ValidRect_281(bool value)
	{
		___m_ValidRect_281 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_282() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___OnPreRenderText_282)); }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * get_OnPreRenderText_282() const { return ___OnPreRenderText_282; }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD ** get_address_of_OnPreRenderText_282() { return &___OnPreRenderText_282; }
	inline void set_OnPreRenderText_282(Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * value)
	{
		___OnPreRenderText_282 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_282), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * m_Items[1];

public:
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler[]
struct DwellHandlerU5BU5D_t1B8F56F7EBF8B6A7EDFAB0B964F54C01CDAB170F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * m_Items[1];

public:
	inline DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickController[]
struct JoystickControllerU5BU5D_t1030675CFD85A2DE4BD3F39CCC2FBE00F292B0E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 * m_Items[1];

public:
	inline JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m2094C39A775FDD39B5FB9B5A77E988F3482DC46B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mD5524309E29952671D52EA873E3A0C63EF9C4455_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_gshared (const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::get_MixedRealityInputAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  BaseInputEventData_get_MixedRealityInputAction_mB4E271972D8977E9561E68A129BED3F789B983D6_inline (BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::op_Equality(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputAction_op_Equality_mC0922FBEF288BCCD8C210F36CDE547C5D0360753 (MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  ___left0, MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  ___right1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_None()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  MixedRealityInputAction_get_None_mFCF5467E10262F79CB726599477FC8CE7EDFEEBE_inline (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom>()
inline HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * Component_GetComponentInChildren_TisHandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E_mB5EDF31DE7B88AC1C807EC35F1179B26156A05F0 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m2094C39A775FDD39B5FB9B5A77E988F3482DC46B_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m97139CB2EE76D5CD8308C1AD0499A5F163FC7F51 (RuntimeObject * ___message0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.HandPanEventData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36 (UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.HandPanEventData>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m025DA402B0E8AE860888ADEE0418E0E26D66EAE7 (UnityEvent_1_tB2E51AD9E9B73DA5CA9C83BBF4317DBD8AA16C59 * __this, UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB2E51AD9E9B73DA5CA9C83BBF4317DBD8AA16C59 *, UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 *, const RuntimeMethod*))UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared)(__this, ___call0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.HandPanEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m5DA09D919855795688195C560923475806AF8A0D (UnityEvent_1_tB2E51AD9E9B73DA5CA9C83BBF4317DBD8AA16C59 * __this, UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB2E51AD9E9B73DA5CA9C83BBF4317DBD8AA16C59 *, UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_mD5524309E29952671D52EA873E3A0C63EF9C4455_gshared)(__this, ___call0, method);
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.UI.HandPanEventData::get_PanDelta()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HandPanEventData_get_PanDelta_m876D070AADF78064C1D85108A550DE950A8205C1_inline (HandPanEventData_tD05B4ABADBD43876B4F63600C138606362F86E4A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler>()
inline DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * Component_GetComponent_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_mBFEBB0136898336ABE21E1C36FA2081D8B8F5710 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay::get_AllowDwellDecayOnCancel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool DwellProfileWithDecay_get_AllowDwellDecayOnCancel_mB8A7BDAA114B13C1AE6D5C82C6263C6C2C1681A1_inline (DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::UpdateFillTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DwellHandler_UpdateFillTimer_m6C0126868B63A2EB6FA694F3BC0D12E3303046C8 (DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DwellHandler__ctor_m0ABAA0937C863FB1E8D1D5B3274DC5A2F08069CA (DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DwellProfile__ctor_m70CFE4B04298B4C761F490F1BB73F3A6835355EE (DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::DwellCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDwellSample_DwellCompleted_mD616D46BA9B05C3490CC72AD3B03FC02411B0828 (BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130* Component_GetComponentsInChildren_TisTextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_m0AAB87D3A9FC161DA888BBCD96EEA93816229D86 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m798542DE19B3F02DC4F4B777BB2E73169F129DE1 (RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDwellSample__ctor_m8828E50F0470FEC17338490932A2AE19AB6FF774 (BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDwellSample_Awake_m736EE74EF17D89CB956DB3B6D5F6C019747C111B (BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler>()
inline DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * Component_GetComponentInChildren_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_m0AA5E7ECD7DAF01C6F2B9D2265DBA839BE0DE657 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m2094C39A775FDD39B5FB9B5A77E988F3482DC46B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m3939CACF382B30A0353F300E2AE2D3823E1D42F4 (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::DwellCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDwellSample_DwellCanceled_m75990B38C6B69B6C5B0BE3F75D5E6ED455FBFD4F (BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler>()
inline DwellHandlerU5BU5D_t1B8F56F7EBF8B6A7EDFAB0B964F54C01CDAB170F* Object_FindObjectsOfType_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_mB32BE35140590532CD2B875CD5C3D123B960E304 (const RuntimeMethod* method)
{
	return ((  DwellHandlerU5BU5D_t1B8F56F7EBF8B6A7EDFAB0B964F54C01CDAB170F* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_gshared)(method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::CalculateValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSliders_CalculateValues_mCABEFA1AC56EA69890AB262232E4577302D7D7D9 (JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::get_SliderValue()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PinchSlider_get_SliderValue_m7F64FFB67297B1CBD728B719B5BFC3965CCF707D_inline (PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3 (float* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::PresentKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_PresentKeyboard_m9C54CA1102D22568A14FFD032C0C9527395282E0 (NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnClosed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnClosed_mB2B1CA7D629E3DB698F1387A58DF8950352BE8E7 (NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnTextSubmitted(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnTextSubmitted_m9F5CCB226967686E0B849B0F809D27342E68AA5F (NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3 (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnTextUpdated(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnTextUpdated_mC8902629A9595F2ABB98AA8EA730D8E905032288 (NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * __this, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TMPro.TMP_InputField>()
inline TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * Component_GetComponent_TisTMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB_m9F5493645F33D9F758799CDFACAF1658443029EB (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void TMPro.TMP_InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_text_m38266A67B7B57B95605E61D615DF187890C526BB (TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnTextUpdated(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnTextUpdated_m90606815071EA9FC2FF887C7C6BDED008C7C13BD (NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * __this, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnClosed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnClosed_m1B3B39035F1F3446A4E95D16EAE03594B7867545 (NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnTextSubmitted(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnTextSubmitted_m6EDECFBADE9623FA51BB0A87AF902436A624FB2F (NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Close_mD9508A4B67CA38FDA35CDE1D1FBF267BE7A37BD0 (NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabTouchExample_Awake_m1A3819B4BAC396B03D6CAB3FED3DB14823A90EFE (GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GrabTouchExample_Awake_m1A3819B4BAC396B03D6CAB3FED3DB14823A90EFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(this.GetType().Name + " is deprecated");
		Type_t * L_0 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_1, _stringLiteral314CD1C72B3CA3AD0B1C14114D2D635596FAAA4F, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabTouchExample_OnInputDown_m7A4FD972CCDD6D26E372EF33DC95B518EF6F2C32 (GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A * __this, InputEventData_t89864BBA5E54327F758CE7579CAAE614F5AA8B3A * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GrabTouchExample_OnInputDown_m7A4FD972CCDD6D26E372EF33DC95B518EF6F2C32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventData.MixedRealityInputAction == grabAction)
		InputEventData_t89864BBA5E54327F758CE7579CAAE614F5AA8B3A * L_0 = ___eventData0;
		NullCheck(L_0);
		MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_1 = BaseInputEventData_get_MixedRealityInputAction_mB4E271972D8977E9561E68A129BED3F789B983D6_inline(L_0, /*hidden argument*/NULL);
		MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_2 = __this->get_grabAction_4();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_il2cpp_TypeInfo_var);
		bool L_3 = MixedRealityInputAction_op_Equality_mC0922FBEF288BCCD8C210F36CDE547C5D0360753(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// GetComponent<Renderer>().material.color = new Color(0.0f, 1.0f, 0.0f);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_4 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_4);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_4, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_6), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabTouchExample_OnInputUp_m91C9509CD3E9F55204DC78482B5BAA8BABA51CA0 (GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A * __this, InputEventData_t89864BBA5E54327F758CE7579CAAE614F5AA8B3A * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GrabTouchExample_OnInputUp_m91C9509CD3E9F55204DC78482B5BAA8BABA51CA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventData.MixedRealityInputAction == grabAction)
		InputEventData_t89864BBA5E54327F758CE7579CAAE614F5AA8B3A * L_0 = ___eventData0;
		NullCheck(L_0);
		MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_1 = BaseInputEventData_get_MixedRealityInputAction_mB4E271972D8977E9561E68A129BED3F789B983D6_inline(L_0, /*hidden argument*/NULL);
		MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_2 = __this->get_grabAction_4();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_il2cpp_TypeInfo_var);
		bool L_3 = MixedRealityInputAction_op_Equality_mC0922FBEF288BCCD8C210F36CDE547C5D0360753(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// GetComponent<Renderer>().material.color = new Color(1.0f, 1.0f, 1.0f);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_4 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_4);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_4, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_6), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample::OnInputPressed(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabTouchExample_OnInputPressed_m4CA09A85E3E7AE6E822639D7008675E572A585AE (GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A * __this, InputEventData_1_t081849D32B71D6F09C07B3F13DCB927CFB143E1F * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnInputPressed(InputEventData<float> eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample::OnPositionInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabTouchExample_OnPositionInputChanged_mED228C1DDABA834FFB67E1CFF1B91F1F2E86BD7B (GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A * __this, InputEventData_1_t0249906C6D032CEE3813326ED398A1081C3DAA20 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPositionInputChanged(InputEventData<Vector2> eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample::OnTouchCompleted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabTouchExample_OnTouchCompleted_mB104737326C25BF33992CC4787E1CA84FD27D709 (GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A * __this, HandTrackingInputEventData_t22545DD1196AA39351413C3E71A83E68722814F6 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GrabTouchExample_OnTouchCompleted_mB104737326C25BF33992CC4787E1CA84FD27D709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Renderer>().material.color = new Color(1.0f, 1.0f, 1.0f);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_0, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_2), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample::OnTouchStarted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabTouchExample_OnTouchStarted_m0F165D663FB3540EC872DD6B2C2803C85692515B (GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A * __this, HandTrackingInputEventData_t22545DD1196AA39351413C3E71A83E68722814F6 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GrabTouchExample_OnTouchStarted_m0F165D663FB3540EC872DD6B2C2803C85692515B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Renderer>().material.color = new Color(0.0f, 1.0f, 0.0f);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_0, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_2), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample::OnTouchUpdated(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabTouchExample_OnTouchUpdated_m980C23A30D62A3B78A110ECF814B79C47149B91B (GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A * __this, HandTrackingInputEventData_t22545DD1196AA39351413C3E71A83E68722814F6 * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.GrabTouchExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabTouchExample__ctor_m2D26A97648EC75A20666EE59F284CE39E13514A7 (GrabTouchExample_tF36C70CC726FC7E9781E80B3EDB30C6B42C2598A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GrabTouchExample__ctor_m2D26A97648EC75A20666EE59F284CE39E13514A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MixedRealityInputAction grabAction = MixedRealityInputAction.None;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_0 = MixedRealityInputAction_get_None_mFCF5467E10262F79CB726599477FC8CE7EDFEEBE_inline(/*hidden argument*/NULL);
		__this->set_grabAction_4(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.RotateWithPan::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateWithPan_OnEnable_mE95228E03D009F90C8696109536E32DD3D9B5140 (RotateWithPan_tD4BF5617C89F3B3C1614935734971A5440494686 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RotateWithPan_OnEnable_mE95228E03D009F90C8696109536E32DD3D9B5140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rd = GetComponent<Renderer>();
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		__this->set_rd_4(L_0);
		// if (panInputSource == null)
		HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * L_1 = __this->get_panInputSource_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// panInputSource = GetComponentInChildren<HandInteractionPanZoom>();
		HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * L_3 = Component_GetComponentInChildren_TisHandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E_mB5EDF31DE7B88AC1C807EC35F1179B26156A05F0(__this, /*hidden argument*/Component_GetComponentInChildren_TisHandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E_mB5EDF31DE7B88AC1C807EC35F1179B26156A05F0_RuntimeMethod_var);
		__this->set_panInputSource_5(L_3);
	}

IL_0026:
	{
		// if (panInputSource == null)
		HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * L_4 = __this->get_panInputSource_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// Debug.LogError("RotateWithPan did not find a HandInteractionPanZoom to listen to, the component will not work", gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m97139CB2EE76D5CD8308C1AD0499A5F163FC7F51(_stringLiteral96D450D420443D8A95FD34157912EDEA6CFA77A4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0045:
	{
		// panInputSource.PanStarted.AddListener(OnPanStarted);
		HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * L_7 = __this->get_panInputSource_5();
		NullCheck(L_7);
		PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * L_8 = L_7->get_PanStarted_23();
		UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 * L_9 = (UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 *)il2cpp_codegen_object_new(UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36(L_9, __this, (intptr_t)((intptr_t)RotateWithPan_OnPanStarted_m572D3295CCAC4E6F4373FDB5844B44AA42E89633_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36_RuntimeMethod_var);
		NullCheck(L_8);
		UnityEvent_1_AddListener_m025DA402B0E8AE860888ADEE0418E0E26D66EAE7(L_8, L_9, /*hidden argument*/UnityEvent_1_AddListener_m025DA402B0E8AE860888ADEE0418E0E26D66EAE7_RuntimeMethod_var);
		// panInputSource.PanStopped.AddListener(OnPanEnded);
		HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * L_10 = __this->get_panInputSource_5();
		NullCheck(L_10);
		PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * L_11 = L_10->get_PanStopped_24();
		UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 * L_12 = (UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 *)il2cpp_codegen_object_new(UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36(L_12, __this, (intptr_t)((intptr_t)RotateWithPan_OnPanEnded_m6A0B685373FDE33B0CC5EF3138FDF227596F3EBB_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36_RuntimeMethod_var);
		NullCheck(L_11);
		UnityEvent_1_AddListener_m025DA402B0E8AE860888ADEE0418E0E26D66EAE7(L_11, L_12, /*hidden argument*/UnityEvent_1_AddListener_m025DA402B0E8AE860888ADEE0418E0E26D66EAE7_RuntimeMethod_var);
		// panInputSource.PanUpdated.AddListener(OnPanning);
		HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * L_13 = __this->get_panInputSource_5();
		NullCheck(L_13);
		PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * L_14 = L_13->get_PanUpdated_25();
		UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 * L_15 = (UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 *)il2cpp_codegen_object_new(UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36(L_15, __this, (intptr_t)((intptr_t)RotateWithPan_OnPanning_m58F1D02C84BF5038A6DAB07CAFF31E96A6AF790F_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36_RuntimeMethod_var);
		NullCheck(L_14);
		UnityEvent_1_AddListener_m025DA402B0E8AE860888ADEE0418E0E26D66EAE7(L_14, L_15, /*hidden argument*/UnityEvent_1_AddListener_m025DA402B0E8AE860888ADEE0418E0E26D66EAE7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.RotateWithPan::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateWithPan_OnDisable_mDC415FA6C490C2FA275D0A2C01F211AF67B43C28 (RotateWithPan_tD4BF5617C89F3B3C1614935734971A5440494686 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RotateWithPan_OnDisable_mDC415FA6C490C2FA275D0A2C01F211AF67B43C28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (panInputSource != null)
		HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * L_0 = __this->get_panInputSource_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0062;
		}
	}
	{
		// panInputSource.PanStarted.RemoveListener(OnPanStarted);
		HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * L_2 = __this->get_panInputSource_5();
		NullCheck(L_2);
		PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * L_3 = L_2->get_PanStarted_23();
		UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 * L_4 = (UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 *)il2cpp_codegen_object_new(UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36(L_4, __this, (intptr_t)((intptr_t)RotateWithPan_OnPanStarted_m572D3295CCAC4E6F4373FDB5844B44AA42E89633_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36_RuntimeMethod_var);
		NullCheck(L_3);
		UnityEvent_1_RemoveListener_m5DA09D919855795688195C560923475806AF8A0D(L_3, L_4, /*hidden argument*/UnityEvent_1_RemoveListener_m5DA09D919855795688195C560923475806AF8A0D_RuntimeMethod_var);
		// panInputSource.PanStopped.RemoveListener(OnPanEnded);
		HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * L_5 = __this->get_panInputSource_5();
		NullCheck(L_5);
		PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * L_6 = L_5->get_PanStopped_24();
		UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 * L_7 = (UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 *)il2cpp_codegen_object_new(UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36(L_7, __this, (intptr_t)((intptr_t)RotateWithPan_OnPanEnded_m6A0B685373FDE33B0CC5EF3138FDF227596F3EBB_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36_RuntimeMethod_var);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_m5DA09D919855795688195C560923475806AF8A0D(L_6, L_7, /*hidden argument*/UnityEvent_1_RemoveListener_m5DA09D919855795688195C560923475806AF8A0D_RuntimeMethod_var);
		// panInputSource.PanUpdated.RemoveListener(OnPanning);
		HandInteractionPanZoom_tD8675B7031FEB9CD68ED44A3C70DE0FB86ADE19E * L_8 = __this->get_panInputSource_5();
		NullCheck(L_8);
		PanUnityEvent_t6CE43BD895B3F35BA08F874B15323F44B9BD6C29 * L_9 = L_8->get_PanUpdated_25();
		UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 * L_10 = (UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1 *)il2cpp_codegen_object_new(UnityAction_1_tD9624CB2C53B3A53D710892652E840B7DC8D66F1_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36(L_10, __this, (intptr_t)((intptr_t)RotateWithPan_OnPanning_m58F1D02C84BF5038A6DAB07CAFF31E96A6AF790F_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mB3F1A79807D96D8D60BD9BEA6514FD1A39CBAD36_RuntimeMethod_var);
		NullCheck(L_9);
		UnityEvent_1_RemoveListener_m5DA09D919855795688195C560923475806AF8A0D(L_9, L_10, /*hidden argument*/UnityEvent_1_RemoveListener_m5DA09D919855795688195C560923475806AF8A0D_RuntimeMethod_var);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.RotateWithPan::OnPanEnded(Microsoft.MixedReality.Toolkit.UI.HandPanEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateWithPan_OnPanEnded_m6A0B685373FDE33B0CC5EF3138FDF227596F3EBB (RotateWithPan_tD4BF5617C89F3B3C1614935734971A5440494686 * __this, HandPanEventData_tD05B4ABADBD43876B4F63600C138606362F86E4A * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RotateWithPan_OnPanEnded_m6A0B685373FDE33B0CC5EF3138FDF227596F3EBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rd != null)
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = __this->get_rd_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// rd.material.color = new Color(1.0f, 1.0f, 1.0f);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = __this->get_rd_4();
		NullCheck(L_2);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_2, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_4), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.RotateWithPan::OnPanning(Microsoft.MixedReality.Toolkit.UI.HandPanEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateWithPan_OnPanning_m58F1D02C84BF5038A6DAB07CAFF31E96A6AF790F (RotateWithPan_tD4BF5617C89F3B3C1614935734971A5440494686 * __this, HandPanEventData_tD05B4ABADBD43876B4F63600C138606362F86E4A * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RotateWithPan_OnPanning_m58F1D02C84BF5038A6DAB07CAFF31E96A6AF790F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 eulers = new Vector3(eventData.PanDelta.y * (2.0f * Mathf.PI), eventData.PanDelta.x * (2.0f * Mathf.PI), 0.0f);
		HandPanEventData_tD05B4ABADBD43876B4F63600C138606362F86E4A * L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = HandPanEventData_get_PanDelta_m876D070AADF78064C1D85108A550DE950A8205C1_inline(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_1();
		HandPanEventData_tD05B4ABADBD43876B4F63600C138606362F86E4A * L_3 = ___eventData0;
		NullCheck(L_3);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = HandPanEventData_get_PanDelta_m876D070AADF78064C1D85108A550DE950A8205C1_inline(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_0();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), ((float)il2cpp_codegen_multiply((float)L_2, (float)(6.28318548f))), ((float)il2cpp_codegen_multiply((float)L_5, (float)(6.28318548f))), (0.0f), /*hidden argument*/NULL);
		// eulers *= Mathf.Rad2Deg;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_6, (57.29578f), /*hidden argument*/NULL);
		V_0 = L_7;
		// eulers *= 0.2f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_8, (0.2f), /*hidden argument*/NULL);
		V_0 = L_9;
		// transform.localEulerAngles += eulers;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = L_10;
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B(L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17(L_11, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.RotateWithPan::OnPanStarted(Microsoft.MixedReality.Toolkit.UI.HandPanEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateWithPan_OnPanStarted_m572D3295CCAC4E6F4373FDB5844B44AA42E89633 (RotateWithPan_tD4BF5617C89F3B3C1614935734971A5440494686 * __this, HandPanEventData_tD05B4ABADBD43876B4F63600C138606362F86E4A * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RotateWithPan_OnPanStarted_m572D3295CCAC4E6F4373FDB5844B44AA42E89633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rd != null)
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = __this->get_rd_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// rd.material.color = new Color(0.0f, 1.0f, 0.0f);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = __this->get_rd_4();
		NullCheck(L_2);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_2, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_4), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.RotateWithPan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateWithPan__ctor_m228B0C48CF5D5653CD5AA57A75C35425D6CC7D76 (RotateWithPan_tD4BF5617C89F3B3C1614935734971A5440494686 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDwellSample_Awake_m736EE74EF17D89CB956DB3B6D5F6C019747C111B (BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseDwellSample_Awake_m736EE74EF17D89CB956DB3B6D5F6C019747C111B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dwellHandler = this.GetComponent<DwellHandler>();
		DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * L_0 = Component_GetComponent_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_mBFEBB0136898336ABE21E1C36FA2081D8B8F5710(__this, /*hidden argument*/Component_GetComponent_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_mBFEBB0136898336ABE21E1C36FA2081D8B8F5710_RuntimeMethod_var);
		__this->set_dwellHandler_6(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::DwellStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDwellSample_DwellStarted_mCE2CDBE4850E1F83D8955992E4F293901B4B3311 (BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	{
		// public virtual void DwellStarted(IMixedRealityPointer pointer) { isDwelling = true; }
		__this->set_isDwelling_7((bool)1);
		// public virtual void DwellStarted(IMixedRealityPointer pointer) { isDwelling = true; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::DwellIntended(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDwellSample_DwellIntended_m6D4CE9FF72B7418E3D45EDF9C961B10306B0F55D (BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	{
		// public virtual void DwellIntended(IMixedRealityPointer pointer) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::DwellCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDwellSample_DwellCanceled_m75990B38C6B69B6C5B0BE3F75D5E6ED455FBFD4F (BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	{
		// public virtual void DwellCanceled(IMixedRealityPointer pointer) { isDwelling = false; }
		__this->set_isDwelling_7((bool)0);
		// public virtual void DwellCanceled(IMixedRealityPointer pointer) { isDwelling = false; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::DwellCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDwellSample_DwellCompleted_mD616D46BA9B05C3490CC72AD3B03FC02411B0828 (BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseDwellSample_DwellCompleted_mD616D46BA9B05C3490CC72AD3B03FC02411B0828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * G_B3_0 = NULL;
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * G_B2_0 = NULL;
	{
		// isDwelling = false;
		__this->set_isDwelling_7((bool)0);
		// if (targetButton != null)
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_targetButton_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// targetButton.onClick?.Invoke();
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_2 = __this->get_targetButton_5();
		NullCheck(L_2);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_3 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_2, /*hidden argument*/NULL);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(G_B3_0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::ButtonExecute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDwellSample_ButtonExecute_m5845B30D5FA6B6483A1D0CE08C5851158114E4B4 (BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void ButtonExecute() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDwellSample__ctor_m8828E50F0470FEC17338490932A2AE19AB6FF774 (BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.CustomDwellHandler::UpdateFillTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDwellHandler_UpdateFillTimer_m0873895A8061FACCDE5EDAD54C400CD7AD0D9B15 (CustomDwellHandler_tC3D6CECDBC3171DFEEFC7BF9FE6FF990B83F46CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomDwellHandler_UpdateFillTimer_m0873895A8061FACCDE5EDAD54C400CD7AD0D9B15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253 * V_1 = NULL;
	{
		// switch (CurrentDwellState)
		int32_t L_0 = ((DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 *)__this)->get_CurrentDwellState_13();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_005a;
		}
	}
	{
		// var customDwellProfile = dwellProfile as DwellProfileWithDecay;
		DwellProfile_t3EE9915E6187A6C6C7F243ABB0208CACD3620857 * L_2 = ((DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 *)__this)->get_dwellProfile_4();
		V_1 = ((DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253 *)IsInstClass((RuntimeObject*)L_2, DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253_il2cpp_TypeInfo_var));
		// if (customDwellProfile != null && customDwellProfile.AllowDwellDecayOnCancel)
		DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253 * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = DwellProfileWithDecay_get_AllowDwellDecayOnCancel_mB8A7BDAA114B13C1AE6D5C82C6263C6C2C1681A1_inline(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// FillTimer -= Time.deltaTime;
		float L_7 = ((DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 *)__this)->get_FillTimer_14();
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		((DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 *)__this)->set_FillTimer_14(((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)));
	}

IL_003a:
	{
		// if (FillTimer <= 0)
		float L_9 = ((DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 *)__this)->get_FillTimer_14();
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// FillTimer = 0;
		((DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 *)__this)->set_FillTimer_14((0.0f));
		// CurrentDwellState = DwellStateType.None;
		((DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 *)__this)->set_CurrentDwellState_13(0);
		// break;
		return;
	}

IL_005a:
	{
		// base.UpdateFillTimer();
		DwellHandler_UpdateFillTimer_m6C0126868B63A2EB6FA694F3BC0D12E3303046C8(__this, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.CustomDwellHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDwellHandler__ctor_m3961A1798649E040188826E5850D28B14DFF7F0A (CustomDwellHandler_tC3D6CECDBC3171DFEEFC7BF9FE6FF990B83F46CC * __this, const RuntimeMethod* method)
{
	{
		DwellHandler__ctor_m0ABAA0937C863FB1E8D1D5B3274DC5A2F08069CA(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay::get_AllowDwellDecayOnCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DwellProfileWithDecay_get_AllowDwellDecayOnCancel_mB8A7BDAA114B13C1AE6D5C82C6263C6C2C1681A1 (DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253 * __this, const RuntimeMethod* method)
{
	{
		// return allowDwellDecayOnCancel;
		bool L_0 = __this->get_allowDwellDecayOnCancel_9();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay::get_TimeToAllowDwellDecay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DwellProfileWithDecay_get_TimeToAllowDwellDecay_m7E2916975EA9224F4FC9EC2946E2B7469EAAA666 (DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253 * __this, const RuntimeMethod* method)
{
	{
		// return timeToAllowDwellDecay;
		float L_0 = __this->get_timeToAllowDwellDecay_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DwellProfileWithDecay__ctor_m7C8CF8E4B0647A6F1D88DB38C6C695E0264A9F64 (DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253 * __this, const RuntimeMethod* method)
{
	{
		// private float timeToAllowDwellDecay = 20;
		__this->set_timeToAllowDwellDecay_10((20.0f));
		DwellProfile__ctor_m70CFE4B04298B4C761F490F1BB73F3A6835355EE(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.InstantDwellSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantDwellSample_Update_mBB1AC852D5E559F1DC788F3A22E22EA2EA23742D (InstantDwellSample_t6CD5706E7E273384C994AA8980F519E70C440D30 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float value = dwellHandler.DwellProgress;
		DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * L_0 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellHandler_6();
		NullCheck(L_0);
		float L_1 = VirtFuncInvoker0< float >::Invoke(6 /* System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::get_DwellProgress() */, L_0);
		V_0 = L_1;
		// dwellVisualImage.transform.localScale = new Vector3(value, 1, 0);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_2 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		float L_4 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), L_4, (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.InstantDwellSample::DwellCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantDwellSample_DwellCompleted_m086EE0CBEDBE8C8ED5A59081AFD2467A3509C855 (InstantDwellSample_t6CD5706E7E273384C994AA8980F519E70C440D30 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstantDwellSample_DwellCompleted_m086EE0CBEDBE8C8ED5A59081AFD2467A3509C855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dwellVisualImage.transform.localScale = Vector3.zero;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_0 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_1, L_2, /*hidden argument*/NULL);
		// base.DwellCompleted(pointer);
		RuntimeObject* L_3 = ___pointer0;
		BaseDwellSample_DwellCompleted_mD616D46BA9B05C3490CC72AD3B03FC02411B0828(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.InstantDwellSample::ButtonExecute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantDwellSample_ButtonExecute_m778835FCDABA79F83AC3D24E6BDBA9FA0DDEB3A0 (InstantDwellSample_t6CD5706E7E273384C994AA8980F519E70C440D30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstantDwellSample_ButtonExecute_m778835FCDABA79F83AC3D24E6BDBA9FA0DDEB3A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var textMeshObjects = listItems.GetComponentsInChildren<TextMeshProUGUI>();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_listItems_8();
		NullCheck(L_0);
		TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130* L_1 = Component_GetComponentsInChildren_TisTextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_m0AAB87D3A9FC161DA888BBCD96EEA93816229D86(L_0, /*hidden argument*/Component_GetComponentsInChildren_TisTextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_m0AAB87D3A9FC161DA888BBCD96EEA93816229D86_RuntimeMethod_var);
		// foreach (var textObject in textMeshObjects)
		V_0 = L_1;
		V_1 = 0;
		goto IL_0033;
	}

IL_0010:
	{
		// foreach (var textObject in textMeshObjects)
		TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// textObject.text = int.Parse(textObject.text) + 5 + "";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_6 = L_5;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(63 /* System.String TMPro.TMP_Text::get_text() */, L_6);
		int32_t L_8 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)5));
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Concat_m798542DE19B3F02DC4F4B777BB2E73169F129DE1(L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0033:
	{
		// foreach (var textObject in textMeshObjects)
		int32_t L_13 = V_1;
		TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.InstantDwellSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantDwellSample__ctor_mA1F7840036AEAF59A67E095C092EFDD2A0E2FE19 (InstantDwellSample_t6CD5706E7E273384C994AA8980F519E70C440D30 * __this, const RuntimeMethod* method)
{
	{
		BaseDwellSample__ctor_m8828E50F0470FEC17338490932A2AE19AB6FF774(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.ListItemDwell::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItemDwell_Awake_mF753E434BCBB477C059F3B494A7E2DDACC6FCA41 (ListItemDwell_t4A8DD4AEA1AB25990A032042C4C6AA04AA89EF2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListItemDwell_Awake_mF753E434BCBB477C059F3B494A7E2DDACC6FCA41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		BaseDwellSample_Awake_m736EE74EF17D89CB956DB3B6D5F6C019747C111B(__this, /*hidden argument*/NULL);
		// dwellHandler = this.GetComponentInChildren<DwellHandler>();
		DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * L_0 = Component_GetComponentInChildren_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_m0AA5E7ECD7DAF01C6F2B9D2265DBA839BE0DE657(__this, /*hidden argument*/Component_GetComponentInChildren_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_m0AA5E7ECD7DAF01C6F2B9D2265DBA839BE0DE657_RuntimeMethod_var);
		((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->set_dwellHandler_6(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.ListItemDwell::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItemDwell_Update_mFA4FAA7E52096EC647C055079D58B1E6977A33E2 (ListItemDwell_t4A8DD4AEA1AB25990A032042C4C6AA04AA89EF2A * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if (isDwelling)
		bool L_0 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_isDwelling_7();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// float value = dwellHandler.DwellProgress;
		DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * L_1 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellHandler_6();
		NullCheck(L_1);
		float L_2 = VirtFuncInvoker0< float >::Invoke(6 /* System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::get_DwellProgress() */, L_1);
		V_0 = L_2;
		// dwellVisualImage.fillAmount = value;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_3 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		float L_4 = V_0;
		NullCheck(L_3);
		Image_set_fillAmount_m3939CACF382B30A0353F300E2AE2D3823E1D42F4(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.ListItemDwell::DwellCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItemDwell_DwellCompleted_mDE371272768A2570A624B96DD814DE8FBD3E6BA6 (ListItemDwell_t4A8DD4AEA1AB25990A032042C4C6AA04AA89EF2A * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	{
		// base.DwellCompleted(pointer);
		RuntimeObject* L_0 = ___pointer0;
		BaseDwellSample_DwellCompleted_mD616D46BA9B05C3490CC72AD3B03FC02411B0828(__this, L_0, /*hidden argument*/NULL);
		// dwellVisualImage.fillAmount = 0;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_1 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		NullCheck(L_1);
		Image_set_fillAmount_m3939CACF382B30A0353F300E2AE2D3823E1D42F4(L_1, (0.0f), /*hidden argument*/NULL);
		// ButtonExecute();
		VirtActionInvoker0::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.BaseDwellSample::ButtonExecute() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.ListItemDwell::ButtonExecute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItemDwell_ButtonExecute_m32876E6A08B76622860699E32B9CB959E78BAA0C (ListItemDwell_t4A8DD4AEA1AB25990A032042C4C6AA04AA89EF2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListItemDwell_ButtonExecute_m32876E6A08B76622860699E32B9CB959E78BAA0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// displayLabel.text = "Selected Item: " + itemName.text;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_displayLabel_9();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_1 = __this->get_itemName_8();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(63 /* System.String TMPro.TMP_Text::get_text() */, L_1);
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF4515C3A5EEB342370A28F8DA5D38E60F77F8107, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.ListItemDwell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItemDwell__ctor_m88AEFA833FDE6028E08C295852311A5638CF40A4 (ListItemDwell_t4A8DD4AEA1AB25990A032042C4C6AA04AA89EF2A * __this, const RuntimeMethod* method)
{
	{
		BaseDwellSample__ctor_m8828E50F0470FEC17338490932A2AE19AB6FF774(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleDwellSample_Update_m625351CC69E1001C367FEE89D4CC145B1B123889 (ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleDwellSample_Update_m625351CC69E1001C367FEE89D4CC145B1B123889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (isDwelling)
		bool L_0 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_isDwelling_7();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// float value = dwellHandler.DwellProgress;
		DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * L_1 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellHandler_6();
		NullCheck(L_1);
		float L_2 = VirtFuncInvoker0< float >::Invoke(6 /* System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellHandler::get_DwellProgress() */, L_1);
		V_0 = L_2;
		// dwellVisualImage.transform.localScale = new Vector3(value, value, value);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_3 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_3, /*hidden argument*/NULL);
		float L_5 = V_0;
		float L_6 = V_0;
		float L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_4, L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// else if (!isDwelling && dwellVisualImage.transform.localScale.x > 0)
		bool L_9 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_isDwelling_7();
		if (L_9)
		{
			goto IL_009c;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_10 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		if ((!(((float)L_13) > ((float)(0.0f)))))
		{
			goto IL_009c;
		}
	}
	{
		// float value = Mathf.Clamp(dwellVisualImage.transform.localScale.x - (cancelStartScale / dwellVisualCancelDurationInFrames), 0f, 1f);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_14 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		float L_18 = __this->get_cancelStartScale_15();
		float L_19 = __this->get_dwellVisualCancelDurationInFrames_14();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_20 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)il2cpp_codegen_subtract((float)L_17, (float)((float)((float)L_18/(float)L_19)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_20;
		// dwellVisualImage.transform.localScale = new Vector3(value, value, value);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_21 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_21, /*hidden argument*/NULL);
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_26), L_23, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_22, L_26, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::DwellIntended(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleDwellSample_DwellIntended_mC6DE809437CC8CEA4F15108E9D90726461F153F4 (ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleDwellSample_DwellIntended_mC6DE809437CC8CEA4F15108E9D90726461F153F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonBackground.color = dwellIntendedColor;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_0 = __this->get_buttonBackground_9();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = __this->get_dwellIntendedColor_13();
		NullCheck(L_0);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// dwellVisualImage.transform.localScale = Vector3.zero;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_2 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::DwellCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleDwellSample_DwellCanceled_mC48BF723556DED27574B7BC18FBF8A8550130711 (ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * G_B2_0 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * G_B1_0 = NULL;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * G_B3_1 = NULL;
	{
		// base.DwellCanceled(pointer);
		RuntimeObject* L_0 = ___pointer0;
		BaseDwellSample_DwellCanceled_m75990B38C6B69B6C5B0BE3F75D5E6ED455FBFD4F(__this, L_0, /*hidden argument*/NULL);
		// buttonBackground.color = isDwellEnabled ? this.dwellOnColor : this.dwellOffColor;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_1 = __this->get_buttonBackground_9();
		bool L_2 = __this->get_isDwellEnabled_10();
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_001d;
		}
	}
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = __this->get_dwellOffColor_12();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_001d:
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = __this->get_dwellOnColor_11();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// cancelStartScale = dwellVisualImage.transform.localScale.x;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_5 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		__this->set_cancelStartScale_15(L_8);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::DwellCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleDwellSample_DwellCompleted_mF76AC1CD06DBC976EA4259AEF9FCA5860508D768 (ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleDwellSample_DwellCompleted_mF76AC1CD06DBC976EA4259AEF9FCA5860508D768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.DwellCompleted(pointer);
		RuntimeObject* L_0 = ___pointer0;
		BaseDwellSample_DwellCompleted_mD616D46BA9B05C3490CC72AD3B03FC02411B0828(__this, L_0, /*hidden argument*/NULL);
		// dwellVisualImage.transform.localScale = Vector3.zero;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_1 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::ButtonExecute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleDwellSample_ButtonExecute_m79BFBC3240C3FCDFD91B31D3E12B2B25F690774F (ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleDwellSample_ButtonExecute_m79BFBC3240C3FCDFD91B31D3E12B2B25F690774F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DwellHandlerU5BU5D_t1B8F56F7EBF8B6A7EDFAB0B964F54C01CDAB170F* V_0 = NULL;
	int32_t V_1 = 0;
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * G_B2_0 = NULL;
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * G_B3_1 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * G_B5_0 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * G_B4_0 = NULL;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * G_B6_1 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * G_B8_0 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * G_B7_0 = NULL;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * G_B9_1 = NULL;
	{
		// isDwellEnabled = !isDwellEnabled;
		bool L_0 = __this->get_isDwellEnabled_10();
		__this->set_isDwellEnabled_10((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// dwellStatus.text = isDwellEnabled ? "On" : "Off";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_1 = __this->get_dwellStatus_8();
		bool L_2 = __this->get_isDwellEnabled_10();
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = _stringLiteralE3DE5AB0CA4C69DBF00E86D2558843E8D806BB49;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0024:
	{
		G_B3_0 = _stringLiteralE0049A66519CAE71159800BB77A35007BC2D76D3;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// buttonBackground.color = isDwellEnabled ? this.dwellOnColor : this.dwellOffColor;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_3 = __this->get_buttonBackground_9();
		bool L_4 = __this->get_isDwellEnabled_10();
		G_B4_0 = L_3;
		if (L_4)
		{
			G_B5_0 = L_3;
			goto IL_0044;
		}
	}
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5 = __this->get_dwellOffColor_12();
		G_B6_0 = L_5;
		G_B6_1 = G_B4_0;
		goto IL_004a;
	}

IL_0044:
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = __this->get_dwellOnColor_11();
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_004a:
	{
		NullCheck(G_B6_1);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B6_1, G_B6_0);
		// dwellVisualImage.color = isDwellEnabled ? this.dwellOffColor : this.dwellOnColor;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_7 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellVisualImage_4();
		bool L_8 = __this->get_isDwellEnabled_10();
		G_B7_0 = L_7;
		if (L_8)
		{
			G_B8_0 = L_7;
			goto IL_0065;
		}
	}
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = __this->get_dwellOnColor_11();
		G_B9_0 = L_9;
		G_B9_1 = G_B7_0;
		goto IL_006b;
	}

IL_0065:
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10 = __this->get_dwellOffColor_12();
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
	}

IL_006b:
	{
		NullCheck(G_B9_1);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B9_1, G_B9_0);
		// var foundObjects = FindObjectsOfType<DwellHandler>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		DwellHandlerU5BU5D_t1B8F56F7EBF8B6A7EDFAB0B964F54C01CDAB170F* L_11 = Object_FindObjectsOfType_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_mB32BE35140590532CD2B875CD5C3D123B960E304(/*hidden argument*/Object_FindObjectsOfType_TisDwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8_mB32BE35140590532CD2B875CD5C3D123B960E304_RuntimeMethod_var);
		// foreach (var obj in foundObjects)
		V_0 = L_11;
		V_1 = 0;
		goto IL_008c;
	}

IL_007a:
	{
		// foreach (var obj in foundObjects)
		DwellHandlerU5BU5D_t1B8F56F7EBF8B6A7EDFAB0B964F54C01CDAB170F* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		// obj.enabled = isDwellEnabled;
		bool L_16 = __this->get_isDwellEnabled_10();
		NullCheck(L_15);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_15, L_16, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_008c:
	{
		// foreach (var obj in foundObjects)
		int32_t L_18 = V_1;
		DwellHandlerU5BU5D_t1B8F56F7EBF8B6A7EDFAB0B964F54C01CDAB170F* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))))
		{
			goto IL_007a;
		}
	}
	{
		// dwellHandler.enabled = true;
		DwellHandler_t7DA19B3E2D38204D80383F966CC6522ABD63DFD8 * L_20 = ((BaseDwellSample_t2988B6398AC3B547E0BC127327C1BB02C3161853 *)__this)->get_dwellHandler_6();
		NullCheck(L_20);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_20, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.ToggleDwellSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleDwellSample__ctor_m2AA210E6CAD1414A94750FCF838E568359FC1E26 (ToggleDwellSample_t460A635BE209C2F768E3D418B5E0477C96D9B188 * __this, const RuntimeMethod* method)
{
	{
		// private bool isDwellEnabled = true;
		__this->set_isDwellEnabled_10((bool)1);
		// private Color dwellOnColor = Color.white;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		__this->set_dwellOnColor_11(L_0);
		// private Color dwellOffColor = Color.cyan;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		__this->set_dwellOffColor_12(L_1);
		// private Color dwellIntendedColor = Color.cyan;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		__this->set_dwellIntendedColor_13(L_2);
		// private float dwellVisualCancelDurationInFrames = 60;
		__this->set_dwellVisualCancelDurationInFrames_14((60.0f));
		BaseDwellSample__ctor_m8828E50F0470FEC17338490932A2AE19AB6FF774(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSliders_Start_m4F5C56AD8FC2C763EAA2403983F70C80B2210654 (JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813 * __this, const RuntimeMethod* method)
{
	{
		// CalculateValues();
		JoystickSliders_CalculateValues_mCABEFA1AC56EA69890AB262232E4577302D7D7D9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::CalculateValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSliders_CalculateValues_mCABEFA1AC56EA69890AB262232E4577302D7D7D9 (JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813 * __this, const RuntimeMethod* method)
{
	{
		// CurrentMoveValue = (DefaultMoveValue * 2) * SliderMove.SliderValue + MinimumFloatValue;
		float L_0 = __this->get_DefaultMoveValue_19();
		PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * L_1 = __this->get_SliderMove_4();
		NullCheck(L_1);
		float L_2 = PinchSlider_get_SliderValue_m7F64FFB67297B1CBD728B719B5BFC3965CCF707D_inline(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_MinimumFloatValue_17();
		__this->set_CurrentMoveValue_25(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)(2.0f))), (float)L_2)), (float)L_3)));
		// CurrentScaleValue = (DefaultScaleValue * 2) * SliderScale.SliderValue + MinimumFloatValue;
		float L_4 = __this->get_DefaultScaleValue_20();
		PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * L_5 = __this->get_SliderScale_5();
		NullCheck(L_5);
		float L_6 = PinchSlider_get_SliderValue_m7F64FFB67297B1CBD728B719B5BFC3965CCF707D_inline(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_MinimumFloatValue_17();
		__this->set_CurrentScaleValue_26(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_4, (float)(2.0f))), (float)L_6)), (float)L_7)));
		// CurrentRotateValue = (DefaultRotateValue * 2) * SliderRotate.SliderValue + MinimumFloatValue;
		float L_8 = __this->get_DefaultRotateValue_21();
		PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * L_9 = __this->get_SliderRotate_6();
		NullCheck(L_9);
		float L_10 = PinchSlider_get_SliderValue_m7F64FFB67297B1CBD728B719B5BFC3965CCF707D_inline(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_MinimumFloatValue_17();
		__this->set_CurrentRotateValue_27(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))), (float)L_10)), (float)L_11)));
		// CurrentReboundValue = (DefaultReboundValue * 2) * SliderRebound.SliderValue + MinimumIntValue;
		float L_12 = __this->get_DefaultReboundValue_22();
		PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * L_13 = __this->get_SliderRebound_7();
		NullCheck(L_13);
		float L_14 = PinchSlider_get_SliderValue_m7F64FFB67297B1CBD728B719B5BFC3965CCF707D_inline(L_13, /*hidden argument*/NULL);
		int32_t L_15 = __this->get_MinimumIntValue_18();
		__this->set_CurrentReboundValue_28(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_12, (float)(2.0f))), (float)L_14)), (float)(((float)((float)L_15))))));
		// CurrentSensitivityHorizontalValue = (DefaultSensitivityHorizontalValue * 2) * SliderSensitivityHorizontal.SliderValue + MinimumIntValue;
		float L_16 = __this->get_DefaultSensitivityHorizontalValue_23();
		PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * L_17 = __this->get_SliderSensitivityHorizontal_8();
		NullCheck(L_17);
		float L_18 = PinchSlider_get_SliderValue_m7F64FFB67297B1CBD728B719B5BFC3965CCF707D_inline(L_17, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_MinimumIntValue_18();
		__this->set_CurrentSensitivityHorizontalValue_29(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_16, (float)(2.0f))), (float)L_18)), (float)(((float)((float)L_19))))));
		// CurrentSliderSensitivityVerticalValue = (DefaultSliderSensitivityVerticalValue * 2) * SliderSensitivityVertical.SliderValue + MinimumIntValue;
		float L_20 = __this->get_DefaultSliderSensitivityVerticalValue_24();
		PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * L_21 = __this->get_SliderSensitivityVertical_9();
		NullCheck(L_21);
		float L_22 = PinchSlider_get_SliderValue_m7F64FFB67297B1CBD728B719B5BFC3965CCF707D_inline(L_21, /*hidden argument*/NULL);
		int32_t L_23 = __this->get_MinimumIntValue_18();
		__this->set_CurrentSliderSensitivityVerticalValue_30(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_20, (float)(2.0f))), (float)L_22)), (float)(((float)((float)L_23))))));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::UpdateSliderValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSliders_UpdateSliderValues_mDAEC7717AFEA1AA218B33ED9323BB5D397B2B1A8 (JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813 * __this, const RuntimeMethod* method)
{
	JoystickControllerU5BU5D_t1030675CFD85A2DE4BD3F39CCC2FBE00F292B0E7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// CalculateValues();
		JoystickSliders_CalculateValues_mCABEFA1AC56EA69890AB262232E4577302D7D7D9(__this, /*hidden argument*/NULL);
		// TextMove.text = CurrentMoveValue.ToString();
		TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * L_0 = __this->get_TextMove_10();
		float* L_1 = __this->get_address_of_CurrentMoveValue_25();
		String_t* L_2 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// TextScale.text = CurrentScaleValue.ToString();
		TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * L_3 = __this->get_TextScale_11();
		float* L_4 = __this->get_address_of_CurrentScaleValue_26();
		String_t* L_5 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_5);
		// TextRotate.text = CurrentRotateValue.ToString();
		TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * L_6 = __this->get_TextRotate_12();
		float* L_7 = __this->get_address_of_CurrentRotateValue_27();
		String_t* L_8 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_8);
		// TextRebound.text = CurrentReboundValue.ToString();
		TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * L_9 = __this->get_TextRebound_13();
		float* L_10 = __this->get_address_of_CurrentReboundValue_28();
		String_t* L_11 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_11);
		// TextSensitivityHorizontal.text = CurrentSensitivityHorizontalValue.ToString();
		TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * L_12 = __this->get_TextSensitivityHorizontal_14();
		float* L_13 = __this->get_address_of_CurrentSensitivityHorizontalValue_29();
		String_t* L_14 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_14);
		// TextSensitivityVertical.text = CurrentSliderSensitivityVerticalValue.ToString();
		TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * L_15 = __this->get_TextSensitivityVertical_15();
		float* L_16 = __this->get_address_of_CurrentSliderSensitivityVerticalValue_30();
		String_t* L_17 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, L_17);
		// foreach (JoystickController joystick in Joysticks)
		JoystickControllerU5BU5D_t1030675CFD85A2DE4BD3F39CCC2FBE00F292B0E7* L_18 = __this->get_Joysticks_16();
		V_0 = L_18;
		V_1 = 0;
		goto IL_00e3;
	}

IL_0095:
	{
		// foreach (JoystickController joystick in Joysticks)
		JoystickControllerU5BU5D_t1030675CFD85A2DE4BD3F39CCC2FBE00F292B0E7* L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		// joystick.MoveSpeed = CurrentMoveValue;
		JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 * L_23 = L_22;
		float L_24 = __this->get_CurrentMoveValue_25();
		NullCheck(L_23);
		L_23->set_MoveSpeed_13(L_24);
		// joystick.ScaleSpeed = CurrentScaleValue;
		JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 * L_25 = L_23;
		float L_26 = __this->get_CurrentScaleValue_26();
		NullCheck(L_25);
		L_25->set_ScaleSpeed_15(L_26);
		// joystick.RotationSpeed = CurrentRotateValue;
		JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 * L_27 = L_25;
		float L_28 = __this->get_CurrentRotateValue_27();
		NullCheck(L_27);
		L_27->set_RotationSpeed_14(L_28);
		// joystick.ReboundSpeed = CurrentReboundValue;
		JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 * L_29 = L_27;
		float L_30 = __this->get_CurrentReboundValue_28();
		NullCheck(L_29);
		L_29->set_ReboundSpeed_9(L_30);
		// joystick.SensitivityLeftRight = CurrentSensitivityHorizontalValue;
		JoystickController_tDF7C10FE5DFB7814062E2FFFDCEB8781C30769A4 * L_31 = L_29;
		float L_32 = __this->get_CurrentSensitivityHorizontalValue_29();
		NullCheck(L_31);
		L_31->set_SensitivityLeftRight_10(L_32);
		// joystick.SensitivityForwardBack = CurrentSliderSensitivityVerticalValue;
		float L_33 = __this->get_CurrentSliderSensitivityVerticalValue_30();
		NullCheck(L_31);
		L_31->set_SensitivityForwardBack_11(L_33);
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00e3:
	{
		// foreach (JoystickController joystick in Joysticks)
		int32_t L_35 = V_1;
		JoystickControllerU5BU5D_t1030675CFD85A2DE4BD3F39CCC2FBE00F292B0E7* L_36 = V_0;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))))
		{
			goto IL_0095;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Joystick.JoystickSliders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSliders__ctor_mD7E0353AECF2DAA591D6C4C0B15C4BC0EC34DC7A (JoystickSliders_t33A774EDB7A9E2FC530C57243228FBE006423813 * __this, const RuntimeMethod* method)
{
	{
		// private float MinimumFloatValue = 0.001f;
		__this->set_MinimumFloatValue_17((0.001f));
		// private int MinimumIntValue = 1;
		__this->set_MinimumIntValue_18(1);
		// private float DefaultMoveValue= 0.001f;
		__this->set_DefaultMoveValue_19((0.001f));
		// private float DefaultScaleValue= 0.0001f;
		__this->set_DefaultScaleValue_20((0.0001f));
		// private float DefaultRotateValue = 0.3f;
		__this->set_DefaultRotateValue_21((0.3f));
		// private float DefaultReboundValue = 5f;
		__this->set_DefaultReboundValue_22((5.0f));
		// private float DefaultSensitivityHorizontalValue = 3f;
		__this->set_DefaultSensitivityHorizontalValue_23((3.0f));
		// private float DefaultSliderSensitivityVerticalValue = 6f;
		__this->set_DefaultSliderSensitivityVerticalValue_24((6.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SurfacePulse.HideOnDevice::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideOnDevice_Start_m54F99748018C6D8F6554664933E8F81730078FEC (HideOnDevice_tAA8B26FBB296C8E9D6E223616395BD5CF7E6E034 * __this, const RuntimeMethod* method)
{
	{
		// if (!Application.isEditor)
		bool L_0 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SurfacePulse.HideOnDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideOnDevice__ctor_mDD8D74DB5D82C8D57D3C11E025EC2201D19CEF46 (HideOnDevice_tAA8B26FBB296C8E9D6E223616395BD5CF7E6E034 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardTest::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardTest_OnPointerDown_mC0CD375596728B577FBEA6383F9F399E65EE1317 (KeyboardTest_tBD60D1BE6455A0A4A9C07AD079A7496BB93B93E8 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyboardTest_OnPointerDown_mC0CD375596728B577FBEA6383F9F399E65EE1317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keyboard.PresentKeyboard();
		NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * L_0 = __this->get_keyboard_4();
		NullCheck(L_0);
		NonNativeKeyboard_PresentKeyboard_m9C54CA1102D22568A14FFD032C0C9527395282E0(L_0, /*hidden argument*/NULL);
		// keyboard.OnClosed += DisableKeyboard;
		NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * L_1 = __this->get_keyboard_4();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_2 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_2, __this, (intptr_t)((intptr_t)KeyboardTest_DisableKeyboard_mA03CE49C7B686DCCE5120D607E42DD5F5D17B3A1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		NonNativeKeyboard_add_OnClosed_mB2B1CA7D629E3DB698F1387A58DF8950352BE8E7(L_1, L_2, /*hidden argument*/NULL);
		// keyboard.OnTextSubmitted += DisableKeyboard;
		NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * L_3 = __this->get_keyboard_4();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_4 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_4, __this, (intptr_t)((intptr_t)KeyboardTest_DisableKeyboard_mA03CE49C7B686DCCE5120D607E42DD5F5D17B3A1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		NonNativeKeyboard_add_OnTextSubmitted_m9F5CCB226967686E0B849B0F809D27342E68AA5F(L_3, L_4, /*hidden argument*/NULL);
		// keyboard.OnTextUpdated += UpdateText;
		NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * L_5 = __this->get_keyboard_4();
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_6 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_6, __this, (intptr_t)((intptr_t)KeyboardTest_UpdateText_m3AF9F7D94C45FC6C701B2B7F34A4FCEB253821DD_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		NullCheck(L_5);
		NonNativeKeyboard_add_OnTextUpdated_mC8902629A9595F2ABB98AA8EA730D8E905032288(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardTest::UpdateText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardTest_UpdateText_m3AF9F7D94C45FC6C701B2B7F34A4FCEB253821DD (KeyboardTest_tBD60D1BE6455A0A4A9C07AD079A7496BB93B93E8 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyboardTest_UpdateText_m3AF9F7D94C45FC6C701B2B7F34A4FCEB253821DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<TMP_InputField>().text = text;
		TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * L_0 = Component_GetComponent_TisTMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB_m9F5493645F33D9F758799CDFACAF1658443029EB(__this, /*hidden argument*/Component_GetComponent_TisTMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB_m9F5493645F33D9F758799CDFACAF1658443029EB_RuntimeMethod_var);
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		TMP_InputField_set_text_m38266A67B7B57B95605E61D615DF187890C526BB(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardTest::DisableKeyboard(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardTest_DisableKeyboard_mA03CE49C7B686DCCE5120D607E42DD5F5D17B3A1 (KeyboardTest_tBD60D1BE6455A0A4A9C07AD079A7496BB93B93E8 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyboardTest_DisableKeyboard_mA03CE49C7B686DCCE5120D607E42DD5F5D17B3A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keyboard.OnTextUpdated -= UpdateText;
		NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * L_0 = __this->get_keyboard_4();
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_1, __this, (intptr_t)((intptr_t)KeyboardTest_UpdateText_m3AF9F7D94C45FC6C701B2B7F34A4FCEB253821DD_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		NullCheck(L_0);
		NonNativeKeyboard_remove_OnTextUpdated_m90606815071EA9FC2FF887C7C6BDED008C7C13BD(L_0, L_1, /*hidden argument*/NULL);
		// keyboard.OnClosed -= DisableKeyboard;
		NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * L_2 = __this->get_keyboard_4();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_3, __this, (intptr_t)((intptr_t)KeyboardTest_DisableKeyboard_mA03CE49C7B686DCCE5120D607E42DD5F5D17B3A1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		NonNativeKeyboard_remove_OnClosed_m1B3B39035F1F3446A4E95D16EAE03594B7867545(L_2, L_3, /*hidden argument*/NULL);
		// keyboard.OnTextSubmitted -= DisableKeyboard;
		NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * L_4 = __this->get_keyboard_4();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_5 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_5, __this, (intptr_t)((intptr_t)KeyboardTest_DisableKeyboard_mA03CE49C7B686DCCE5120D607E42DD5F5D17B3A1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		NonNativeKeyboard_remove_OnTextSubmitted_m6EDECFBADE9623FA51BB0A87AF902436A624FB2F(L_4, L_5, /*hidden argument*/NULL);
		// keyboard.Close();
		NonNativeKeyboard_t7EBFB316BFF24EAD7F5D3A02EDE4C6366DDAE75A * L_6 = __this->get_keyboard_4();
		NullCheck(L_6);
		NonNativeKeyboard_Close_mD9508A4B67CA38FDA35CDE1D1FBF267BE7A37BD0(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardTest__ctor_m9C289A229E5CFD710E448F88B989EAD9229C8908 (KeyboardTest_tBD60D1BE6455A0A4A9C07AD079A7496BB93B93E8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  BaseInputEventData_get_MixedRealityInputAction_mB4E271972D8977E9561E68A129BED3F789B983D6_inline (BaseInputEventData_t3C7EC0E93B3BA6538CBBE16F77ECE5115B610981 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInputAction MixedRealityInputAction { get; private set; }
		MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_0 = __this->get_U3CMixedRealityInputActionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  MixedRealityInputAction_get_None_mFCF5467E10262F79CB726599477FC8CE7EDFEEBE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInputAction_get_None_mFCF5467E10262F79CB726599477FC8CE7EDFEEBEMicrosoft_MixedReality_Toolkit_Examples2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction None { get; } = new MixedRealityInputAction(0, "None");
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726  L_0 = ((MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputAction_tF5A84443CD7E65C88A47D12BEDC2B994AFE7D726_il2cpp_TypeInfo_var))->get_U3CNoneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HandPanEventData_get_PanDelta_m876D070AADF78064C1D85108A550DE950A8205C1_inline (HandPanEventData_tD05B4ABADBD43876B4F63600C138606362F86E4A * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 PanDelta { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CPanDeltaU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool DwellProfileWithDecay_get_AllowDwellDecayOnCancel_mB8A7BDAA114B13C1AE6D5C82C6263C6C2C1681A1_inline (DwellProfileWithDecay_tB212F20A5AC3C89D588D578B617C38823EC82253 * __this, const RuntimeMethod* method)
{
	{
		// return allowDwellDecayOnCancel;
		bool L_0 = __this->get_allowDwellDecayOnCancel_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PinchSlider_get_SliderValue_m7F64FFB67297B1CBD728B719B5BFC3965CCF707D_inline (PinchSlider_tA5C5BBC5BED615E366FE5090C60F7AD2BD40F999 * __this, const RuntimeMethod* method)
{
	{
		// get { return sliderValue; }
		float L_0 = __this->get_sliderValue_5();
		return L_0;
	}
}
